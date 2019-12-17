#include "weatherdata.h"

WeatherData::WeatherData()
{
 observer = new QList <Observer*>();
}


void WeatherData::registerObserver(Observer *o){
    observer->append(o);
}

void WeatherData::removeObserver(Observer o){
    int i = observer->indexOf(o);
    if (i>0){
        observers->removeAt(i);
    }
}

void WeatherData::notifyObservers(){
    for(int i=0; i<observer->size();i++){
        Observer *observer = observer->at(i);
        observer->update(temperature,humidity,pressure);
    }
}

void
