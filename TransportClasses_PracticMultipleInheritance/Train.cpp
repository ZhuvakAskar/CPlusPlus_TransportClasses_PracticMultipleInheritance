#include "Train.h"

Train::Train():Transport()
{
    this->number = 0;
    this->car = 0;
    this->carpeple = 0;
}

Train::Train(double speed, string fuel, int created, int number, int car, int carpeaple):Transport(speed, fuel, created)
{
    this->number = number;
    this->car = car;
    this->carpeple = carpeaple;
}

void Train::setnumber(int number)
{
    this->number = number;
}

int Train::getnumber() const
{
    return  this->number;
}

void Train::setcar(int car)
{
    this->car = car;
}

int Train::getcar() const
{
    return  this->car;
}

void Train::setcarpeaple(int carpeaple)
{
    this->carpeple = carpeaple;
}

int Train::getcarpeaple() const
{
    return this->carpeple;
}

void Train::showinfo() const
{
    cout << "Номер: " << this->number << endl;
    cout << "Количество вагонов: " << this->car << endl;
    cout << "Пасажиров в вагоне: " << this->carpeple << endl;
    Transport::showinfo();
}
