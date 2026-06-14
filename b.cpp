#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter first string: " << endl;
    cin >> str1;
    cout << "Enter second string: " << endl;
    cin >> str2;
    if (str1 == str2)
    {
        cout << "The strings are equal." << endl;
    }
    else
    {
        cout << "The strings are not equal." << endl;
    }
    return 0;
}