#include <iostream>
using namespace std;
// Function: PrintAllFromAAAtoZZZ
// Purpose: Prints all three-letter combinations from "AAA" to "ZZZ".
//          It uses three nested loops to generate every possible combination of three uppercase letters.
//          After each combination is built, it is printed on a new line.
//          After finishing all combinations for a given first letter, a separator line is printed.
void PrintAllFromAAAtoZZZ()
{
    cout << "\n";  // Print an empty line for formatting.
    string word = "";  // Initialize an empty string to build each three-letter combination.

    // Outer loop: Iterates over ASCII values for uppercase letters (65 'A' to 90 'Z') for the first letter.
    for (int i = 65; i <= 90; i++)
    {
        // Middle loop: Iterates over ASCII values for uppercase letters for the second letter.
        for (int j = 65; j <= 90; j++)
        {
            // Inner loop: Iterates over ASCII values for uppercase letters for the third letter.
            for (int k = 65; k <= 90; k++)
            {
                // Append the current letter for the first position.
                word.append(1, char(i));
                // Append the current letter for the second position.
                word.append(1, char(j));
                // Append the current letter for the third position.
                word.append(1, char(k));

                // Output the constructed three-letter word.
                cout << word << endl;
                // Reset the word string to empty for the next combination.
                word = "";
            }
        }
        // After completing combinations for the current first letter, print a separator line.
        cout << "\n____________________________\n";
    }
}
int main()
{
    PrintAllFromAAAtoZZZ();
    return 0;
}