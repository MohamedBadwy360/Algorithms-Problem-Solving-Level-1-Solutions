#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << "Age is valid.\n";
    else
        cout << "Age is not valid.\n";
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}