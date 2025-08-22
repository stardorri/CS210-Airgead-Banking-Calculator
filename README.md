# CS210-Airgead-Banking-Calculator
This C++ console app projects an investment balance over time with monthly compounding, with and without an additional fixed monthly deposit. It prints a year-by-year table so a user can compare scenarios and make better saving decisions.

# Airgead Banking – CS210 Portfolio Artifact

## Summary
A C++ console app that projects investment growth with monthly compounding, showing side-by-side totals **with** and **without** a fixed monthly deposit. It helps users compare scenarios and make saving decisions.

## What I did well
Clear separation of concerns (math vs. I/O), small testable functions, and consistent money formatting for readable tables.

## Enhancements
Use integer cents or `long double` to reduce rounding error, add stricter input validation, and include CSV export & a couple of unit tests—each boosts accuracy, security, and maintainability.

## Challenges & how I solved them
Handled off-by-one month and rounding quirks by stepping through with a debugger and rounding only at output time; validated results with hand checks.

## Transferable skills
Modular C++ design, input validation, basic algorithm design, and Git/GitHub workflow with documentation.

## Maintainability/readability/adaptability
Descriptive names, header comments for pre/post-conditions, no global state, and a clean interface so the core logic can be reused in a GUI or web app later.

## Build & Run
```bash
# g++ / clang++
g++ -std=c++17 -O2 -Wall -Wextra src/*.cpp -o airgead
./airgead
