#pragma once
#include "Header.h"
#include "Transport.h"
class Auto :
	protected Transport
{
	string mark;
	int number;
public:
	Auto();
	Auto(double speed,string fuel, int created,string mark, int number);
	
	void setmark(string mark);
	string getmark()const;
	void setnumber(int number);
	int getnumber()const;

	void showinfo()const;
};

