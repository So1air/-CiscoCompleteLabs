#include <iostream>
#include "Member.h"
#include "StringSplit.h"

namespace GymMembershipManagementSystem {
	
	Member::Member():id(0), full_name(""), last_limit(0)
	{
	}

	Member::Member(int id, string full_name, unsigned short limit) {
		this->id = id;

		if (full_name.length() > 0)
			this->full_name = full_name;
		else
			this->full_name = "<anonym>";

		this->last_limit = limit;
	}

	bool Member::extendSubscribe(unsigned short addit_amount)
	{
		this->last_limit += addit_amount;
		return true;
	}

	void Member::cancelSubscribe() 
	{
		this->last_limit = 0;
	}

	void printStatus(Member ss)
	{
		printf("Member %d : %s, subscription valid for %d months\n", ss.getId(), ss.getName().c_str(), ss.getLimit());
	}
}

using namespace GymMembershipManagementSystem;

int Go8(void){
	const unsigned MAX_AMOUNT_MEMBERS = 10;
	Member register_members[MAX_AMOUNT_MEMBERS];
	unsigned short count_currMembers = 0;
	printf("No members in the system\n");
	string command = "";
	cin.ignore();
	while (command != "quit")
	{
		cout << endl;
		cout << "What would you like to do?: ";
		getline(cin, command);
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
					{
						if (count_currMembers > 0)
						{
							printf("Count register members in the system -- %d / %d \n", count_currMembers, MAX_AMOUNT_MEMBERS);
							for (int i = 0; i < 10; i++)
								if (register_members[i].getId() != 0)
								{
									cout << "  " << i << ". ";
									printStatus(register_members[i]);
								} 
						}
						else printf("No members in the system\n");
					}
					else
						printf("Not correct command!\n");				
				break;
			case 2:
				if(commandArgs[0] == "delete")
				{
				int inpId = stoi(commandArgs[1]);
				for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Member with such id does not exist in the system\n", false); i++)
					if (register_members[i].getId() == inpId)
					{
						register_members[i] = Member();
						cout << "    Deleting successfull\n    ";
						count_currMembers--;
						break;
					}
				}
				else
					if(commandArgs[0] == "cancel")
					{
						int inpId = stoi(commandArgs[1]);
						for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Member with such id does not exist in the system!\n", false); i++)
							if (register_members[i].getId() == inpId)
							{
								register_members[i].cancelSubscribe();									
								printf("    Cancelation successfull\n    ");
								printStatus(register_members[i]);
								break;
							}
					}							
					else			
						printf("Not correct command!\n");
				break;
			default:
				if(commandArgs[0] == "create")
				{	
					int inpId = stoi(commandArgs[1]);
					if (inpId > 0)
					{
						bool unique_id = true;
						for (int i = 0; (i < 10) && unique_id; i++)
							if (register_members[i].getId() == inpId)
								unique_id = false;

						if (unique_id){
							for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: All places are occupied.\n", false); i++)
								if (register_members[i].getId() == 0)
								{
									register_members[i] = Member(inpId, (commandArgs.size() == 3) ? commandArgs[2] : commandArgs[2] + " " + commandArgs[3], 0);
									cout << "    New member " << inpId << " recorded on line " << i + 1 << ".\n    ";
									printStatus(register_members[i]);
									count_currMembers++;
									break;
								}
						}
						else
							cout << "    FAILURE: Member with such id was exist in the system!\n";
					}
					else cout << "    Not correct id!!!\n";
							
				}				
				else
					if (commandArgs[0] == "extend")
					{
						int inpId = stoi(commandArgs[1]);
						for (int i = 0; (i < 10) ? true : (cout << "    FAILURE: Member with such id does not exist in the system!\n", false); i++)
							if (register_members[i].getId() == inpId)
							{
								if (register_members[i].extendSubscribe(stoi(commandArgs[2])))
								{
									printf("    Addition successfull\n    ");
									printStatus(register_members[i]);
								}
								else 
									printf("    Cannot perform this operation\n");								
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