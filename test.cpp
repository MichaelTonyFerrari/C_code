class TesterClass {

 int main{
 	Store s = new Store();
 	Manager m = new Manager("Manager",0,s);
 	s.setManager(m);

 	for(int i=0; i<10; i++){
 		m.addOfficerToStore(new Officer("OfficerName"+i,i+1,s));
 	}

 	Officer off=s.listOfficersByName("OfficerName"+1).get(0);
 	for(int i=0;i<50;i++){
 		off.addItem(new Item(i+100,"itemName"+i,10*i));
 	}


 	if(off == null) {
 		cout << "No Officer";
 	}
 	else {
	 off.sellItem(101);
	 off.sellItem(102);
	 off.sellItem(102);
	 off.sellItem(500);
	 }

	 m.fireOfficer(off.getId());
	 m.sellItem(103);
	 m.printProfit();
 	}
}