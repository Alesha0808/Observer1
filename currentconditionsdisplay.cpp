#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subect *s)
{
    this->weatherData = s;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float t, float h, float p){
    this->temperature = t;
    this->humidity = h;
   // weatherData->notifyObservers();
    display();
}

void CurrentConditionsDisplay::display(){
    std::cout<<"Current temperanure" << temperature <<", humidity= "
            <<humidity <<std::endl;
}
