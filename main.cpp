#include <iostream>

using namespace std;

int main() {

    double total {}, tendered_amount {}, change {};
    int remainder {}, penny {}, nickel {}, dime{}, quarter {}, one_dollar {}, five_dollar{}, ten_dollar {}, twenty_dollar {}, fifty_dollar {}, hundred_dollar {};

    cout << "What is the item price: ";
    cin >> total;

    cout << "What is the amount tendered: ";
    cin >> tendered_amount;

    change = tendered_amount - total;

    if (change == 0) {
        cout << "Item price of $" << total << " is the same as amount tendered." <<endl;
    } else if (change < 0){
        cout << "Sorry, you still have $" << (-1 * change) << " needed to pay to complete your order." << endl;
    }
    else {

    }


    return 0;

}
