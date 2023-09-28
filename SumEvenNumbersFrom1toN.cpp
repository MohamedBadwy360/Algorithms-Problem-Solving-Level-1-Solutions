#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter a Number: ";
    cin >> Number;

    return Number;
}

void PrintSumOddNumberFromNto1(int Number)
{
    int Sum = 0;
    for (int i = 0; i <= Number; i += 2)
    {
        Sum += i;
    }

    cout << Sum << endl;
}


int main()
{
    int Number = ReadNumber();
    PrintSumOddNumberFromNto1(Number);

    return 0; 
}
