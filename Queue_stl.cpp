# include <queue>
#include <iostream>
using namespace std;

void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main ()
{
    queue <int> que ;
    que.push(11);
    que.push(22);
    que.push(33);
    cout << "The queue is :";
    showq(que);

    cout << "\n que.size()  :" << que.size() ;
    cout << "\n que.front() :" << que.front();
    cout << "\n que.back()  :" << que.back();

    cout << "\n que.pop()   :";
    que.pop();
    showq(que);

    return 0;
}