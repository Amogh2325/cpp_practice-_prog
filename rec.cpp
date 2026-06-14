#include <iostream>
using namespace std;
void printre(int n)
{
    if(n==0)
    {
        return;
    }
    cout << n << " ";
    printre(n-1);
}
int main()
{
    printre(5);
    return 0;
}