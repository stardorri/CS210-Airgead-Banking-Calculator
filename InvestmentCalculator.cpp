#include <iostream>
#include <iomanip>
#include "InvestmentCalculator.h"
using namespace std;

InvestmentCalculator::InvestmentCalculator() {
    initialInvestment = 0.0;
    monthlyDeposit = 0.0;
    annualInterest = 0.0;
    numYears = 0;
}

void InvestmentCalculator::setInitialInvestment(double amount) {
    initialInvestment = amount;
}

void InvestmentCalculator::setMonthlyDeposit(double amount) {
    monthlyDeposit = amount;
}

void InvestmentCalculator::setAnnualInterest(double rate) {
    annualInterest = rate;
}

void InvestmentCalculator::setNumYears(int years) {
    numYears = years;
}

void InvestmentCalculator::displayInput() {
    cout << "Initial Investment Amount: $" << initialInvestment << endl;
    cout << "Monthly Deposit: $" << monthlyDeposit << endl;
    cout << "Annual Interest: " << annualInterest << "%" << endl;
    cout << "Number of Years: " << numYears << endl;
}

void InvestmentCalculator::displayReportWithoutMonthlyDeposits() {
    double balance = initialInvestment;
    double interest;
    
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "=========================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    
    for (int i = 1; i <= numYears; i++) {
        interest = balance * (annualInterest / 100);
        balance += interest;
        cout << fixed << setprecision(2);
        cout << i << "\t$" << balance << "\t\t\t$" << interest << endl;
    }
}

void InvestmentCalculator::displayReportWithMonthlyDeposits() {
    double balance = initialInvestment;
    double monthlyInterest;
    double totalInterest;
    
    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=========================================================\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";

    for (int i = 1; i <= numYears; i++) {
        totalInterest = 0.0;
        for (int j = 0; j < 12; j++) {
            monthlyInterest = (balance + monthlyDeposit) * ((annualInterest / 100) / 12);
            balance += monthlyDeposit + monthlyInterest;
            totalInterest += monthlyInterest;
        }
        cout << fixed << setprecision(2);
        cout << i << "\t$" << balance << "\t\t\t$" << totalInterest << endl;
    }
}
