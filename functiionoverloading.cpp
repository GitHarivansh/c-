#include <iostream>
using namespace std;

int area (int side )
{return side*side;}
int area (int length, int breadth )
{return length*breadth;}
int area (int radius )
{return 3.14*radius*radius;}

int main(){

cout<<"the area of square of side 5 is "<<area(5)<<endl;
cout<<"the area of ra ct of length 5 and breadth 10 is "<<area(5,10)<<endl;
cout<<"the area of circle of radius 5 is "<<area(5)<<endl;


return 0;
}



