#include <iostream>
#include <chrono>
#include <thread>

#define LED 0

int main (int argc, char **argv)
{
	wiringPiSetup();
	pinMode(LED,OUTPUT);
    
    while(1)
     {
       digitalWrite (LED, HIGH);
       delay (500);
       digitalWrite (LED,  LOW);
       delay (500);

     }

 return 0 ;
}
