




#include <iostream>
using namespace std;

class Pair {
private:
	int val2;
	int val1;

public:

	Pair ();
	Pair(int);
	Pair (int, int);

	int getVal1()  const;
	int getVal2() const;

	Pair operator-(const Pair& op);  // binary subtraction
	//Pair operator-() ;  //unary minus


	Pair operator++( );
	Pair operator++(int dummy);
	
	int& operator[](int index);

	void print(ostream& ) const;

    friend Pair operator+(const Pair& op1, const Pair& op2);
	friend bool operator==(const Pair& op1, const Pair& op2);
	friend ostream& operator<<(ostream& out, const Pair& obj);

	friend istream& operator>>(istream& in, Pair& obj);
  
};

    Pair operator-(const Pair& op);


 



  





