
#include <iostream>
using namespace std;

class Fraction {

private:
	int num;
	int denom;

public:
	Fraction();

	Fraction(int numerator);

	Fraction(int numerator, int denominator);

	void setNum(int numerator);

	void setDenom(int denominator);

    int getNum()  const;
	
	int getDenom()  const;
	
	void display(ostream& out )  const;

	Fraction operator+( const Fraction& obj2);
      Fraction operator*(const Fraction& obj2);
      Fraction operator-();

     bool  operator==( const Fraction& obj2);
     bool  operator>(const Fraction& obj2);

	 Fraction operator++() ;

	 Fraction operator++(int a) ;  // postincrement

	Fraction  operator+=(const Fraction& obj);

	int& operator[](int index);

	     
    friend  ostream&   operator<<(ostream& out,  const Fraction& obj) ;

     

};
