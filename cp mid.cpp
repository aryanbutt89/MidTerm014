#include <iostream>
using namespace std;
int main() 
{
    double totalAmount;
    int loyaltyPoints = 0;
    char choice;
    do {
        cout << "Enter the total amount of your purchase (or 0 to redeem points):";
        cin >> totalAmount;
        if (totalAmount > 0) 
        {
            loyaltyPoints += static_cast<int>(totalAmount / 10);
            cout << "You have earned " << loyaltyPoints << " loyalty points." << endl;
        }
        else 
        {
            if (loyaltyPoints >= 10)
            {
                cout << "You are redeeming 10 points for a $5 discount." << endl;
                loyaltyPoints = loyaltyPoints - 10;
            }
            else
            {
                cout << "Not enough points" << endl;
            }
        }
        cout << "Do you want to make another purchase? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

     cout << "Good Bye!" << endl;

     return 0;
}