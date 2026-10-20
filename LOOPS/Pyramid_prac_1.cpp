#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout<<" ";
        }
        int n=1;
        for (int j = 1; j <= i; j++)
        {
            cout<<n;
            n++;
        }
        int u=i-1;
        for (int j = 1; j < i; j++)
        {
            cout<<u;
            u--;
        }
        cout<<endl;
    }
    return 0;
}