#include<iostream>
using namespace std;


struct employee
{
    /* data */
int id;
char favchar;
float salary;


};


int main()

{
struct employee harry;
struct employee rohandas;
struct employee shubham;

harry.salary = 12321323;
harry.favchar= 'c';
harry.id=1;
cout<<"the value of salary is   "<<harry.salary<<endl;
cout<<"the value of id is   "<<harry.id<<endl;
cout<<"the value of character is   "<<harry.favchar<<endl;


rohandas.salary = 12321323;
rohandas.favchar= 'c';
rohandas.id=1;
cout<<"the value of salary is   "<<rohandas.salary<<endl;
cout<<"the value of id is   "<<rohandas.id<<endl;
cout<<"the value of character is   "<<rohandas.favchar<<endl;



shubham.salary = 12321323;
shubham.favchar= 'c';
shubham.id=1;
cout<<"the value of salary is   "<<shubham.salary<<endl;
cout<<"the value of id is   "<<shubham.id<<endl;
cout<<"the value of character is   "<<shubham.favchar<<endl;






   
   
    return 0;
}