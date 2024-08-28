#include "transactions.h"

// Collects a transaction's description, amount, and category from the user and stores them in vectors.
void inputTransaction(std::vector<std::string> &descriptions, std::vector<double> &amounts, std::vector<std::string> &categories)
{
    std::string description;
    double amount;
    std::string category;

    // Prompt user for transaction details.
    std::cout << "Enter transaction description: ";
    std::cin.ignore();
    std::getline(std::cin, description);
    std::cout << "Enter transaction amount (positive for income, negative for expense): ";
    std::cin >> amount;
    std::cout << "Enter category (e.g., Food, Entertainment, Bills): ";
    std::cin >> category;

    // Store the input data in the respective vectors.
    descriptions.push_back(description);
    amounts.push_back(amount);
    categories.push_back(category);
}

// Displays all recorded transactions in a formatted table.
void viewTransactions(const std::vector<std::string> &descriptions, const std::vector<double> &amounts, const std::vector<std::string> &categories)
{
    std::cout << "All Transactions:\n";
    std::cout << std::left << std::setw(20) << "Description" << std::setw(10) << "Amount" << std::setw(15) << "Category" << std::endl;
    std::cout << "----------------------------------------------\n";
    
    // Iterate through and print each transaction.
    for (size_t i = 0; i < descriptions.size(); ++i)
    {
        std::cout << std::left << std::setw(20) << descriptions[i] << std::setw(10) << amounts[i] << std::setw(15) << categories[i] << std::endl;
    }
    std::cout << std::endl;
}

// Summarizes total income, total expenses, and current balance.
void viewSummary(const std::vector<double> &amounts)
{
    double totalIncome = 0, totalExpenses = 0;

    // Calculate total income and expenses.
    for (double amount : amounts)
    {
        if (amount > 0)
        {
            totalIncome += amount;
        }
        else
        {
            totalExpenses += amount;
        }
    }
    double balance = totalIncome + totalExpenses;

    // Display the summary.
    std::cout << "Summary:\n";
    std::cout << "Total Income: " << totalIncome << std::endl;
    std::cout << "Total Expenses: " << totalExpenses << std::endl;
    std::cout << "Balance: " << balance << std::endl << std::endl;
}

// Provides insights on spending by categorizing expenses and showing their percentages.
void getInsights(const std::vector<std::string> &categories, const std::vector<double> &amounts)
{
    double totalExpenses = 0;
    std::map<std::string, double> categorySpending;

    // Calculate total expenses and categorize spending.
    for (size_t i = 0; i < amounts.size(); ++i)
    {
        if (amounts[i] < 0)
        {
            totalExpenses += -amounts[i];
            categorySpending[categories[i]] += -amounts[i];
        }
    }

    // Display spending insights.
    std::cout << "Spending Insights:\n";
    std::cout << "Total Expenses: " << totalExpenses << std::endl;

    // Show spending per category and its percentage of total expenses.
    for (const auto &entry : categorySpending)
    {
        double percentage = (entry.second / totalExpenses) * 100;
        std::cout << "Category: " << entry.first << " - Spent: " << entry.second << " (" << percentage << "% of total)" << std::endl;
    }
    std::cout << std::endl;
}