#include <iostream>

using namespace std;

int main() {

    double total {}, tendered_amount {}, change {};
    int penny {}, nickel {}, dime{}, quarter {}, one_dollar {}, five_dollar{}, ten_dollar {}, twenty_dollar {}, fifty_dollar {}, hundred_dollar {};

    cout << "What is the item price: ";
    cin >> total;

    cout << "What is the amount tendered: ";
    cin >> tendered_amount;

    change = tendered_amount - total;
    cout << "Change is: " << change << endl;

    if (change == 0) {
        cout << "Item price of $" << total << " is the same as amount tendered." <<endl;
    } else if (change < 0){
        cout << "Sorry, you still have $" << (-1 * change) << " needed to pay to complete your order." << endl;
    }
    else {
        if (change >= 100) {
            hundred_dollar = change / 100;
            change -= (100 * hundred_dollar);
        }
        if (change >= 50) {
            fifty_dollar = change / 50;
            change -= (50 * fifty_dollar);
        }
        if (change >= 20) {
            twenty_dollar = change / 20;
            change -= (20 * twenty_dollar);
        }
        if (change >= 10) {
            ten_dollar = change / 10;
            change -= (10 * ten_dollar);
        }
        if (change >= 5) {
            five_dollar = change / 5;
            change -= (5 * five_dollar);
        }
        if (change >= 1) {
            one_dollar = change / 1;
            change -= (1 * one_dollar);
        }
        if (change >= .25) {
            quarter = change / .25;
            change -= (.25 * quarter);
        }
        if (change >= .1) {
            dime = change / .1;
            change -= (.1 * dime);
        }
        if (change >= .05) {
            nickel = change / .05;
            change -= (.05 * nickel);
        }
        if (change >= .01) {
            penny = change / .01;
        }
    }

    cout << "CHANGE\n";

    if (hundred_dollar != 0)
        cout << ((hundred_dollar == 1) ? "Hundred: " : "Hundreds: ") << hundred_dollar << endl;
    if (fifty_dollar != 0)
        cout << ((fifty_dollar == 1) ? "Fifty: " : "Fifties: ") << fifty_dollar << endl;
    if (twenty_dollar != 0)
        cout << ((twenty_dollar == 1) ? "Twenty: " : "Twenties: ") << twenty_dollar << endl;
    if (ten_dollar != 0)
        cout << ((ten_dollar == 1) ? "Ten: " : "Tens: ") << ten_dollar << endl;
    if (five_dollar != 0)
        cout << ((five_dollar == 1) ? "Five: " : "Fives: ") << five_dollar << endl;
    if (one_dollar != 0)
        cout << ((one_dollar == 1) ? "One: " : "Ones: ") << one_dollar << endl;
    if (quarter != 0)
        cout << ((quarter == 1) ? "Quarter: " : "Quarters: ") << quarter << endl;
    if (dime != 0)
        cout << ((dime == 1) ? "Dime: " : "Dimes: ") << dime << endl;
    if (nickel != 0)
        cout << ((nickel == 1) ? "Nickel: " : "Nickels: ") << nickel << endl;
    if (penny != 0)
        cout << ((penny == 1) ? "Penny: " : "Pennies: ") << penny << endl;

    return 0;

}
