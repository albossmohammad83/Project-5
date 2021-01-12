
#include "Box.h"

Box::Box(int side){
  sideLen = side;
  perimeter = 45;
  area = 56;
}

int Box::getSide() const{
  return sideLen;
}

void Box::setSide(int side){
   sideLen = side;
}

void Box::print(ostream& out){
	out << "Box: " << sideLen;
}

bool Box::operator==(const Box& obj){
   return (sideLen ==obj.sideLen);
}


Box operator+(const Box& obj1, const Box& obj2){
	int length = obj1.sideLen + obj2.sideLen;
	Box temp(length);
	return temp;
}


ostream& operator<<(ostream&  out, const Box& obj){
	out<< "Box:" << obj.sideLen;
	return out;

}

Box Box::operator-() {
   Box temp(-sideLen);
   return temp;
}

Box Box::operator++ (){
   Box temp( ++sideLen);
   return temp;
}

Box Box::operator++ (int){
   Box temp( sideLen++);
   return temp;
}


