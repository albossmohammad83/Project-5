
#include "Fraction.h"


Fraction Fraction::operator-(){

   return Fraction(-num, denom);

}

Fraction Fraction::operator*(const Fraction& obj2){
   Fraction temp;
	temp.num =num * obj2.num;
	temp.denom = denom * obj2.denom;
	return temp;


	//return Fraction(num * obj2.getNum(),denom * obj2.getDenom());
}

Fraction Fraction::operator+( const Fraction& obj2){
    Fraction temp;
	temp.num =  num + obj2.num;
	temp.denom = denom;
	return temp;
}

bool  Fraction::operator==( const Fraction& obj2){

	return (num == obj2.getNum() && denom == obj2.getDenom());
}


bool  Fraction::operator>( const Fraction& obj2){

	return ( num > obj2.num);
}



Fraction::Fraction() {
   num = 1;
   denom = 1;
}

Fraction::Fraction(int numerator){
      num = numerator * 16;
	  denom = 16;
	}

Fraction::Fraction(int numerator, int denominator){
    num = numerator;
	denom = denominator;
}


void Fraction::setNum(int numerator){
    num = numerator;
}

void Fraction::setDenom(int denominator){
    denom = denominator;
}

int Fraction::getNum()  const{
  return num;
}
	
int Fraction::getDenom()  const{
	return denom;
}
	
void Fraction::display(ostream& out )  const{
	out<< num << "/" << denom;
}

Fraction Fraction::operator++(){
   num = num + denom;
   return Fraction( num  , denom   );
}


Fraction Fraction::operator++(int a){
  
	  num = num + denom;
	  return Fraction( num-denom  , denom   );

   
}

Fraction  Fraction::operator+=(const Fraction& obj){
     //return *this+obj;

	 num = num + obj.num;
	 return Fraction(num, denom);

}

int& Fraction::operator[](int index){
   if (index == 0)
	    return num;
   else if (index = 1)
	   return denom;
   else{
	   int a = 0;
	   cout << "illegal index " << endl;
       return a;
   }

}


ostream& operator<<(ostream& out,  const Fraction& obj) {
      out << obj.num << " / " << obj.denom;
	  return out;

}
     