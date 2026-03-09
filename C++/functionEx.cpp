#include<iostream>
using namespace std;

void printHello();
void greet(string name);
int subtract();
int add(int x, int y);

int main(){
    printHello();
    int c = subtract();
    cout<<"Subtraction result: "<<c<<endl;
    greet("Suyash");
    int sum = add(5, 10);
    cout<<"Addition result: "<<sum<<endl;
    return 0;
}

void printHello(){ //no return type, no parameters
    cout<<"Hello World!"<<endl;
}

int subtract(){ //return type, no parameters
    int a=10, b=5;
    return a-b;
}

void greet(string name){ //no return type, with parameters
    cout<<"Hello, "<<name<<"!"<<endl;
}

int add(int x, int y){ //return type, with parameters
    return x+y;
}