👋 Hello, to build the air quality measuring device you need:
- 1 arduino card
- 1 LCD screen
- 1 buzzer
- 1 Breadboard
- Some connection cable
- 1 MQ135 module
- 3 resistors (150Ω and 180Ω, Depending on your LEDs this may change)
- 3 LEDs (green, yellow, red)

👍 In the "Air_Quality_Motitor.ino" file you will find the code to put in the Arduino IDE.

👍 In the "plan.png" file you will find the installation diagram of the air quality measuring device.



‼️ Depending on the sensitivity threshold of your MQ135 module, the value may vary! You can change the values ​​of lines #34 and #43.

‼️ If an error you have a problem with your LCD screens you must modify line n°3! To find the code for your LCD screen, enter this code (https://github.com/LucasDevLab/Air-quality-measurement/blob/main/i2c_scanner.ino) into the Arduino and it will display your code (for example: 0x3F,16,2)
