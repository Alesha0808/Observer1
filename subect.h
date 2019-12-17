#ifndef SUBECT_H
#define SUBECT_H

#include "observer.h"

class Subect
{
public:
    Subect();
    ~Subect();
    virtual void registerObserver(Observer o);
    virtual void removeObserver(Observer o);
    virtual void notifyObservers();
};

#endif // SUBECT_H
