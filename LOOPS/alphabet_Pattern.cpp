#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << ch;
        }
        cout << endl;
        ch+=1;
    }
    return 0;
}