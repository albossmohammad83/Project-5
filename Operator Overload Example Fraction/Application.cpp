#include "Fraction.h"


void output ();
int main () {

   Fraction obj1(4,16);
   Fraction obj2(3,16);
 
   cout << "Fraction 1 " ;
   obj1.display(cout);
   cout << "\n\nFraction 2 ";
   obj2.display(cout);

   Fraction obj3;
   
   obj3 =  obj1 + 3 + obj2;

   cout << "\n\nSum of the two ";
   obj3.display(cout);
   cout << endl;

   obj3 = -obj3; 
   cout << "The negation:  ";
   obj3.display(cout);
   cout << endl;
   
   if(obj1 == obj2) 
	   cout << "They are equal " << endl;
   else
	   cout << "they are not equal" << endl;

    if(obj1 > obj2) 
	   cout << "obj1 larger " << endl;
   else
	   cout << "obj2 larger" << endl;

  output();

  cout << " obj1 ";
  obj1.display(cout) ;
  cout << "\n obj2 " ;
  obj2.display(cout);
  cout << endl << endl;


  obj2 = ++obj1;

  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
  cout << endl; 

  cout << " obj1 ";
  obj1.display(cout) ;
  cout << "\n obj2 " ;
  obj2.display(cout);


  cout << endl <<"post increment"<< endl;


  obj2 = obj1++;

  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
  cout << endl; 
 
 /// assignment
  cout << "simple assignment operator " << endl;
  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
   cout << " \nobj3 " ;
  obj3.display(cout);
  cout << endl; 

  obj1 = obj2 = obj3;

  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
   cout << " \nobj3 " ;
  obj3.display(cout);
  cout << endl; 

  cout << "+= assignment operator " << endl;
  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
  cout << " \nobj3" ;
  obj3.display(cout);
   cout << endl; 

  obj1 += obj2  += obj3;

  cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);
  cout << " \nobj3" ;
  obj3.display(cout);
  
 
  cout << endl; 

  cout << "indexing " << endl;
  int value = obj1[0];
  cout <<"value is " << value << endl;



   cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);

     obj2[0] = obj1[0];
	 
 cout << "\n obj1 " ;
  obj1.display(cout);
  cout << " \nobj2 " ;
  obj2.display(cout);


  cout << "Fractions are : " << obj1 << " " << obj2 << " " << obj3 << endl;

}



void output () {
 cout << "hello " << endl << endl;
}