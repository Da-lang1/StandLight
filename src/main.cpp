#include <iostream>
#include "Button.h"
#include "Led.h"
#include <wiringPi.h>
#include "Listener.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    
    Button button1(27);
    Led led1(25);
    Listener listener(&button1, &led1);
    
    while(1)
    {
        // if (powerButton.getState()==RELEASE_ACTIVE){
        //     light.Toggle();
        // }
        listener.checkEvent();
        delay(50);

    }

    return 0;
}