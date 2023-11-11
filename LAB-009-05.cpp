#include <iostream>
using namespace std;

int main()
{
    try
    {
        int x, d;
        cout << "Enter a number between 1 to 99 : ";
        cin >> x;
        if (x < 1 || x > 99)
            throw x;
        else
            cout << "The entered number is " << x << " which falls between 1 - 99" << endl;
    }
    catch(int x)
    {
        cout << "Entered number is out of range\n";
        return 0;
    }
}
