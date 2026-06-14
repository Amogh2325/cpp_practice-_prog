#include <iostream>
using namespace std;
 int main()
 {
    int num = 0;
    if(num++,num--,++num)// 1st priority is always given to post incriment 


    switch(num)
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