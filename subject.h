#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"

class Subject
{
public:
    Subject();
    virtual ~Subject();
    void registerObserver(Observer o);
    void removeObserver(Observer o);
    virtual void notifyObservers() = 0;

};

#endif // SUBJECT_H
