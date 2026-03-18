#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> a ={6,7,8,9,10};
    sort(a.begin(), a.end());
    cout<<"sorting order"<<endl;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }   
    cout<<endl;
    cout<<"Reverse sorting order"<<endl;
    sort(a.rbegin(), a.rend());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    } 

    //alternatively we can also use reverse() function to reverse the order of elements in the vector

    cout<<endl<<"Reverse sorting order"<<endl;
    vector<int> b = {1,2,3,4,5};
    reverse(b.begin(), b.end());
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;
    cout<<"Descending ordrer"<<endl;
    sort(a.begin(), a.end(), greater<int>());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

   

    
    return 0;
}