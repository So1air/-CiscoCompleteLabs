#pragma once
#include <iostream>
#include "FlightBooking.h"
#include "StringSplit.h"

FlightBooking::FlightBooking():id(0), capacity(0), reserved(0)
{
}

int Go7(void){
	FlightBooking booking[10];
	// Use this to have some starting value
	booking[0] = FlightBooking(1, 400, 0);
	booking[0].printStatus();
	unsigned short count_occupied_lane = 1;
	string command = "";
	cin.ignore();
	while (command != "quit")
	{
		cout << endl;
		cout << "What would you like to do?: ";
		getline(cin, command);
		// handle the command
		vector<string> commandArgs = split(command);
		switch (commandArgs.size())
		{
			case 0:
				printf("Input command!\n");
				break;
			case 1:				
				if (commandArgs[0] == "quit")
					;
				else
					if (commandArgs[0] == "report")
						for (int i = 0; i < 10; i++)
							if (booking[i].getId() != 0)
							{
								cout << "Lane " << i + 1 << ":\n    ";
								booking[i].printStatus();
							}
							else cout << "Lane " << i + 1 << " free.\n";
					else
						printf("Not correct command!\n");				
				break;
			case 2:
				if(commandArgs[0] != "delete")
					printf("Not correct command!\n");
				else
				{
					int inpId = stoi(commandArgs[1]);
					for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Flight with such id was not created!\n", false); i++)
						if (booking[i].getId() == inpId)
						{
							booking[i] = FlightBooking();
							cout << "    Deleting successfull\n";
							count_occupied_lane--;
							break;
						}
				}
				break;
			default:
				if(commandArgs[0] == "create")
				{	
					int inpId = stoi(commandArgs[1]);
					if (inpId > 0)
					{
						bool unique_id = true;
						for (int i = 0; (i < 10) && unique_id; i++)
							if (booking[i].getId() == inpId)
								unique_id = false;

						if (unique_id){
							for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: All runways are occupied.\n", false); i++)
								if (booking[i].getId() == 0)
								{
									booking[i] = FlightBooking(inpId, stoi(commandArgs[2]), 0);
									cout << "    Flight " << inpId << " allocated lane " << i + 1 << ".\n    ";
									booking[i].printStatus();
									count_occupied_lane++;
									break;
								}
						}
						else
							cout << "    FAILURE: Flight with such id was created!\n";
					}
					else cout << "    Not correct id!!!\n";
							
				}				
				else
					if (commandArgs[0] == "add")
					{
						int inpId = stoi(commandArgs[1]);
						for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Flight with such id was not created!\n", false); i++)
							if (booking[i].getId() == inpId)
							{
								if (booking[i].reserveSeats(stoi(commandArgs[2])))
								{
									printf("    Addition successfull\n    ");
									booking[i].printStatus();
								}
								else 
									printf("    Cannot perform this operation: all seats reserved\n");								
								break;
							}
					}
					else 
						if(commandArgs[0] == "cancel")
						{
							int inpId = stoi(commandArgs[1]);
							for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Flight with such id was not created!\n", false); i++)
								if (booking[i].getId() == inpId)
								{
									if (booking[i].cancelReservations(stoi(commandArgs[2])))					
									{
										printf("    Cancelation successfull\n    ");
										booking[i].printStatus();
									}
									else 
										printf("    Cannot perform this operation: attempt to delete an amount exceeding the number of reserved seats.\n");								
									break;
								}
						}							
						else			
							printf("Not correct command!\n");			
				break;
		}
	}
	return 0;
} 