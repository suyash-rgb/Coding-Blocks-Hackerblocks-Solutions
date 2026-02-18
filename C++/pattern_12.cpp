//Row Symmetric Pattern
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n; //5

    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=n-i; j++){ //space
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){ //star
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){ 
        for(int j=1; j<=n-i; j++){ //space
            cout<<"  ";
        }
        for(int j=1; j<=i ; j++){ //star
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}