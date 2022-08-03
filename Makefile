default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p  main.c -o main.bin
	avr-objcopy -O ihex -R .eeprom main.bin main.hex
	sudo avrdude -v -D -F -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex:i
