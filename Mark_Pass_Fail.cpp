#include <iostream>

using namespace std;

enum enPassFail {Fail, Pass};

int ReadMark()
{
    int Mark = 0;

    do 
    {
        cout << "Enter mark: ";
        cin >> Mark;
    } while (Mark < 0);
    
    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(int Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "You Passed.\n";
    else 
        cout << "You Failed.\n";
}


int main()
{
    PrintResult(ReadMark());

    return 0;
}