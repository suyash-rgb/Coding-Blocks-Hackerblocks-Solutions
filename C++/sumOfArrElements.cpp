#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Elements of the array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    int sum = arr[0]; 
    for(int i = 1; i < 5; i++) {
        sum += arr[i];
    }
    cout<<endl<< "minimum element in the array: " << sum;
    cout << endl;
    return 0;
}