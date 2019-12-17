#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>

class Observer
{
public:
    Observer();
    ~Observer();
    void update(float t, float h, float p);
};

#endif // OBSERVER_H
