#include "TrafficLight.h"
#include "Button.h"
#include "Timer.h"


int PIN_BUTTON = 10;

int PIN_GREEN = 9;
int PIN_YELLOW = 6;
int PIN_RED = 3;

TrafficLight trafficLight(PIN_GREEN, PIN_YELLOW, PIN_RED);
Button button(PIN_BUTTON);
Timer timer;

void setup() {
  
}

void loop() 
{
  if (button.isPressed()) 
  {
    trafficLight.stop();
    timer.startTimer(10000);
  } 
  else 
  {
    if (timer.isTimerReady()) 
    {
      trafficLight.go();
    }
  }

  trafficLight.loop();
}