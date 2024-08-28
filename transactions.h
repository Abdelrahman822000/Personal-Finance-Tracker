#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include "includes.h"

// Inputs a transaction (description, amount, category) into the vectors.
void inputTransaction(std::vector<std::string> &descriptions, std::vector<double> &amounts, std::vector<std::string> &categories);

// Displays all transactions with descriptions, amounts, and categories.
void viewTransactions(const std::vector<std::string> &descriptions, const std::vector<double> &amounts, const std::vector<std::string> &categories);

// Shows a summary of total income, expenses, and balance.
void viewSummary(const std::vector<double> &amounts);

// Provides spending insights by category and percentage of total expenses.
void getInsights(const std::vector<std::string> &categories, const std::vector<double> &amounts);

#endif