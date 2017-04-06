#include <iostream>
#include <string>

using namespace std; 

class item 
{
private:
	int barcode;
	string name;
	int price;
	bool isSold;
public:
	bool isSold(void);

};


// Create constructor 
item::item(void);

// Set to false 
bool item::isSold(void){

	isSold = false;  

}

void item::markAsSold(void){

	isSold = true; 

}

string item::toString(void){

	cout << "name is " << name << "barcode is " << barcode << "price is " << price; 

}

int item::getPrice(int p){

	price = p; 
}

string item::getName(int n){

	name = n; 
}

int item::getBarcode(int b){
	barcode = b; 
}



int main(){

	return 0; 

}