#include <iostream>
#include <conio.h>
#include <sstream>   

using namespace std;

class ShopItemOrder
{
	string name_item;
	unsigned long price_in_cents;
	unsigned int amount;
public:
	string getNameItem();
	unsigned long getPriceInCents();
	unsigned int getAmount();
	void setAmount(unsigned int new_amount);
	unsigned long getGeneralPrice();
	string toString();

	ShopItemOrder(string name_item, unsigned long price_in_cents, unsigned int amount);
};

ShopItemOrder::ShopItemOrder(string name_item, unsigned long price_in_cents, unsigned int amount) {
	this->name_item = name_item;
	this->price_in_cents = price_in_cents;
	this->amount = amount;
}

string ShopItemOrder::getNameItem() {
	return name_item;
}

unsigned long ShopItemOrder::getPriceInCents() {
	return price_in_cents;
}

unsigned int ShopItemOrder::getAmount() {
	return amount;
}

void ShopItemOrder::setAmount(unsigned int new_amount) {
	this->amount = new_amount; 
}

unsigned long ShopItemOrder::getGeneralPrice() {
	return price_in_cents * amount; 
}

string ShopItemOrder::toString() {
	string result;
	return     result.append("Name: ").append(this->name_item)
		           .append("\nPrice: ").append(to_string(this->price_in_cents))
			 .append(" cents\nAmount: ").append(to_string(this->amount))
   .append(" ordered items\n\nGeneral price: ").append(to_string(this->getGeneralPrice())).append(" cents");
}

int Go4(void){
	ShopItemOrder orderItem1("X", 4, 777);

	cout << "Order item 1 \n" <<  orderItem1.toString() << endl;

	cout << "Change amount...\n";
	orderItem1.setAmount(228);
	cout << "After changing: \n" << orderItem1.toString() << endl;

	return 0;
} 