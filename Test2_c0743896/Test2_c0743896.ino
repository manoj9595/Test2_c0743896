// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>
InternetButton b = InternetButton();

void setup() {
    // Tell b to get everything ready to go
    // Use b.begin(1); if you have the original SparkButton, which does not have a buzzer or a plastic enclosure
    // to use, just add a '1' between the parentheses in the code below.
    b.begin();
}

/* loop(), in contrast to setup(), runs all the time. Over and over again.
Remember this particularly if there are things you DON'T want to run a lot. Like Particle.publish() */
void loop() {
    // Let's turn an LED on. How about #6, which is at the 6 o'clock position? Let's make it blue and bright.
    b.ledOn(1, 255, 255,255) ;
    b.ledOn(11, 255, 255,255)  ;
    b.ledOn(6, 255, 255,255)  ;
    b.ledOn(5, 255, 255,255)  ;
    b.ledOn(4, 255, 255,255)  ;
    b.ledOn(7, 255, 255,255)  ;
    b.ledOn(8, 255, 255,255)  ;
    b.ledOn(9, 255, 255,255)  ;
    b.ledOn(3, 255, 255,255)  ;
    
    // The format here is (LED, red, green, blue), so we're making a color with no red or green, but ALL the blue
    // You should know that the range of brightness here is 0-255, so 0 is off and 255 is the most possible.
    // After you use this code, try making the LED white- all the red, green, and blue.

    // Since the LED is now on, let's have it stay that way for one second
    // Delay pauses the code for the amount of time given, in milliseconds- so 1000 millis is one whole second
    delay(1000);

    // And to blink the LED, we'll need to turn it back off and then pause for another second
    b.ledOff(1) ;
    b.ledOff(11)  ;
    b.ledOff(7)  ;
    b.ledOff(8)  ;
    b.ledOff(6)  ;
    b.ledOff(5)  ;
    b.ledOff(4)  ;
    b.ledOff(3)  ;
    b.ledOff(9)  ;
    
    
    // delay(1000);
    
    // b.ledOn(1, 255, 255,255) ;
    // b.ledOn(11, 255, 255,255)  ;
    // b.ledOn(6, 255, 255,255)  ;
    // b.ledOn(5, 255, 255,255)  ;
    // b.ledOn(4, 255, 255,255)  ;
    // b.ledOn(7, 255, 255,255)  ;
    // b.ledOn(8, 255, 255,255)  ;
    // b.ledOn(9, 255, 255,255)  ;
    // b.ledOn(3, 255, 255,255)  ;
    
    
    delay(1000);
    
    b.ledOff(9)  ;
    b.ledOff(3)  ;
    
    delay(1000);
    
    b.ledOn(1, 255, 255,255) ;
    b.ledOn(11, 255, 255,255)  ;
    b.ledOn(6, 255, 255,255)  ;
    b.ledOn(5, 255, 255,255)  ;
    b.ledOn(4, 255, 255,255)  ;
    b.ledOn(7, 255, 255,255)  ;
    b.ledOn(8, 255, 255,255)  ;
    
    delay(1000);
   
    
    b.ledOff(4)  ;
    b.ledOff(8)  ;
    
    delay(1000);
    
    b.ledOn(1, 255, 255,255) ;
    b.ledOn(11, 255, 255,255)  ;
    b.ledOn(6, 255, 255,255)  ;
    b.ledOn(5, 255, 255,255)  ;
    b.ledOn(7, 255, 255,255)  ;
    
    delay(1000) ;
    
    b.ledOff(5)  ;
    b.ledOff(7)  ;
    
    delay(1000);
    
    b.ledOff(6)  ;
    
    delay(1000);
    
    b.ledOn(1, 255, 0, 0) ;
    b.ledOn(11, 255, 0, 0)  ;
    b.ledOn(5, 255, 0, 0)  ;
    b.ledOn(7, 255, 0, 0)  ;
    
    delay(10000);
    
    b.allLedsOff();
    delay(1000);    // Now you're blinking! Play with which LED is blinking (1-11), the delays between, and the color.
}
