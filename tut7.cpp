#include<iostream>
using namespace std;

int c=45;

int main()
{


// ****************build in data types**********





// int a,b,c;

// cout<<"enter the value of a: "<<endl;
// cin>>a;
// cout<<"enter the value of b: "<<endl;
// cin>>b;
// c= a+b;


// cout<<"the sum is "<<c<<endl;
// cout<<"The global c is "<<::c;

//:: scope resalution operator




// ***************************Float, double and long double literals*******************************

// float d=34.4f;
// long double e=34.4l;

// cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
 

// cout<<"The value of d is  "<<d<<endl<<"the value of e is "<<e;



//*****************************Referance Variables**********************************

//Rohan Das ----> monty--->Rony ----> Dengerous coder

// float x=455;
// float & y =x;

// cout<<x<<endl;
// cout<<y;


//********************** typecasting*****************
int a =45;
float b =45.46;
int c= int(b);


cout<<"the value of a is "<< (float)a<<endl;
cout<<"the value of a is "<< float(a)<<endl;


cout<<"the value of a is "<< (int)b<<endl;
cout<<"the value of a is "<< int(b)<<endl;


cout<<"the value of a is "<< (int)c<<endl;
cout<<"the value of a is "<< int(c)<<endl;


cout<<"The expression is "<< a+b<<endl;
cout<<"The expression is "<< a+int(b)<<endl;
cout<<"The expression is "<< a+(int)b<<endl;



    return 0;
}