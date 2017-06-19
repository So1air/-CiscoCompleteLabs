#include <iostream>
#include "FarmAnimals.h"
#include "StringSplit.h"

namespace Animals {

	Cow::Cow(unsigned int weight) : FarmAnimal(weight * water_per_day_per_1000kg / 1000.) { } 
	Sheep::Sheep(unsigned int weight) : FarmAnimal(weight * water_per_day_per_100kg / 100.) { } 
	Horse::Horse(unsigned int weight) : FarmAnimal(weight * water_per_day_per_1000kg / 1000.) { } 

	ConsumptionAccumulator::ConsumptionAccumulator() : total_consumption(0) { }

	double ConsumptionAccumulator::getTotalConsumption()
	{
		return total_consumption;
	} 

	void ConsumptionAccumulator::addConsumption(FarmAnimal animal)
	{
		total_consumption += animal.getWaterConsumption();
	}
}

using namespace Animals;

int Go16(void){
	ConsumptionAccumulator acc;
	string inp_text;
	vector<string> spl_txt;
	cin.ignore();
	do {
		getline(cin, inp_text);
		spl_txt = split(inp_text);
		if (spl_txt.size() > 1)
			if (spl_txt[0] == "cow")
			{
				Cow cow(stoi(spl_txt[1]));
				acc.addConsumption(cow);
			}
			else
				if (spl_txt[0] == "sheep")
				{
					Sheep sheep(stoi(spl_txt[1]));
					acc.addConsumption(sheep);
				}
				else
					if (spl_txt[0] == "horse")
					{
						Horse horse(stoi(spl_txt[1]));
						acc.addConsumption(horse);
					}		
	} while (inp_text != "");
	cout << acc.getTotalConsumption() << endl;

	return 0;
} 