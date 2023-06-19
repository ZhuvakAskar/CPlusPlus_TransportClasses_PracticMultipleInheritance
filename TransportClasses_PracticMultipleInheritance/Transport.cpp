#include "Transport.h"
Transport::Transport()
{
    this->speed = 0;
    this->fuel = "";
    this->created = 0;
}

Transport::Transport(double speed, string fuel, int created)
{
    this->speed = speed;
    this->fuel = fuel;
    this->created = created;
}

double Transport::getspeed() const
{
    return this->speed;
}

void Transport::setspeed(double speed)
{
    this->speed = speed;
}

string Transport::getfuel() const
{
    return this->fuel;
}

void Transport::setfuel(string fuel)
{
    this->fuel = fuel;
}

int Transport::getcreated() const
{
    return this->created;
}

void Transport::setcreated(int created)
{
    this->created = created;
}

void Transport::showinfo() const
{
    cout << "Скорость: " << this->speed << endl;
    cout << "Тип топлива: " << this->fuel << endl;
    cout << "Год выпуска: " << this->created << endl;
}
