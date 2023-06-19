#include "Auto.h"

Auto::Auto():Transport()
{
    this->number = 0;
    this->mark = " ";
}

Auto::Auto(double speed, string fuel, int created, string mark, int number) :Transport(speed, fuel, created)
{
    this->mark = mark;
    this->number = number;
}

void Auto::setmark(string mark)
{
    this->mark = mark;
}

string Auto::getmark() const
{
    return this->mark;
}

void Auto::setnumber(int number)
{
    this->number = number;
}

int Auto::getnumber() const
{
    return this->number;
}

void Auto::showinfo() const
{
    cout << "Марка: " << this->mark << endl;
    cout << "Номер: " << this->number << endl;
    Transport::showinfo();
}
