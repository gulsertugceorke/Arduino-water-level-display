# Arduino-water-level-display
The water level is shown in this project. 
A water level sensor is placed in a glass of water.
And the values are read according to the water density.
3 LEDs are used in the project, these LEDs are connected to pins 2, 3 and 4.
Serial.begin (9600); Used to initiate serial communication. Written into void setup() function.
Inside the loop function there is a variable named value which read the input on analog pin A0.
If the reading is greater than 90, Very Heavy Rain will print on the screen.
And the red led lights up, the other 2 leds do not light.
If the reading is greater than 60 and less than or equal to 89, AVERAGE Rain is printed on the screen.
In this case, the green led is lit and the other leds are not lit.
In cases other than these, dry weather is printed on the screen and the blue LED lights up, the other LEDs do not light.
