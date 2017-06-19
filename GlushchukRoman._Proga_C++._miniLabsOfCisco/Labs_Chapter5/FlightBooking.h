#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#pragma once

	class FlightBooking
	{
	private:
		int id;
		int capacity;
		int reserved;
		int getPercentReserved();

	public:
		bool reserveSeats(int number_ob_seats);
		bool cancelReservations(int number_ob_seats);
		int getId() { return id;}
		void printStatus();
		FlightBooking();
		FlightBooking(int id, int capacity, int reserved);
		~FlightBooking(void)
		{
		}
	};

#endif FLIGHTBOOKING_H