#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 4; j >= i; j--)
        {
            cout << " " << n;
        }
        n += 1;
        cout << endl;
    }
    return 0;
}