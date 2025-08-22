#include <iostream>
#include "InvestmentCalculator.h"
using namespace std;

int main() {
    InvestmentCalculator calculator;
    double initInv, monDep, annInt;
    int years;

    // User input
    cout << "**********************************\n";
    cout << "********* Data Input *************\n";
    cout << "Initial Investment Amount: $";
    cin >> initInv;

    cout << "Monthly Deposit: $";
    cin >> monDep;

    cout << "Annual Interest (%): ";
    cin >> annInt;

    cout << "Number of Years: ";
    cin >> years;

    calculator.setInitialInvestment(initInv);
    calculator.setMonthlyDeposit(monDep);
    calculator.setAnnualInterest(annInt);
    calculator.setNumYears(years);

    calculator.displayInput();
    calculator.displayReportWithoutMonthlyDeposits();
    calculator.displayReportWithMonthlyDeposits();

    return 0;
}
