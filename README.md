# AVR - Arduino Uno: External Interrupt
This code makes use of the first (INT0) external interrupt of the Arduino-Uno.
This time, an external LED (on PIN7) is used as a demonstration that bit masking is important so as not to accidentally
set a bit to HIGH or LOW because the interrupt pin and the output pin in this code are from the same pin group.

For more information, consult the ATMega328p datasheet, pages 53-55.

##  How to upload the code:
###     A. Through Arduino IDE
           1. Copy main.c content as text
           2. Paste it to an empty Arduino sketch
           3. Connect Arduino-Uno through USB
           4. Upload code through the button
    
       
### B. Command line
       1. Make sure you have AVR-GCC toolchain installed, this include GNU-Make and AVRDude.
       2. The only files you are going to need for this method are "main.c" and "Makefile"
       3. Simply open CMD or terminal with its directory set to the location in which you
          have both of those files in.
       4. Type "make" as a command without the quotes.
       5. Makefile automates the process.
