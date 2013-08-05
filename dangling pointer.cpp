//Dangling Pointer
#include "dangling pointer.h"

using namespace std;

int main()
{
	int i,n;
	int * p;                 //define a pointer
	char myLine[100];

	p = new (nothrow) int;   //allocate new block of memory that is of type integer and assign address to pointer
   	*p = 10;                 //initialise the variable p points to, with the value 10
	cout << p << endl;
	cout << *p << endl;
	cin.getline(myLine,100);
	delete p;               //free the block of memory p points to. 
    cout << p << endl;      // p stills holds the address of the block of memory it was previously pointing to
	cout << *p << endl;     // p now points to an undefined value. Thus p is a "dangling pointer"
	cin.getline(myLine,100);
   
	return 0;
}
    




