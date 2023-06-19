#pragma once
#include "Header.h"
class Transport
{
    double speed;
    string fuel;
    int created;
public:
    Transport();
    Transport(double speed,string fuel,int created);
    
    double getspeed()const;
    void setspeed(double speed);
    string getfuel()const;
    void setfuel(string fuel);
    int getcreated()const;
    void setcreated(int created);

    void showinfo()const;
};

