
#include<iostream>
//There are two tyers of header files
// 1 system header file :comes with COMPILER
// 2. User defined header files :written by programme
// #include"this.h" This will produce an error
//if this.h is notb present in current directory

using namespace std;
int main()
{

int a=4,b=5;


cout<<"operators in c++"<<endl;
cout<<"Following are the operators in c++"<<endl;
// Arithematic operator 

cout<<"The value o a+b is "<<a+b<<endl;
cout<<"The value o a-b is "<<a-b<<endl;
cout<<"The value o a/b is "<<a/b<<endl;
cout<<"The value o a*b is "<<a*b<<endl;
cout<<"The value o a++ is "<<a++<<endl;
cout<<"The value of a%b is "<<a%b<<endl;
cout<<"The value o a-- is "<<a--<<endl;
cout<<"The value o ++a is "<<a--<<endl;
cout<<"The value o a is "<<a--<<endl;

//comparision operators
cout<<"The value o a==b is "<<(a==b)<<endl;
cout<<"The value o a!=b is "<<(a!=b)<<endl;
cout<<"The value o a>=b is "<<(a>=b)<<endl;
cout<<"The value o a<=b is "<<(a<=b)<<endl;
cout<<"The value o a>b is "<<(a>b)<<endl;
cout<<"The value o a<b is "<<(a<b)<<endl;

//logical operator
cout<<"The value o a!=b is "<<((a!=b) && (a<b)) <<endl;
cout<<"The value o a!=b is "<<((a!=b) || (a<b)) <<endl;
cout<<"The value o a!=b is "<<(!(a!=b)) <<endl;
    return 0;
}