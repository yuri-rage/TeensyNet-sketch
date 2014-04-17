Collection of files relating to the TeensyNet project at https://github.com/jimmayhugh/TeensyNet.

The "modular-code" branch is an attempt to break the sketch down into manageable chunks without requiring an overly in-depth background in programming for any follow-on user.

The following step will allow the Arduino IDE build process to succeed on Linux and possibly OS X.  Windows compatibility to follow.

Issue this command prior to launching the Arduino IDE to work on TeensyNet for the first time:
ln -s ~/sketchbook/TeensyNet/lib ~/sketchbook/libraries/TeensyNet_libs

That command needs only to be issued once, as it creates a symbolic link to the libraries required by the IDE.
