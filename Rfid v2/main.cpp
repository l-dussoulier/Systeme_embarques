#include "lib/rfid/MFRC522.h"
#include <wiringPi.h>


#define ACTION 6

void delay(int ms) {
    usleep(ms*1000);
}

int main() {
    wiringPiSetup();
    bool ledOn = true;
    RFID *reader = new RFID();

    while(1) {
        if (reader->isReading()) {

            display->reading();

            if (reader->success())
            {
                display->success();
		    }
            else
            {
                display->error();
            }
        }
        display->waiting();

    }

    return 0;
}
