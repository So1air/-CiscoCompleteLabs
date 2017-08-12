#include <iostream>;
#include <string>;

using namespace std;

class IPAdress {
protected:
	unsigned short octet1, octet2, octet3, octet4;
public:
	virtual string toString();
	IPAdress(unsigned short o1, unsigned short o2, unsigned short o3, unsigned short o4) : octet1(o1), octet2(o2), octet3(o3), octet4(o4) { }
	IPAdress(const IPAdress& origin) : octet1(origin.octet1), octet2(origin.octet2), octet3(origin.octet3), octet4(origin.octet4) { }
};

string IPAdress::toString() {
	return to_string(octet1) + "." + to_string(octet2) + "." + to_string(octet3) + "." + to_string(octet4);
}

class IPAdressChecked : public IPAdress {
	bool correct;
public:
	string toString();
	IPAdressChecked(unsigned short o1, unsigned short o2, unsigned short o3, unsigned short o4);
	IPAdressChecked(const IPAdress& origin);
	IPAdressChecked(const IPAdressChecked& origin) : IPAdress(origin), correct(origin.correct) { }
};

IPAdressChecked::IPAdressChecked(unsigned short o1, unsigned short o2, unsigned short o3, unsigned short o4) : IPAdress(o1, o2, o3, o4) { 
	correct = (octet1 < 256) && (octet2 < 256) && (octet3 < 256) && (octet4 < 256); 
}

IPAdressChecked::IPAdressChecked(const IPAdress& origin) : IPAdress(origin) {
    correct = (octet1 < 256) && (octet2 < 256) && (octet3 < 256) && (octet4 < 256);
}

string IPAdressChecked::toString() {
	return IPAdress::toString() + " - " + (correct ? "Correct" : "Not Correct");
}

int Go3(void) {
	IPAdress simpleIP(1, 2, 3, 4);
	IPAdressChecked checkedIP1(999, 29, 29, 29);
	IPAdressChecked checkedIP2(199, 29, 29, 29);

	cout << simpleIP.toString() << endl;
	cout << checkedIP1.toString() << endl;
    cout << checkedIP2.toString() << endl;

	unsigned short o1, o2, o3, o4;
	IPAdressChecked* checked_userIP;
	do
	{
		cin.ignore();
		printf("Input 4 numbers(octets for your IP) in range 0..65535: \n");
		cin >> o1;
		cin >> o2;
		cin >> o3;
		cin >> o4;
		checked_userIP = new IPAdressChecked(o1, o2, o3, o4);
		cout << "Checking...\n" << checked_userIP->toString() << endl;
		printf("Input 0 for exit or input 1 for continue: ");
		cin >> o1;
		delete checked_userIP;
	}
	while (o1);

	return 0;
}