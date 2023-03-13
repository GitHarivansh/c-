#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // ***********Constants in cpp*************
    // const int a=5;

    // cout<<"The value of a was :"<<a<<endl;
    // a=45; //you will get an error
    // cout<<"The value of a is :"<<a<<endl;

    //**************************Manimupalors in c++***********

    // int a=3,b=45,c=566;
    // cout<<"the value lf a without set w is :"<<a<<endl;
    // cout<<"the value lf b without set w is :"<<a<<endl;
    // cout<<"the value lf c without set w is :"<<a<<endl;

    // cout<<"the value lf a with set w is :"<<setw(4)<<a<<endl;
    // cout<<"the value lf b with set w is :"<<b<<endl;
    // cout<<"the value lf c with set w is :"<<c<<endl;

    //**************Operator precedence***************

    int a = 3, b = 4;
    int c = ((((a * 5) + b)-45)+87);
    cout << c << endl;

    return 0;
}