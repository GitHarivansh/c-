#include<iostream>
using namespace std;
int main()
{
   
    int marks[4]={2,44,33,23};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

int Mathmarks[4];
Mathmarks[0]=653;
Mathmarks[1]=674;
Mathmarks[2]=674;
Mathmarks[3]=337;
cout<<"these are maths marks"<<endl;

 cout<<Mathmarks[0]<<endl;
 cout<<Mathmarks[1]<<endl;
 cout<<Mathmarks[2]<<endl;
 cout<<Mathmarks[3]<<endl;
    

    //You can change the value of array
Mathmarks[1]=4465654;

 cout<<Mathmarks[0]<<endl;
 cout<<Mathmarks[1]<<endl;
 cout<<Mathmarks[2]<<endl;
 cout<<Mathmarks[3]<<endl;
    
for (int i = 0; i < 4; i++)
{
    cout<<Mathmarks[i]<<endl;

}
 int i=1;

while (i<4 )
{
   cout<<marks[i]<<endl;
i++;


}
// pointers and arrays 


int * p =marks;
cout<<"the value of marks [0] is :"<<*p<<endl;
cout<<"the value of marks [0] is :"<<*(p+1)<<endl;
cout<<"the value of marks [0] is :"<<*(p+2)<<endl;
cout<<"the value of marks [0] is :"<<*(p+3)<<endl;

   
    return 0;}


