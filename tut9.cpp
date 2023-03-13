#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "tell me your age " << endl;
    cin >> age;
    // if (54 > age > 18)
    // {
    //     cout << "you can come to the party";
    // }
    // else if (age < 17)
    // {

    //     cout << "you can come to the party with kids pass";
    // }

    // else if (age > 55)
    // {
    //     cout << "sorry you are not alowd to the party";
    // }
    // else
    // {

    //     cout << "you are not yet born bitch";
    // }





//**************SWITCH CASE***********


switch (age)
{
case 16:
    cout<<"you are 16";
    break;
    case 18:
    cout<<"you are 18";
    break;

    case 19:
    cout<<"you are 19";
    break;

default:
cout<<"so match cases";

    break;
}

    return 0;
}