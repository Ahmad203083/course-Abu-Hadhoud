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
int Sum_Of_Digits(int Number)
{
    int Remainder = 0,Sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum = Sum + Remainder;
        Number = Number / 10;
    }
    return Sum;
}


int main()
{
    cout << "\nSum Of Digits = "
        << Sum_Of_Digits(Read_Positive_Number("Please Enter Number : "))
        << "\n";
}