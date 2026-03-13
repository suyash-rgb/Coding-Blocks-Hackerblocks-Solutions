#include<iostream>
#include<cmath>
using namespace std;
//write a program adaptive to number of digits in the number

//function to calculate length of the number
int length(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    int len=length(n);
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        sum+=pow(digit, len);
        temp=temp/10;
    }
    if(sum==n){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
    return 0;
}