#pragma once
#include <string>
using namespace std;

namespace GymMembershipManagementSystem {
	class Member 
	{
		private:
			int id;
			string full_name;
			unsigned short last_limit;

		public:
			int getId() { return id;}
			string getName() { return full_name; }
			int getLimit() { return last_limit; }
			bool extendSubscribe(unsigned short addit_amount);
			void cancelSubscribe();

			Member();
			Member(int id, string full_name, unsigned short limit);
			~Member(void)
			{}
	};			
	
	void printStatus(Member ss);
}