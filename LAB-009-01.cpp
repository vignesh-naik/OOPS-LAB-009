#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    cout << "Enter Dividend : ";
    cin >> dividend;
    try
    {
        cout << "Enter Divisor : ";
        cin >> divisor;
        if (divisor == 0)
            throw divisor;
        else
            cout << "The division result = " << (float)dividend / divisor << endl;
    }
    catch(int x)
    {
        cout << "Division with 0 is not allowed!\n";
        return 0;
    }
}
