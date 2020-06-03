# Arduino TSController 
An Arduino library for controlling Train Simulator, based on keyboard simulation.
NOTE: Train Simulator has the problem that is not compatible with any sort of analog interface, for example throttle lever is actuated by pressing A and D buttons on a keyboard. This library uses a method based on simulated key presses for a time calculated on the basis of the lever position.
I do not intend to say that it is the best possible method or that it works in the best way, but it is the best solution that I have managed to find for the moment.
Different trains will work differently, so I had to make some different implementations of the regulator and the brake section.
A list with required configuration based upon different trains is under construction.

## Usage

Keyboard input must be set to US in the computer. This enables the correct key binding to the system.
Full documentation is available in the example files and in the Wiki section on GitHub.
- [Regulator&Brake usage](https://github.com/VassilyDev/TSController/wiki/Regulator&Brake)
- [Commands](https://github.com/VassilyDev/TSController/wiki/Commands)

## Compatible Hardware

Works on Arduino boards with HID support. Tested boards:
- Arduino Micro
- Arduino Leonardo
- Piskey Atto

## Installation

### Using the Arduino IDE Library Manager

1. Choose `Sketch` -> `Include Library` -> `Add .ZIP Library...`
2. Select the library downloaded from GitHub as ZIP.

### Using Git

```sh
cd ~/Documents/Arduino/libraries/
git clone https://github.com/VassilyDev/TSControl
```

## Examples

See [examples](examples) folder.
[![Test drive](https://gifs.com/gif/traincontroller-v1-oVBZ4B)](https://www.youtube.com/watch?v=tqS4coBAUao)

## License

This library is [licensed](LICENSE) under the [MIT Licence](http://en.wikipedia.org/wiki/MIT_License).
