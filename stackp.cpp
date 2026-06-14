# include <stack>
#include <iostream>
using namespace std;

int main ()
{
    stack <int> s;
    s.push(21);
    s.push(22);
    s.push(24);
    s.push(25);
    cout<< s.top() << endl;

    int num=0;
    s.push(num);
    s.pop();
    s.pop();
    while (!s.empty())
    {
        cout << s.top() << " " << endl;
        s.pop();
    }
   
    return 0;
}