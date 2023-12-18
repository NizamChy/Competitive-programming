#include <iostream>
using namespace std;

int main()
{
    int nr = 0;
    char ch;
    cout << "Please enter a number: " << endl;
    cin >> nr;
    //cin.get(ch);
    cin>>ch;
    if(ch=='.')
    {
        cout << "The entered number is a float. " << endl;
    }
    else
    {
        cout << "The entered number is an integer. " << endl;
    }


    return 0;
}
