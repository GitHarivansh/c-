#include <iostream>
using namespace std;
int main()
{

    // What is a pointer.......> it is a data type
    //  which holds the address of another data type
    int a = 3;
    int *b = &a;
    cout << "address of a is :" << b << endl;

    cout << "address of a is :" << &a << endl;
    cout << "the value at address b is :" <<*b << endl;
    cout << "the value at address b is :" <<*b << endl;

int** c=&b;
cout<<"the address of b is :"<<&b<<endl;
cout<<"the address of b is :"<<c<<endl;
cout<<"the value at address c is :"<<*c<<endl;




    // &---->>> (address of) operator

    // *----->>> dereference operator
















    return 0;
}
