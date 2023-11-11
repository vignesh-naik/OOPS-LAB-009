#include <iostream>
using namespace std;

int checkIndex(int x)
{
    try
    {
        if(x > 2)
            throw x;
        else
            cout << "Valid Index\n";
    }
    catch(...)
    {
        cout << "Exception Rethrown\n";
        throw x;
    }
    return x;
}
int main()
{
    int a[] = {11, 12, 13};
    try
    {
        int x = checkIndex(3);
        cout << a[x];
    }
    catch(int x)
    {
        cout << "Exception Recaught.\n";
        return 0;
    }
}
