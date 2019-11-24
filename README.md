Arduino Light Show
=======

## Table Of Contents
* [Introduction](#introduction)
* [Libraries](#libraries)
  * [Colors](#colors)
* [Projects](#projects)
  * [Lights Off](#lights-off)
  * [Rainbow](#rainbow)

## Introduction

This is my first attempt at building a cool LED light show based off of an
Arduino Uno and 16ft of LEDs (150 pixels). I'll update this README as I go.

This project relies heavily on [FastLED](https://github.com/FastLED/FastLED).

This project was also started and inspired by [Project Tempos](https://www.temposlighting.com/guides/how-to-add-custom-leds-to-any-project).

## TODO

* Build abstractions to simplify applying effects to strands.
* Build more projects.
* Build generator scripts for new libraries.

## Libraries

### Colors

A library of functions for setting LEDs to specific colors. Not ready for use.

## Projects

### Double Flat Alternating

Simple pattern of 8 beats alternating 2 colors.

### Lights Off

Simple Project for turning off all lights. Hardcoded to 150 pixels at the
moment.

### Rainbow

Code taken directly from [Project Tempos](https://www.temposlighting.com/guides/how-to-add-custom-leds-to-any-project). All credit to them.

### Ring

Running rainbow snake.

### Confetti
Imported from [atuline's FastLED-Demos repo](https://github.com/atuline/FastLED-Demos)

Running rainbow snake.

## Scripts

  If you encounter a permissions error ("permission denied:") run
```sh
chmod u+x scripts/failing-script-file-name
```

### new-project

new-project is a simple wrapper around the arduino-cli command to create a new
sketch.