#include <iostream>

using namespace std;

int main () {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2){
        cout << "This number " << num << " is odd";
    }
    else
        cout << "This number " << num << " is even"; 
}