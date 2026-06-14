#include <iostream>
using namespace std;

int ispallindrom(char str[], int s, int e)
{
    if (s >= e)
    {
        return 1; // Base case: when pointers meet or cross
    }
    if (str[s] != str[e])
    {
        return 0; // Not a palindrome
    }
    return ispallindrom(str, s + 1, e - 1); // Recursive call
}
int main ()
{
    char str[]="MADAM";
    if (ispallindrom(str, 0, 4))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
}