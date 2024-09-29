#include<iostream>
using namespace std;

// pass by reference using pointer
void change_value(int* p)
{
    *p = 20;
}

// pass by reference using alias variable. here b is masde alias of a using & symbol.
void change(int &b){
    b=30;
}

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

    change_value(&a);
    cout<<"changed value of a is: "<< a<<endl;

    change(a);
    cout<<"the changed value of a in alias method is: "<< a<<endl;

    int arr[]={10,20,0,40};
    int *new_ptr = arr;

    cout<< *(new_ptr)<<endl;   //10
    cout<< *(new_ptr+1)<<endl;  //20
    cout<< *(new_ptr+3)<<endl;  //40
    new_ptr++;
    cout<< *(new_ptr+1)<<endl;  //0

    return 0;
}