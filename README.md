# Alex's STM8 stuffs

This repository is a set of small educational STM8 projects I did for my 
personal entertainment and enlightenment. It's done with a plain Linux, 
plain C, Makefile, and a shell environment.

Unless specified otherwise, those projects are targeting the STM8S207
Nucleo-32 board equiped with the STM8S207K8.

## Tutorials

The tutorials are more or less in topological order : later tutorials are 
building upon earlier tutorials. Each tutorial has some notes I took, as an 
attempt to leave the least amount of mystery.

1. [led-blinker](tutorials/led-blinker) : blinks the Nucleo-32 on-board led
1. [timer-2](tutorials/timer-2) : blinks the Nucleo-32 on-board led, using timer interruptions and put the MCU in sleep mode most of the time
1. [uart-polling-write](tutorials/uart-polling-write) : send a message on the UART, using polling
1. [uart-interrupt-write](tutorials/uart-interrupt-write) : send a message on the UART, using interrupts and a ring buffer

## Software environment

### Archlinux 

On a vanilla Archlinux, install the following packages:

* [sdcc](https://archlinux.org/packages/community/x86_64/sdcc/) C language toolchain for STM8
* [picocom](https://archlinux.org/packages/community/x86_64/picocom/) Minimalistic serial terminal

I also installed those packages from the AUR packages repository

* [stm8flash-git](https://aur.archlinux.org/packages/stm8flash-git) Uploading tool for STM8 boards

## Information sources

I gathered the information I needed to realize the tutorials from those sources

* [STM8S207 Nucleo-32 datasheet](https://www.st.com/resource/en/user_manual/dm00489875-stm8-nucleo-32-board-mb1442-stmicroelectronics.pdf) Reference for details like pin functionalities, STLink version to use, etc.
* [STM8S207 datasheet](https://www.st.com/resource/en/datasheet/stm8s207mb.pdf) Reference manual for STM8S207
* [STM8S reference manual](https://www.st.com/resource/en/reference_manual/rm0016-stm8s-series-and-stm8af-series-8bit-microcontrollers-stmicroelectronics.pdf) Reference manual for STM8S207
* [Bare Metal Programming STM8](https://lujji.github.io/blog/bare-metal-programming-stm8/) Excellent, complete article introducing low-level programming of the STM8

## Authors

* **Alexandre Devert** - [marmakoide](https://github.com/marmakoide)
