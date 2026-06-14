#include <iostream>
using namespace std;
 int main()
 {
   int num = 5;
    


    switch (num++ == 5)
    {
        case 0 :
        cout<< "case 1 executed"<<endl;
        break;  
        case 1 :
        cout<<"case 2 executed"<<endl;
        break;
        default:
        cout<<"default case executed"<<endl;
    }
    return 0;
}
