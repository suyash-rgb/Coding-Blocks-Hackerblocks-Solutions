// Ex - 378
// Prime Factoriation : 2*3*3*3*7 =18
// Sum of digits : 3+7+8=18

#include<iostream>
using namespace std;

//function to calculate sum of digits
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int k = n%10;
        sum+=k;
        n=n/10;
    }
    return sum;
}
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    // for(int i=2; i<=n/2; i++){ //mid-point theorem
    //     if(n%i==0){
    //         return false;
    //     }
    // }
    // return true;
    for(int i=2; i*i<=n; i++){ //square root approach
        if(n%i==0){
            return false;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int lhs=sumOfDigits(n);
    int rhs=0;
    for(int i=2; i<n; i++){
        if(isPrime(i)){
            if(n%i==0){
                while(n%i==0){
                    rhs+=sumOfDigits(i);
                    n=n/i;
                }
            }
        }
    }
    if(n>1){ //if n is prime
        rhs+=sumOfDigits(n);
    }
    if(lhs==rhs){
        cout<<"Boston number"<<endl;
    }
    else{
        cout<<"Not a Boston number"<<endl;
    }
}
