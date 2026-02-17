#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; //5

    for (int i = 1; i <= n; i++) { //rows
        for (int j = 0; j <= 2*i-2; j++) {
            std::cout << "  ";
        }
        for (int j = 1; j <= n-i+1; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}