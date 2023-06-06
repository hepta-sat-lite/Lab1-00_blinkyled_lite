#include "mbed.h"
DigitalOut myled(LED1);
int main()
{
    while (true) {
        myled = 1;
        wait_ms(500);
        myled = 0;
        wait_ms(500);
    }
}