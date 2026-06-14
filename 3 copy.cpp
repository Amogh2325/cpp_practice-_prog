#include <iostream>
using namespace std;
 int main()
 {
    int i=1;
    i++;


    switch(i--)
    {
        case 1 :
        cout<< "case 1 executed"<<endl;
        break;

        case 2 :
        cout<<"case 2 executed"<<endl;
        break;
        default:
        cout<<"default case executed"<<endl;
    }
    return 0;
 }