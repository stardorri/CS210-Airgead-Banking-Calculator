#ifndef INVESTMENT_CALCULATOR_H
#define INVESTMENT_CALCULATOR_H

class InvestmentCalculator {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Constructor
    InvestmentCalculator();

    // Setters
    void setInitialInvestment(double amount);
    void setMonthlyDeposit(double amount);
    void setAnnualInterest(double rate);
    void setNumYears(int years);

    // Display input summary
    void displayInput();

    // Calculation methods
    void displayReportWithoutMonthlyDeposits();
    void displayReportWithMonthlyDeposits();
};

#endif
