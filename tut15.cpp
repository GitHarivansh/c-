#include <iostream>
using namespace std;


// Function prototype
//type function-name (arguments);


// int sum(int a,int b); Acceptable 
//  int sum(int a, b); Un acceptable
int sum (int, int); //Acceptable
void g();



int main(){

int num1,num2;
cout<<"enter first number";
cin>>num1;

cout<<"enter second  number";
cin>>num2;



//num1 ND NUM2 ARE actual parameters
cout<<"the sum is "<<sum(num1,num2);

return 0;
}


int sum(int a,int b){

    //formal paremeters
int c =a+b;

return c;

}
void g(){
    cout<<"\nhello, Goodmorning";
}