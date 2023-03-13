#include <iostream>
using namespace std;



int fib(int n){

if (n < 2) {
    
    return 1;


}


    return fib (n-2) + fib (n-1);
 

}





int factorial(int n){

    if (n<=1){

        return 1;

    }
return n * factorial(n-1);
}
int main(){

//factorial of a number
// 6! = 6*5*4*3*2*1=


cout<<"enter a number"<<endl;
int a;
cin>>a;
// cout<<"factoriaal of number is"<<factorial (a);
cout<<"the term at fibonacci sequence at position"<<a<<fib (a);

return 0;
}