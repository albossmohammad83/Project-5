#include "IntList.h"

IntList::IntList(){
   howmany = 0;
}
	
int IntList::size()const{
  return howmany; 
}

void IntList::add(int value){ 
   
   data[howmany] = value;
   howmany++;
}


// precondition:  value is in the list
void IntList::deleteItem(int value){
   int index = 0;
   while ( index < howmany && data[index] != value)
	   index++;

   if ( index < howmany ) {    // found it 
       
	   for (int i= index+1; i <= howmany-1; i++)
		    data[i-1] = data[i];

	   howmany--;
   }
}


 bool IntList::isThere(int value)  const{
   int index = 0;
   while ( index < howmany && data[index] != value)
	   index++;

   return (index < howmany);
}


bool IntList::isFull()const{
   return (howmany == SIZE);
}


bool IntList::isEmpty() const{
   return (howmany == 0);
}
void IntList::print() const {
   for (int i = 0; i< howmany ; i++)
	   cout << " " << data[i]<< " " ;
   cout << endl << endl;
}

IntList IntList::operator+(const IntList& obj) const {
    
	IntList temp;

	for (int i = 0; i< howmany; i++)
         temp.add( data[i]);

	for (int i = 0; i< obj.howmany; i++)
		if( ! temp.isFull())
         temp.add( obj.data[i]);

	return temp;
}

IntList IntList::operator++(int)
{
	IntList newList;

	for(int i = 0; i < howmany; i++)
		newList.add(data[i]++);

	return newList;
}

IntList IntList::operator++() {
	IntList return_list;

	for (int i = 0; i < howmany; i++) {
		return_list.add(++data[i]);
	}
	return return_list;
}

bool operator==( IntList& obj1, IntList& obj2) {
	if (obj1.size() == obj2.size()) {
		int arrSize = obj1.size();
		int index = 0;
		while (index < arrSize && obj1[index] == obj2[index])
			index ++;
		if(index == arrSize)
			return true;
	}
	return false;
}

ostream& operator<<(ostream& out, const IntList&  obj) {

	out << "IntList contains:" << endl;

	for (int i = 0; i < obj.howmany ; i++) {
		out << "index " << i << " is: " << obj.data[i] << endl;
	}

	return out;

}

int& IntList::operator[](int index) {

	int retVal = data[0];

	if (index >= 0 && index < howmany) {
		return data[index];
	}
	else
		return data[0];

}
