Hello, to build the air quality measuring device you need:
- 1 arduino card
- 1 LCD screen
- 1 buzzer
- 1 Breadboard
- Some connection cable
- 1 MQ135 module
- 3 resistors (150Ω and 180Ω)
- 3 LEDs (green, yellow, red)

In the "Air_Quality_Motitor.ino" file you will find the code to put in the Arduino IDE.

In the "plan.png" file you will find the installation diagram of the air quality measuring device.


/!\ Selon le seuil de sensibilité de votre module MQ135 la valeur peut varié ! Vous pouvez changer les valeur des ligne n°34 Eet n°43.

/!\ Si une erreur vous avez un probleme avec votre écrans lcd il faut modifier la ligne n°3 ! Pour trouver le code de votre écran lcd rentrer ce code dans L'arduino et il afficheras votre code (par exemple :0x3F,16,2)
