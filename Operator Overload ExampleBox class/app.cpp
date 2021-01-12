#include "Box.h"



int main() {
  Box box1(5);
  Box box2(15);
  Box box3(16);

  box1.print(cout);
  cout << endl;
  
  box2.print(cout);
  cout << endl;
  
  cout << box3 << endl;


  box3 = 2+ box1;
  

  cout << "the sum of box1 and box2 is  ";
  cout << box3  << endl;
 
  box1 = -box2;
  cout << "box1 " << box1 << "box2 " << box2 << endl;

  box3 = box2 +  -box1;
  cout << "box3 " << box3;


  if (box1 == box2)
	  cout << "they are equal" << endl;
  else
	  cout << "they are not equal" << endl;

cout << endl << endl;

  Box box4(5);
  Box box5(1);

  box4 = ++box3;
  cout << "box4 " << box4 << " Box3 " << box3;
  box5 = box2++;
    cout << "box5 " << box5 << " Box2 " << box2;

 

}