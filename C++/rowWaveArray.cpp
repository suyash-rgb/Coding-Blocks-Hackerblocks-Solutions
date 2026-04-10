#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a, c;
    cin>>a>>c;
    vector<vector<int>> arr(a, vector<int>(c));
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < c; j++) {
            cin>>arr[i][j];
        }
    }

    // wave row print
    for(int i = 0; i < a; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < c; j++) {
                cout << arr[j][i] << " ";
            }
        } else {
            for(int j = c - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
    }
    

    return 0;
}