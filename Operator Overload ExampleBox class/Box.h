
#include <iostream>
using namespace std;

class Box{

private:
	int sideLen;
	int perimeter;
	int area;
public:
  Box(int side);
  int getSide() const;
  void setSide(int side);
  void print(ostream& out);

  bool operator==(const Box& obj);

  Box  operator-(); 
  Box operator++();
  Box operator++ (int);
     

  friend ostream& operator<<(ostream& out, const Box& obj);
  friend Box operator+(const Box& obj1, const Box& obj2);
};



 