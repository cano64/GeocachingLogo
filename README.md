GeocachingLogo
==========

GeocachingLogo is Arduino library to display geocaching logo on a 1602 (or similar) display 
using custom defined characters. It's to be used on Arduino based geocaches.

The library contains a few different geocaching logos including Groundspeak one.
The logo can be selected by passing a second parameter to the constructor

```
GeocachingLogo glogo(&lcd, 0); //display generic logo
GeocachingLogo glogo(&lcd, 1); //display Groundspeak logo

```

The artwork itself in this library is mine and I release it under GNU GPL.

Groundspeak Geocaching Logo is a registered trademark of Groundspeak, Inc.
See Logo Usage Guidelines here http://www.geocaching.com/about/logousage.aspx
Used with permission.

