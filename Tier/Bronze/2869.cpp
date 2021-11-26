#include <iostream>

int main()
{
	int Up = 0;
	int Down = 0;
	int Goal = 0;
	int Day = 0;
	 
	std::cin >> Up >> Down >> Goal;

	if ((Goal - Up) % (Up - Down) == 0)
		Day = (Goal - Up) / (Up - Down);

	else
		Day = (Goal - Up) / (Up - Down) + 1;

	std::cout << Day + 1;

	return 0;
}