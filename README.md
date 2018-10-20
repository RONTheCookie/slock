# slock - simple screen locker

simple screen locker utility for X.

## fork
it doesnt have anything special yet, just my config.h. I need to improve my C skills more until I can actually get something useful done with this.


## Requirements

In order to build slock you need the Xlib header files.


## Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):
```
    make clean install
```

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.
