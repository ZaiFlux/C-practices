#include <iostream>

using namespace std;

int main () {

    int n;
    cout << "Enter how many number: ";
    cin >> n;

    int num;
    int evenSum;
    int oddSum;

    for(int i = 0; i < n; i++){
        cout << "Enter number" << i + 1 << ": ";
        cin >> num;
    }

    if(num % 2 == 0){
        evenSum += num;
    }
    else{
        oddSum += num;
    }

    cout << "Sum of even numbers: " << evenSum << "\n";
    cout << "Sum of odd numbers: " << oddSum << "\n";

    return 0;
}