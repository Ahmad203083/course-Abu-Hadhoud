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
int Reverse_Number(int Number) //هون بيعمل ريفيرس بيوخذ الرقم وبيعكسو بدخل في ال لوب لحد مايوصل 0 وبعدين بيطلع 
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    };
    return Number2;
}


int main()
{
    cout << "\nReverse is:\n"
        << Reverse_Number(Read_Positive_Number("Please enter a positive Number :"))
        << "\n";
}