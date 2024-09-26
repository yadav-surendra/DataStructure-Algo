#include<iostream>
using namespace std;

int main()
{
    int a= 10;
    // creating apointer that pints to varible 'a'
    int* ptr= &a;
    // this pointer holds the momory of variable 'a'
    cout<< &a << endl;
    cout<< ptr << endl; // prints the content in the pointer
    cout<< *ptr<<endl;  // prints the value at the address pointed by he pointer.

    // lets make a pointer to pointer relation
    int** ptr2 = &ptr;  // assigned the address of ptr to ptr2.

    cout<< &ptr<<endl;    // prints the address of ptr
    cout<<ptr2<<endl;   //prints the content in the pointer. (i.e address of ptr)
    cout<<*ptr2<<endl;    // prints the value at address pointed by ptr2 (i.e addrerss of a)
    cout<<**ptr2<<endl;   // prints the value at addrerss (*ptr2) (i.e value ataddress of a)

    return 0;
}