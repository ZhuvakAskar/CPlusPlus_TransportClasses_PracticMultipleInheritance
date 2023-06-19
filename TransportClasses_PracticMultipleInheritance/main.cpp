#include "Header.h"
#include "Auto.h"
#include "Train.h"

void main() {
	setlocale(0, "");

	Auto car(220.6, "бензин 95", 2020, "Das Auto", 2403);
	Train train(160.2,"электричество", 1999, 54323, 8, 40);

	car.showinfo();
	train.showinfo();
	system("pause");
}