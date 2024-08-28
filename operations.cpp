#include "operations.h"
#include "transactions.h"

// Function to handle user operations, providing a menu for various transaction-related actions.
void operations()
{
    std::vector<std::string> descriptions; // Stores transaction descriptions
    std::vector<double> amounts;           // Stores transaction amounts
    std::vector<std::string> categories;   // Stores transaction categories
    int choice;                            // Stores user menu choice
    std::cout << "Personal Finance Tracker" << std::endl;
    do
    {
        // Display the menu options
        std::cout << "1. Input Transaction" << std::endl;
        std::cout << "2. View Transactions" << std::endl;
        std::cout << "3. View Summary" << std::endl;
        std::cout << "4. Get Insights" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            // Option to input a new transaction
            inputTransaction(descriptions, amounts, categories);
            break;
        case 2:
            // Option to view all transactions
            viewTransactions(descriptions, amounts, categories);

            // Ask user if they want to sort transactions by amount
            char sortChoice;
            std::cout << "Do you want to sort transactions by amount? (y/n): ";
            std::cin >> sortChoice;
            if (sortChoice == 'y' || sortChoice == 'Y')
            {
                // Create a vector of indices to sort transactions
                std::vector<int> indices(amounts.size());
                std::iota(indices.begin(), indices.end(), 0); // Initialize indices

                // Sort indices based on corresponding amounts
                std::sort(indices.begin(), indices.end(), [&amounts](int a, int b)
                          { return amounts[a] < amounts[b]; });

                // Reorder transactions based on sorted indices
                std::vector<std::string> sortedDescriptions;
                std::vector<double> sortedAmounts;
                std::vector<std::string> sortedCategories;

                for (int index : indices)
                {
                    sortedDescriptions.push_back(descriptions[index]);
                    sortedAmounts.push_back(amounts[index]);
                    sortedCategories.push_back(categories[index]);
                }

                // Update original vectors with sorted data
                descriptions = sortedDescriptions;
                amounts = sortedAmounts;
                categories = sortedCategories;

                std::cout << "Transactions sorted by amount (low to high)." << std::endl;
            }
            // Display sorted transactions
            viewTransactions(descriptions, amounts, categories);
            break;
        case 3:
            // Option to view a summary of income, expenses, and balance
            viewSummary(amounts);
            break;
        case 4:
            // Option to view insights into spending by category
            getInsights(categories, amounts);
            break;
        case 5:
            // Exit the program
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;
        default:
            // Handle invalid menu choices
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    } while (choice != 5); // Loop until user chooses to exit

    return;
}