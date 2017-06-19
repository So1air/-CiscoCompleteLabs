#include <iostream>
#include "FlightBooking.h"

using namespace std;

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
	this->id = id;
	if (capacity > 0)
		this->capacity = capacity;
	else
		this->capacity = 1;
	if (reserved >= 0)
		if (reserved > this->capacity * 105 / 100)
			this->reserved = this->capacity * 105 / 100;
		else
			this->reserved = reserved;
}

int FlightBooking::getPercentReserved()
{
	return this->reserved * 100 / this->capacity;
}

void FlightBooking::printStatus()
{
	printf("Flight %d : %d/%d (%d%%) seats taken\n", this->id, this->reserved, this->capacity, this->getPercentReserved());
}

int Go5(void){
	int reserved = 0,
	capacity = 0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();

	return 0;
} 