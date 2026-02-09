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
int CoutDigitFrequency(int Number,short DigitToCheck)
{
    int Remainder = 0;// تعريف الباقي من اجل العمليات الحسابية 
    int FreqCount = 0; //عداد لمعرفة كم عدد الارقام الموجوده في الرقم المدخل 

    while (Number > 0)//يبداء الوب 
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder)
            FreqCount++;
    }
    return FreqCount;
}
int main()
{
    int Number = Read_Positive_Number("Plese enter the main number ? ");
    short DigitToCheck = Read_Positive_Number("Plese enter one digit to check ? ");
    cout << "\nDigit " << DigitToCheck << "Frequency is "<<CoutDigitFrequency(DigitToCheck, Number) <<"Time(s).\n";
}
