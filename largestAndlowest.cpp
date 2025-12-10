//Let the user input 8 integers.
//Then print:

//The largest number

//The smallest number

#include <iostream>
#include <algorithm>

using namespace std;

int main () {

    int num[8];

    cout << "Enter 8 numbers: ";
    for(int i = 0; i < 8; i++){
        cin >> num[i];
    }

cout << "The maximum value is: " << *max_element(num, num + 8) << "\n";
cout << "The minimun value is: " << *min_element(num, num + 8); 

}