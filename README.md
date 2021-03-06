# SoftRF  [![Join the chat at https://gitter.im/lyusupov/SoftRF](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/lyusupov/SoftRF?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

Multifunctional DIY IoT-based general aviation proximity awareness system.

Features:
* 2-way raw data bridge between 868/915 MHz radio band and Wi-Fi ;
* standalone, battery powered, compatible proximity awareness instrument that fits typical 2.25 inches hole ;
* lightweight version to carry onboard of an UAV.

# Compatibility
Type|Protocol|FLARM|OGN tracker|PilotAware|Skytraxx|SoftRF
---|---|---|---|---|---|---
Radio|FLARM AIR V6|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>||||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>
&nbsp;|<p align="center">OGNTP</p>||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)<sup>1</sup></p>
&nbsp;|<p align="center">P3I</p>|||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)<sup>1</sup></p>
&nbsp;|<p align="center">FANET</p>||||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)<sup>1</sup></p>
Data|FLARM NMEA|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>
&nbsp;|Garmin GDL90|||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>
&nbsp;|<p align="center">MAVLINK</p>|<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>||||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>
&nbsp;|<p align="center">Dump1090 &nbsp;<sup>2</sup></p>|||||<p align="center">![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/check-mark_32.png)</p>

<sup>1</sup> - with optional DIY [SoftRF LoRa RF module](https://github.com/lyusupov/SoftRF/wiki/SoftRF-LoRa-module)<br>
<sup>2</sup> - also known as "raw ADS-B"<br>

# Documentation

* SoftRF overview
    * [Part 1](https://github.com/lyusupov/SoftRF/blob/master/documents/SoftRF-release-1.pdf) (PDF, December 2015)
    * [Part 2](https://github.com/lyusupov/SoftRF/raw/master/documents/SoftRF-release-2.pdf) (PDF, March 2017) <!--![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg) -->
* [Standalone Edition](https://github.com/lyusupov/SoftRF/wiki/Standalone-Edition)
    * [Specifications](https://github.com/lyusupov/SoftRF/wiki/Standalone-Specifications)
    * [Shield](https://github.com/lyusupov/SoftRF/wiki/Standalone-Shield)
    * [Modules](https://github.com/lyusupov/SoftRF/wiki/Standalone-Modules)
    * [Enclosure](https://github.com/lyusupov/SoftRF/tree/master/case/v4)
* [UAV Edition](https://github.com/lyusupov/SoftRF/wiki/UAV-Edition)
    * [Bill of materials](https://github.com/lyusupov/SoftRF/wiki/UAV-BOM)
    * [Wiring and pin-out](https://github.com/lyusupov/SoftRF/wiki/UAV-Wiring)
    * [Enclosure](https://github.com/lyusupov/SoftRF/tree/master/case/UAV)
* [Prime Edition](https://github.com/lyusupov/SoftRF/wiki/Prime-Edition)
    * [Bill of materials](https://github.com/lyusupov/SoftRF/wiki/Prime-BOM)
    * [Wiring](https://github.com/lyusupov/SoftRF/wiki/Prime-Wiring)
    * [Enclosure](https://github.com/lyusupov/SoftRF/tree/master/case/v1)
* Software
    * Firmware
        * [Binary](https://github.com/lyusupov/SoftRF/tree/master/software/firmware/binaries)
        * [Source](https://github.com/lyusupov/SoftRF/tree/master/software/firmware/source)
    * Applications
        * [Emulator](https://github.com/lyusupov/SoftRF/tree/master/software/app/Emulator)
* Extras
    * [Long range (LoRa) RF module](https://github.com/lyusupov/SoftRF/wiki/SoftRF-LoRa-module) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)
    * Protocols
        * [OGNTP](https://github.com/lyusupov/SoftRF/wiki/OGNTP-compatibility) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)
        * [P3I Open (PilotAware)](https://github.com/lyusupov/SoftRF/wiki/PilotAware-compatibility) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)
        * [FANET (Skytraxx)](https://github.com/lyusupov/SoftRF/wiki/FANET-compatibility) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)
    * [Garmin GDL90 datalink](https://github.com/lyusupov/SoftRF/wiki/Garmin-GDL90-compatibility) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)
    * [Integration with airborne (Stratux, PilotAware,...) and groundstation (FlightRadar24, FlightAware,...) ADS-B receivers](https://github.com/lyusupov/SoftRF/wiki/Integration-with-RTL%E2%80%90SDR-based-ADS%E2%80%90B-receivers) ![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/new-icon.jpg)

# Highlights

* **Standalone**

![](https://github.com/lyusupov/SoftRF/blob/master/case/v4/SoftRF-Case-v4-Exterior.jpg)

![](https://github.com/lyusupov/SoftRF/blob/master/documents/images/first-five-units.jpg)

* **Software driven**

![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/softrf-emulation.jpg)

![](https://github.com/lyusupov/SoftRF/raw/master/documents/images/LK8000-emu.jpg)

![](https://github.com/lyusupov/SoftRF/blob/master/case/v1/SoftRF-Case-v1-Exterior.jpg)

* **UAV appliance**

![](https://github.com/lyusupov/SoftRF/blob/master/documents/images/softrrf-case-uav-ext.jpg )
