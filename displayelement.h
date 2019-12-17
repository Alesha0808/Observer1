#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H


class DisplayElement
{
public:
    DisplayElement();
    ~DisplayElement();
    virtual void display() = 0;
};

#endif // DISPLAYELEMENT_H
