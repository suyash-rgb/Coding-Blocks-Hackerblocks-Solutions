//Hollow diamond pattern

#include <iostream>
using namespace std;

int main() {
    int n = 7; //rows
    int mid = (n + 1) / 2;
    
    for(int i=1; i<=mid; i++){
        for(int j=1; j<=mid-i; j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=1; j<=2*i-3; j++){
                cout<<" ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=mid-1; i>=1; i++){
        for(int j=1; j<=mid-1;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=1; j<=2*i-3; j++){
                cout<<" ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}