#include <iostream>
#include "FarmAnimals.h"

namespace Animals {
	int FarmAnimal::last_id = 0;
	FarmAnimal::FarmAnimal(double water_consumption) : id(++last_id) {
		this->water_consumption = water_consumption;
	}

	double FarmAnimal::getWaterConsumption() {
		return water_consumption;
	} 

	string FarmAnimal::getSpecies() {
		return "farm animal";
	}

	int FarmAnimal::getId() {
		return this->id;
	}

	DummyAnimal::DummyAnimal() : FarmAnimal(10.0)
	{ }

	string DummyAnimal::getSpecies() {
		return "dummy animal";
	}

	DoublingAnimal::DoublingAnimal(double given_water_consumption) : FarmAnimal(2 * given_water_consumption) { } 	

	string DoublingAnimal::getSpecies() {
		return "doubling animal";
	}
	
	void printConsumption(FarmAnimal& animal)
	{
		cout << "This " << animal.getSpecies() << " " << animal.getId() << " consumes " << animal.getWaterConsumption() << " liters of water" << endl;
	}
}

using namespace Animals;	

int Go15(void){
	FarmAnimal animalA(5);
	DummyAnimal animalB;
	DoublingAnimal animalC(21);
	cout << "animalA consumes " << animalA.getWaterConsumption() << " liters of water." << endl;
	cout << "What about the others?" << endl;
	printConsumption(animalB);
	printConsumption(animalC);

	return 0;
} 