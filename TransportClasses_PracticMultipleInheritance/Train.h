#pragma once
#include "Header.h"
#include "Transport.h"
class Train :
	protected Transport
{
	int number, car, carpeple;
public:
	Train();
	Train(double speed, string fuel, int created, int number,int car,int carpeaple);

	void setnumber(int number);
	int getnumber()const;
	void setcar(int car);
	int getcar()const;
	void setcarpeaple(int carpeaple);
	int getcarpeaple()const;

	void showinfo()const;
};

