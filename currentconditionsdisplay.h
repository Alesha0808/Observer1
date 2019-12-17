#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H
#include "subect.h"
#include "observer.h"
#include "dislpayelement.h"

class CurrentConditionsDisplay : public Observer, public DislpayElement
{
private:
    float temperature;
    float humidity;
    Subect *weatherData;
public:
    CurrentConditionsDisplay(Subect);
    void update (float,float,float);
    void display();
};

#endif // CURRENTCONDITIONSDISPLAY_H
