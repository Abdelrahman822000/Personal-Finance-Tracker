**This Project was developed by Abdelrahman Mohamed Hamad**

# Personal Finance Tracker

A console-based application designed to help users manage their financial transactions, view summaries, and analyze spending habits.

## Table of Contents
- [Project Description](#project-description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [Contact](#contact)

## Project Description

The Personal Finance Tracker is a C++ console application that allows users to input, view, and analyze their financial transactions. Users can record new transactions, view and sort them, get a summary of their finances, and receive insights into their spending by category.

## Features

- **Input Transactions:** Record new financial transactions with description, amount, and category.
- **View Transactions:** Display a list of all transactions with optional sorting by amount.
- **View Summary:** Show a financial summary including total income, total expenses, and balance.
- **Get Insights:** Analyze spending by category and see how each category impacts overall expenses.

## Installation

### Prerequisites

- C++ Compiler (e.g., GCC, Clang, MSVC)
- CMake (Optional, for building the project)

### Steps

1. **Clone the repository:**
    ```bash
    git clone https://github.com/Abdelrahman822000/Personal-Finance-Tracker.git
    cd Personal-Finance-Tracker
    ```

2. **Build the project:**
    ```bash
    g++ main.cpp operations.cpp transactions.cpp -o FinanceTracker.exe
    ```

3. **Run the Program:**
    ```bash
    ./FinanceTracker.exe
    ```

## Usage

### Running the Application

1. **Start the Application:**
    - After running the `FinanceTracker.exe` executable, follow the on-screen instructions to manage your financial transactions.
    - Choose actions from the menu to input transactions, view transactions, get a summary, or analyze spending insights.

2. **Menu Options:**
    - **Input Transactions:** Select this option to record a new transaction. Enter the description, amount, and category.
    - **View Transactions:** Display all transactions and choose to sort them by amount if desired.
    - **View Summary:** Check the summary of total income, expenses, and balance.
    - **Get Insights:** Analyze spending by category and review how much is spent in each category.

### Example Output

```
Personal Finance Tracker
1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 1
Enter transaction description: Work Salary
Enter transaction amount (positive for income, negative for expense): 5000
Enter category (e.g., Food, Entertainment, Bills): Salary
1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 1
Enter transaction description: Food
Enter transaction amount (positive for income, negative for expense): -400
Enter category (e.g., Food, Entertainment, Bills): Food
1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 1
Enter transaction description: Water Bill
Enter transaction amount (positive for income, negative for expense): -300
Enter category (e.g., Food, Entertainment, Bills): Bills
1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 1
Enter transaction description: Gym Subscription 
Enter transaction amount (positive for income, negative for expense): -600
Enter category (e.g., Food, Entertainment, Bills): Bills
1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 2
All Transactions:
Description         Amount    Category
----------------------------------------------
Work Salary         5000      Salary
Food                -400      Food
Water Bill          -300      Bills
Gym Subscription    -600      Bills

Do you want to sort transactions by amount? (y/n): y
Transactions sorted by amount (low to high).
All Transactions:
Description         Amount    Category
----------------------------------------------
Gym Subscription    -600      Bills
Food                -400      Food
Water Bill          -300      Bills
Work Salary         5000      Salary

1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 3
Summary:
Total Income: 5000
Total Expenses: -1300
Balance: 3700

1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
Choose an option: 4
Spending Insights:
Total Expenses: 1300
Category: Bills - Spent: 900 (69.2308% of total)
Category: Food - Spent: 400 (30.7692% of total)

1. Input Transaction
2. View Transactions
3. View Summary
4. Get Insights
5. Exit
Choose an option: 5
Exiting the program. Goodbye!
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions, feel free to contact me:
- **Phone:** +201028325749
- **Email:** a.mohamed822000@gmail.com
- **LinkedIn:** [Abdelrahman Mohamed Hamad](https://www.linkedin.com/in/abdelrahman-mohamed-a1956b247/)
