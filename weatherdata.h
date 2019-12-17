#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "subect.h"
#include "observer.h"

class WeatherData : public Subect
{
private:
    float temperature;
    float humidity;
    float pressure;
    QList <Observer*> *observer;
public:
    WeatherData();
    virtual void registerObserver(Observer o);
    virtual void removeObserver(Observer o);
    virtual void notifyObservers();
    virtual void measurementsChanged();

};

#endif // WEATHERDATA_H
