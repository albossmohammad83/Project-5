#include "Pair.h"

Pair::Pair (){
  val1 = 1;
  val2 = 1;
}

Pair::Pair(int a){
   val1 = a;
   val2 = a;
}

Pair::Pair (int a, int b){
    val1 = a ;
	val2 =b;
}

int Pair::getVal1() const{
    return val1;
}
int Pair::getVal2()  const{
	return val2;
}

void Pair::print(ostream& out) const {
		out << "( " << val1 << " , " << val2  << " )"<< endl;
}

bool operator==(const Pair& op1, const Pair& op2){
    return ( op1.val1 == op2.val1 && op1.val2 == op2.val2);
}

/*Pair Pair::operator+(const Pair& obj) {
   Pair temp(val1+obj.val1, val2+obj.val2);
   return temp;
}*/


Pair operator+(const Pair& op1, const Pair& op2){
    Pair temp(op1.val1 + op2.val1, op1.val2 + op2.val2);
     return temp;
}

/*Pair Pair::operator-() {
    //Pair temp( -val1, -val2 );
	return Pair(-val1,-val2);
}*/

Pair operator-(const Pair& op){
 return Pair(-op.getVal1(),-op.getVal2());
}

Pair Pair::operator++() {
    val1++;
	val2++;
	return Pair(val1, val2);     // return Pair(++val1, ++val2);
}


Pair Pair::operator++(int dummy){
    Pair temp(val1, val2);
    val1++;
	val2++;
	return temp;      // return Pair(val1++, val2++);

}
ostream& operator<<(ostream& out, const Pair& obj){
  out << "[" << obj.val1 << "," << obj.val2 <<"]";
  return out;
}


istream& operator>>(istream& in, Pair& obj){
  
    in >> obj.val1 >> obj.val2;
	return in;

}
 
int& Pair::operator[](int index){
   if (index == 0)
	   return val1;
   else if (index == 1)
	   return val2;
}

