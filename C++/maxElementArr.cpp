#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Elements of the array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    int max = arr[0]; // Initialize max to the first element of the array
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Update max if the current element is greater
        }
    }
    cout<<endl<< "Maximum element in the array: " << max;
    cout << endl;
    return 0;
}