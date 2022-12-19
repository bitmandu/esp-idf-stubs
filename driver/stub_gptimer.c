/**
 * @file stub_gptimer.c
 *
 * Test stub for driver/gptimer.h interface.
 */

#include "driver/stub_gptimer.h"

#define MAX_TIMERS 8

struct gptimer_t {
    int id;
    gptimer_config_t config;
    gptimer_alarm_config_t alarm_config;
    gptimer_alarm_cb_t alarm_cb;
    void *alarm_user_data;
};

static struct gptimer_t timers[MAX_TIMERS];
static int num_timers;

esp_err_t gptimer_new_timer(const gptimer_config_t *config, gptimer_handle_t *ret_timer)
{
    int i = num_timers;

    if (i == MAX_TIMERS) {
        return ESP_ERR_NO_MEM;
    }

    timers[i].id = i;
    timers[i].config = *config;
    ++num_timers;

    *ret_timer = &timers[i];
    return ESP_OK;
}

esp_err_t gptimer_set_alarm_action(gptimer_handle_t timer,
                                   const gptimer_alarm_config_t *config)
{
    timer->alarm_config = *config;
    return ESP_OK;
}

esp_err_t gptimer_register_event_callbacks(gptimer_handle_t timer,
                                           const gptimer_event_callbacks_t *event_cb,
                                           void *user_data)
{
    timer->alarm_cb = event_cb->on_alarm;
    timer->alarm_user_data = user_data;
    return ESP_OK;
}

esp_err_t gptimer_del_timer(gptimer_handle_t timer)
{
    return ESP_OK;
}

gptimer_config_t *stub_gptimer_spy_config(gptimer_handle_t timer)
{
    return &timer->config;
}

void stub_gptimer_trigger_alarm(gptimer_handle_t timer,
                                const gptimer_alarm_event_data_t *event_data)
{
    timer->alarm_cb(timer, event_data, timer->alarm_user_data);
}
