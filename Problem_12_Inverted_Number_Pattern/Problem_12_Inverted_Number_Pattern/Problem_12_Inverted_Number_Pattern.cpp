#include <iostream>   
#include <string>     
using namespace std;
// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//Continues to prompt until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt to display.
// Returns: A positive integer provided by the user.
int Read_Positive_Number(string Message)
{
    int Number;  // Variable to store the user's input.
    do {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;           // Read the number entered by the user.
    } while (Number < 0);       // Repeat if the number is not positive.
    return Number;             // Return the valid positive number.
};
// Function: PrintInvertedNumberPattern
// Purpose: Prints an inverted number pattern where each line prints a sequence of digits.
//          The first line prints the given number repeated that many times, the next line prints one less, and so on.
// Parameter: Number - the starting number and the maximum count of digits to print in the first line.
void PrintInvertedNumberPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.

    // Outer loop: Starts from the given number and decrements to 1.
    for (int i = Number; i >= 1; i--)
    {
        // Inner loop: Prints the current number 'i' repeatedly.
        // It runs from 1 up to the current value of 'i'.
        for (int j = 1; j <= i; j++)
        {
            cout << i;  // Print the digit 'i' without a space.
        }

        cout << "\n";  // After printing one line, move to the next line.
    }
}
int main()
{
    PrintInvertedNumberPattern(Read_Positive_Number("Please enter a positive number ?"));
}