## Info
I treated the dactyl (not-manuform) as a 6x6 (each side) layout, with 1 missing key on the inside of row 5. Row 6 is just the thumb cluster unwrapped. I ordered the thumb row opposite (mirrored) on each side, so start on first 2u on left side, top right 1u key on right side. [Link](http://www.keyboard-layout-editor.com/#/gists/eee9720d5937c653e0cc8de17b4ca48c) for reference. Otherwise, erything is pretty standard.   

## Pins
`D0`  TRRS Data
`D3`  LED Data

## Creating Hex

`sudo make handwired/dactyl_manuform/fontaine:colemak`


## Flash

`sudo avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:handwired_dactyl_manuform_fontaine_colemak.hex`


## Issues

**1.** When creating hex => `ERROR: address 0x8001f8 out of range...`

[Link](https://www.reddit.com/r/olkb/comments/94duwj/issue_flashing_lets_split/)   

Fix (in file `tmk_core/common/avr/bootloader.c`):
```
// uint32_t reset_key  __attribute__ ((section (".noinit")));
uint32_t reset_key __attribute__ ((section (".noinit,\"aw\",@nobits;")));
```   

**2.** When flashing with avrdude => `Error: butterfly programmer uses avr_write_page() but does not provide a cmd() method`

[Link 1](https://arduino.stackexchange.com/questions/61359/avrdude-error-butterfly-programmer-uses-avr-write-page-but-does-not-provide)   

[Link 2](https://forum.arduino.cc/index.php?topic=129647.msg3039571#msg3039571)   

Fix (run):
`sudo systemctl stop ModemManager.service`   