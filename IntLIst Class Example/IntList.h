#include <iostream>
using namespace std;

class IntList {

private:
	const static int SIZE = 50;
	int data[SIZE];
	int howmany;   //number of ints currently in the list
public:
	IntList();
	
	void add(int value);
	bool isThere(int value)const;
	int size() const;
	bool isFull() const;
	bool isEmpty() const;

	void deleteItem(int value);
	void print() const;

	IntList operator+(const IntList& obj) const;
    int& operator[] (int index);
	IntList operator++();
	IntList operator++ ( int);

	friend ostream& operator<<(ostream& out, const IntList& obj);

	
};

bool operator==( IntList&,  IntList&);