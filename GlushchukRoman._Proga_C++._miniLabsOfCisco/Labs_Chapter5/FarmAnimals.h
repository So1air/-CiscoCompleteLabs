#pragma once
#include <string>
using namespace std;

namespace Animals {
	class FarmAnimal {
		private:
			const int id;
			double water_consumption;
			static int last_id;		    
		public:
			FarmAnimal(double water_consumption);
			double getWaterConsumption();
			virtual string getSpecies();
			int getId();			
	};
	
	class DummyAnimal : public FarmAnimal {
		public:
			DummyAnimal();
			string getSpecies();
	};

	class DoublingAnimal : public FarmAnimal {
		public:
			DoublingAnimal(double given_water_consumption);
			string getSpecies();
	};

	class  Cow : public FarmAnimal
	{
		private:
			static const int water_per_day_per_1000kg = 86;			
		public:
			Cow(unsigned weight);
	};

	class Sheep : public FarmAnimal
	{		
		private:
			static const int water_per_day_per_100kg = 11;
		public:
			Sheep(unsigned weight);
	};

	class Horse : public FarmAnimal
	{
		private:
			static const int water_per_day_per_1000kg = 68;
		public:
			Horse(unsigned weight);
	};

	class ConsumptionAccumulator {
		private:
			double total_consumption;
		public:
			ConsumptionAccumulator();
			double getTotalConsumption();
			void addConsumption(FarmAnimal animal);		
	};

	void printConsumption(FarmAnimal& animal);
}