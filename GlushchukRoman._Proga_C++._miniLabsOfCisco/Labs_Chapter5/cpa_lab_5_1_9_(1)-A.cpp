#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	float _weight;
	float _height; 
protected:
	string _family;
public:
	string name;
	int age;

	float getWeigth(){
		return _weight;
	}

	float getHeigth(){
		return _height;
	}

	string getFamily(){
		return _family;
	}

	void changeFamily(string new_family){
		if(new_family != "")
			_family = new_family;
	}

	Person(string name, string family): name(name), _family(family), age(0), _weight(4), _height(40){
	}

	Person(string name, string family, int age, float weight, float height): name(name), _family(family), age(age), _weight(weight), _height(height){
	}
};

void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
}

int Go1(void){
	Person person("Harry", "Jonson", 23, 80.5, 1.78);
	cout << "Meet " << person.name;
	cout << "\n     " << person.getFamily() << endl;
	print(&person);

	Person SConnor("Sara", "Connor", 20, 58.7, 1.65);
	cout << "Meet " << SConnor.name;
	cout << "\n     " << SConnor.getFamily() << endl;
	print(&SConnor);
	SConnor.changeFamily("");
	cout << "My family is " << SConnor.getFamily() << ".\n";

	return 0;
} 