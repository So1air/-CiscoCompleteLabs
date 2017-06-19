#pragma once
#include <iostream>
#include "FlightBooking.h"
#include "StringSplit.h"

bool FlightBooking::reserveSeats(int number_ob_seats)
{
	// try to add reservations and return 'true' on success
	// keep the limits in mind
	int maxCapacity = this->capacity * 105 / 100;
	if (this->reserved == maxCapacity)
		return false;
	else
	{
		if (this->reserved + number_ob_seats > maxCapacity)		
			this->reserved = maxCapacity;
		else
			this->reserved += number_ob_seats;
		return true;
	}
} 

bool FlightBooking::cancelReservations(int number_ob_seats)
{
	// try to cancel reservations and return 'true' on success
	// keep the limits in mind
	if (number_ob_seats < this->reserved)
	{
		this->reserved -= number_ob_seats;
		return true;
	}
	else
		return false;
}

int Go6(void){
	int reserved = 0,
		capacity = 0;
	cout << "Provide flight capacity: ";
	cin >> capacity;
	cout << "Provide number of reserved seats: ";
	cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	string command = "";		
	cin.ignore();
	while (command != "quit")
	{
		booking.printStatus();
		printf("What would you like to do?\n ");
		getline(cin, command);
		
		// handle the command
		vector<string> commandArgs = split(command);
		switch (commandArgs.size())
		{
			case 0:
				printf("Input command!\n");
				break;
			case 1:				
				if(commandArgs[0] != "quit")
					printf("Not correct command!\n");			
				break;
			default:
				if (commandArgs[0] == "add")		
					if (!booking.reserveSeats(stoi(commandArgs[1])))
						printf("Cannot perform this operation\n");
					else
						printf("    Addition successfull\n");
				else 
					if(commandArgs[0] == "cancel")
						if (!booking.cancelReservations(stoi(commandArgs[1])))
							printf("Cannot perform this operation\n");
						else
							printf("    Cancelation successfull\n");
					else			
						printf("Not correct command!\n");			
				break;
		}			
	}

	return 0;
} 