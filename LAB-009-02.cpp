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
        int x;
        cout << "Enter array index : ";
        cin >> x;
        if (x < 0 || x > n - 1)
            throw x;
        else
            cout << "The array element at entered index is " << arr[x] << endl;
    }
    catch(int x)
    {
        cout << "Array index out of bound!\n";
        return 0;
    }
}
