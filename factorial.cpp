#include <iostream>

using namespace std;

int main () {

    int num;
    unsigned long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 0){
        cout << "Invalid Input";
    }
    else
        for(int i = 1; i < num; i++){
            factorial *= i;
        }

    cout << "The factorial of7 " << num << " is " << factorial << "\n";
}