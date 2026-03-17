#include<iostream>
using namespace std;

int main()
{
    int a[5];

    int b[5] = {1, 2, 3, 4, 5};

    int n= sizeof(b)/sizeof(int); //to find the number of elements in the array
    cout<<n<<endl;

    return 0;
}