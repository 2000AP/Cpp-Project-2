#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Age of user: " << endl;
    cin >> age;
    cout << "Your age is " << age << endl;
    if (age >= 18)
    {
        cout << "You are Eligible to Vote" << endl;
    }
    else if (age == 17)
    {
        cout << "Sorry, You are not eligible to Vote. Please wait for 1 more year." << endl;
    }
    else if (age > 12)
    {
        cout << "You are not eligible to Vote. You can only vote after completion of 18 Years." << endl;
    }
    else
    {
        cout << "You are not Eligible to Vote" << endl;
    }
}
