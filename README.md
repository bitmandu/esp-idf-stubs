# esp-idf-stubs

Test doubles for unit testing [ESP-IDF][1] components on a linux
target.

**Note**: These are *very* incomplete and are only intended to support
my own projects (for now). This [SHT4x sensor component][sht4x] shows
these in action.

## Installation

To install these components using the [IDF Component Manager][2], add
the following to your `idf_component.yml`:

    dependencies:
      idf:
        version: ">=4.1.0"

      driver:
        git: https://github.com/bitmandu/esp-idf-stubs.git
        path: driver
      hal:
        git: https://github.com/bitmandu/esp-idf-stubs.git
        path: hal
      soc:
        git: https://github.com/bitmandu/esp-idf-stubs.git
        path: soc

Then update your managed components.

    $ idf.py reconfigure

## Help / Contributing

[Bug reports][issues] and [pull requests][pulls] are very much
encouraged.

## License

[MIT](LICENSE)


[issues]: https://github.com/bitmandu/esp-idf-stubs/issues
[pulls]: https://github.com/bitmandu/esp-idf-stubs/pulls
[1]: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/index.html
[2]: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/tools/idf-component-manager.html
[sht4x]: https://github.com/bitmandu/sht4x/tree/main/test
