#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    for (int i = 1; i < 4; i++)
    {

        int b = 0;
        for (int j = 1; j < 4; j++)
        {
            cout << a;
            a = a + 1;
        }
        cout << endl;
    }

    return 0;
}