#include <iostream>
using namespace std;

// Problem: You can get 1 chocolate from 1 rupee. For every 3 wrappers from the chocolates bought,
// you can buy 1 chocolate  more. Find the total chocolates you can buy from 15 rupees.
u_int64_t GetPossibleNumberOfChocolates(int amount = 0) {
    // Time complexity = O(log n)
    // 3^k = n/3 == log_3 (n/3) = k

    int chocolates = amount; // 1 rupee = 1 chocolate
    int wrappers = chocolates; // 1 wrapper from each chocolate
    while (wrappers >= 3) {
        chocolates = chocolates + (wrappers / 3);
        wrappers = (wrappers / 3) + (wrappers % 3);
    }
    return chocolates;
}

int main() {
    int rupees = 0;

    cout << "Enter the amount you have in rupees" << std::endl;
    cin >> rupees;

    cout << "You can buy a total of " << GetPossibleNumberOfChocolates(rupees) << " chocolates from "<<
    rupees << " Rupees"<<endl;

    return 0;
}
