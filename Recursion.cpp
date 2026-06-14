#include <iostream>
using namespace std;

void primenumbers(int n )
{
    if(n==0)
    {
        return;
    }
    primenumbers(n-1);
    cout << n << " ";
}
int main()
{
    int n=5;
    
    primenumbers(n);
    return 0;
}