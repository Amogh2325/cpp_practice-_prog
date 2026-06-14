#include <iostream>
using namespace std;
 int main()
 {
    int i=65;
    char ch = 'B';

    switch(ch,i)
    {
        case 65 :
        cout<< "intiger 65"<<endl;
        break;

        case 'B':
        cout<<"character B"<<endl;
        break;
    }
    return 0;
 }