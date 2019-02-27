## Info
I treated the dactyl (not-manuform) as a 6x6 (each side) layout, with 1 missing key on the inside of row 5. Row 6 is just the thumb cluster unwrapped. I ordered the thumb row opposite on mirrored on each side, so start on first 2u on left, top right 1u key on right. Otherwise, eerything is pretty standard.   

## Creating Hex

`sudo make handwired/dactyl_manuform/fontaine:colemak`


## Flash

`sudo avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:handwired_dactyl_manuform_fontaine_colemak.hex`


## Issues

**1.** ERROR: address 0x8001f8 out of range...

[Link](https://www.reddit.com/r/olkb/comments/94duwj/issue_flashing_lets_split/)   

In file:
`tmk_core/common/avr/bootloader.c`   

Change:
```
// uint32_t reset_key  __attribute__ ((section (".noinit")));
uint32_t reset_key __attribute__ ((section (".noinit,\"aw\",@nobits;")));
```   

**2.** avrdude: Error: butterfly programmer uses avr_write_page() but does not provide a cmd() method

[Link 1](https://arduino.stackexchange.com/questions/61359/avrdude-error-butterfly-programmer-uses-avr-write-page-but-does-not-provide)   

[Link 2](https://forum.arduino.cc/index.php?topic=129647.msg3039571#msg3039571)   

Run:
`sudo systemctl stop ModemManager.service`   


