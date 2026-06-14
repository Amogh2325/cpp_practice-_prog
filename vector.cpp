#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
    vector<int> g1;
    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    cout<< "output of begin and end :"<< endl;
    for (auto i = g1.begin(); i!=g1.end();++i)
    {
        cout << *i << " ";

    
    }
     cout<< "\noutput of rbegin and rend :"<< endl;
    for (auto ir = g1.rbegin(); ir!=g1.rend();++ir)
    {
        cout << *ir << " ";

    }
    cout<<"\nSize : "<< g1.size();
    cout<<"\ncapacity : "<< g1.capacity();
    cout<<"\nmax_Size : "<< g1.max_size();

    cout<<"\nat\t: g1.at(4)="<< g1.at(3);
    cout<<"\nfront()\t:g1.front()"<< g1.front();
    cout<<"\nback()\t:g1.back()"<< g1.back();
    
    return 0;


 }
