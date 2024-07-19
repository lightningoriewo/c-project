#include <iostream>
#include <string>

using namespace std;

// Function to check loan qualification
bool isQualified(int age, double bankBalance, string crbStatus, int monthsAsCustomer) {
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
        return true;
    }
    return false;
}

int main() {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    // Input customer details
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter bank balance: ";
    cin >> bankBalance;
    cout << "Enter CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter number of months as a customer: ";
    cin >> monthsAsCustomer;

    // Check if customer is qualified for a loan
    if (isQualified(age, bankBalance, crbStatus, monthsAsCustomer)) {
        cout << "Customer is qualified for a loan." << endl;
    } else {
        cout << "Customer is not qualified for a loan." << endl;
    }

    return 0;
}
