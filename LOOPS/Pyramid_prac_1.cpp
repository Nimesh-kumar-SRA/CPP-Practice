#include <iostream>
using namespace std;

int main()
{
    int c;
    cout<<"enter the number of rows you want to pick : ";
    cin>>c;
    for (int i = 1; i <= c; i++)
    {
        for (int j = c; j > i; j--)
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