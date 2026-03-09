#include<iostream>
using namespace std;
int gcd(int, int);

int main(){
    int a, b;
    cin>>a>>b;
    int ans=1;
    for(int i=2; i<=min(a, b); i++){ //inefficient approach for bigger numbers
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    cout<<"GCD: "<<ans<<endl;
    for(int i=min(a, b); i>=2; i--){ //efficient approach for bigger numbers
        if(a%i==0 && b%i==0){
            ans=i;
            break;
        }
    }
    cout<<"GCD: "<<ans<<endl;

    
    //Euclidean algorithm for GCD
    // gcd(a, b) = gcd(b, a%b)
    cout<<"GCD: "<<gcd(a, b)<<endl;

    return 0;


}

int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}