Note
====

This version has modifications to Danny Baumann's EMS patches and is only
intended for use in the EMS gateway based on Pollins NetIO.

It is NOT compatible with the older RC35 Buderus control units and similar!

It implements the changes for the Bosch EMS2 dialect used by Bosch Condens
9800i heating systems or similar using the UI800 control unit.



About Ethersex
==============
Ethersex, originally developed to provide an alternative firmware for the [etherrape hardware](http://www.lochraster.org/etherrape),
evolved into a full-featured still light-weight firmware for the Atmel megaAVR processors.  
For more information and a comprehensive documentation  consult [http://www.ethersex.de](http://www.ethersex.de)!

How to configure the firmware
=============================
Make sure that you meet the requirements.  
Use `make menuconfig` to configure and `make` to compile the firmware.
The final hex file is named `ethersex.hex`.

[See the Quick Start Guide in the wiki for more information](http://ethersex.de/index.php/Quick_Start_Guide)

How to add a new hardware pinning
=================================
Use the script at `scripts/add-hardware` to add a new pinning.


Used 3rd party software 
=======================
This program contains software by other authors:

* [the uIP tcp/ip stack](http://www.sics.se/~adam/uip) in the directory `/protocols/uip/`, written by Adam Dunkels
* [usb-software stack from obdev](http://www.obdev.at/products/vusb/index.html) in `/protocols/usb/usbdrv/`
* [sd card reader](http://www.roland-riegel.de/sd-reader/index.html) in `/hardware/storage/sd_reader`

License
=======
All ethersex related code is licensed under GPLv3, unless otherwise noted. See COPYING in the main
directory, but in doubt check the file header. Usually every file contains a
header, stating all contributing authors and the specific license used.

Various make targets
====================

* `make show-config` -- Shows the activated modules
