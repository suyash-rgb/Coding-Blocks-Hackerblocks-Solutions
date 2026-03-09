#include<iostream>
using namespace std;

int main()
{
    int count=1;
    for(int i=1; i<=5; i++){
        for(int j=0; j<5-i; j++){
            cout<<" \t";
        }
        for(int k=0; k<2*i-1; k++){ 
           cout<<count<<"\t";
           count++;
        }

        cout<<"\n";
    }

    return 0;
}