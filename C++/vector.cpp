// vector<datatype> a(size);

//vector<datatype> a; (valid)

// vector has size(no of elements stored) and capacity(no of elements that can be stored without resizing)
// vector capacity is usually 2^n and it increases only when size exceeds capacity. 

//push_back() is used to add an element at the end of the vector.
//pop_back() is used to remove the last element of the vector.
#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> a; //empty vector
    cout<<"size: "<<a.size()<<endl; //0

    //create vector with defined number of elements
    vector<int> b = {1,2,3,4,5};
    
    vector<int> c(5, 10); //vector of size 5 with all elements initialized to 10

    int n;
    cin>>n;
    vector<int> d(n);

    cout<<"size: "<<c.size()<<endl; //we can access a vector's size using size() function
    
    c.push_back(1);
    c.push_back(2);
    c.push_back(3);
    c.push_back(4);
    c.push_back(5);
    c.push_back(6);
    c.push_back(7);
    c.push_back(8);
    c.push_back(9);
    c.push_back(10);

    cout<<c.size()<<endl;
    
    return 0;
}
