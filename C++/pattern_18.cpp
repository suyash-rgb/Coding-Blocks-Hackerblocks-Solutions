#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int mid=n/2+1;

    for(int i=1; i<=mid; i++)
    {
        for(int j=1; j<=mid-i; j++) //spaces
        {
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++) //star
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=mid-1; i>=1; i--)
    {
        for(int j=1; j<=mid-i; j++) //spaces
        {
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++) //star
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}   