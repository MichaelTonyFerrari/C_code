#include <iostream>
#include <string>

using namespace std;

class Officer{

private:
	string name; 
	int id;
	string store; 
	bool isManager;

public: 
	string getStore(string s);
	string getName(string n);
	int getId(int i);

	bool isManager(void);
	string addItem(void) : item(string name); // fix this 
	void sellItem(int barc);
	void printProfit(void);
}

int Officer::Officer getId(int i){

	id = i; 
}

string Officer::Officer getStore(string s){
	store = s; 
} 

string Officer::Officer getName(string n){
	name = n; 
}

bool Officer::Officer isManager(void){

	isManager = false; 

}

string Officer::Officer sellItem(int barc){

	// fix this 
	if(markAsSold)
		cout << toString; 
	else
		cout << "Item is not avaiable to be sold" << endl; 
}

void Officer::Officer addItem(string n)
{
	name = n; 

}

void Officer::Officer printProfit(void){

	// Fix this 
	cout << "The profit is " << store(profit) << endl; 
}


int main(){

	return 0;
}