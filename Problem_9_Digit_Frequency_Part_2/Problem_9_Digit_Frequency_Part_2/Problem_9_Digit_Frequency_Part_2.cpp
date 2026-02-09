#include <iostream>   
#include <string>     
using namespace std;
int Read_Positive_Number(string Message)
{
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
};
int CoutDigitFrequency(short DigitToCheck, int Number)
{
    int Remainder = 0; 
    int FreqCount = 0; 
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder)
            FreqCount++;
    }
    return FreqCount;
}
// Function: PrintAllDigitsFrequencey
// Purpose: Prints the frequency of each digit (0-9) present in the given number.
// Parameter: Number - the number for which digit frequencies are to be printed.
void PrintAllDigitsFrequencey(int Number)
{
    cout << endl;// Print an empty line for formatting.
    for(int i=0;i<10;i++)    // Loop through all digits from 0 to 9.
    {
        short DigitFrequency = 0;        // Variable to hold frequency for the current digit.
        DigitFrequency = CoutDigitFrequency(i, Number); // Get the frequency of digit 'i' in the number.
            if(DigitFrequency>0) //Only print the result if the digit appears at least once.
            {
                cout << " Digit " << i << " Frequency is "    // Print the digit and its frequency.
                    << DigitFrequency << "Time(s).\n";
            }
    }
}
// Main function: Program entry point.
int main()
{
    int Number = Read_Positive_Number("Please enter the a number ?");
    PrintAllDigitsFrequencey(Number);
     return 0;
}