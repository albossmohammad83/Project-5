
#include "IntList.h"


int main () {

	   IntList mylist;  
	   mylist.add(55);
	   mylist.add(54);
	   mylist.add(33);
	 //  mylist.add(155);
	  // mylist.add(254);
	  // mylist.add(333);


	   IntList mylist2; 
	   mylist2.add(55);
	   mylist2.add(54);
	   mylist2.add(33);
	
       cout << "list 1 contains "  << endl;
	   mylist.print();
	   cout << "list 2 contains " << endl;
	   mylist2.print();

	  cout << endl << endl<< endl;

	  mylist = ++mylist2;

	  
       cout << "list 1 contains "  << endl;
	   mylist.print();
	   cout << "list 2 contains " << endl;
	   mylist2.print();
}




    



