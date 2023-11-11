#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements :\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    try
    {
        int x, d;
        cout << "Enter array index : ";
        cin >> x;
        if (x < 0 || x > n - 1)
            throw x;
        else
            cout << "The array element at entered index is " << arr[x] << endl;
        cout << "Ok, now let's divide this element\n";
        cout << "Enter divisor : ";
        cin >> d;
        if (d == 0)
            throw 'd';
        else
            cout << "Division result = " << (float)arr[x] / d << endl;
    }
    catch(int x)
    {
        cout << "Array index out of bound!\n";
        return 0;
    }
    catch(char c)
    {
        cout << "Division with 0 not allowed!\n";
        return 0;
    }
}
