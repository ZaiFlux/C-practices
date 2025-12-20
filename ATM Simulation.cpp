#include <iostream>
#include <cstdlib>
using namespace std;

int main () 
{
   //ingredients 
    int services;
     double Balance = 900000;
    double deposit;
    double amount;

    //Selection  service phase
    cout << "          !WELCOME TO AUXILLARY BANK!\n" 
         << "\n" << "List of Services:\n" 
         << "1. Check Balance\n" 
         << "2. Deposit Cash\n" 
         << "3. Withraw Cash\n" 
         << "4. Exit\n"
         << "\n";



    while(true) 
    {
        cout << "Enter the number that correspond to your need: ";
        cin >> services;

        if(services >= 1 && services <= 4) 
       {
            break;
        } 
        else 
        {
            cout << "INVALID INPUT! choose only from 1-4 services" << "\n";
        }
       
    }
    //Process of responding to 4 kind of service that the user request
    switch(services) 
    {

        case 1:
            cout  << "\n" << "        YOUR CURRENT BALANCED IS: " << Balance <<  "\n";
            break;

        case 2:
            cout << "\n"
                 << "                > You select Cash Deposit <\n" 
                 << "\n"
                 << "Please enter the amount you want to deposit on your current balance: ";
            cin >> deposit;

            Balance += deposit;

            cout << "\n"
                 << "          YOU SUCCESSFULLY ADDED YOUR DEPOSIT TO YOUR BALANCED!\n" 
                 << "\n"
                 << "                NOW YOUR CURRENT BALANCE IS: " 
                 << Balance << "\n";
             break;

        case 3:
            cout << "\n"
                 << "         > You select Withraw Cash <\n"
                 << "\n"
                 << "Please Enter the amount you want to withdraw from your current Balance: ";
            cin >> amount;

           if(amount > Balance)  {
                cout << "INSUFFICIENT BALANCE!";
            }
            else if (amount <= 0) {
                cout << "        INVALID AMOUNT! Please enter a amount greater than 0\n";
            }
            else {
                Balance -= amount;
                cout << "\n"
                     << "       YOU SUCCESSFULLY WITHDRAW YOUR REQUEST AMOUNT FROM YOUR CURRENT BALANCE\n"
                     << "\n"
                     << "                 NOW YOUR REMAINING BALANCE IS: " 
                     << Balance;    
            }
            break; 

        case 4:
            cout << "Thankyou for using the AUXILLARY BANK!\n";
            return 0;
    }

}