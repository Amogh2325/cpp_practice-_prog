# include <algorithm>
#include <iostream>
using namespace std;

void show (int a[],int arraysize)
{
    for (int i = 0;i<arraysize;i++)
    {
        cout << a[i] << " , ";
    }
}
int main ()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int arraysize = sizeof(a)/sizeof(a[0]);
    cout << "Before sorting : " << endl;
    show(a,arraysize);
    cout << endl;
    sort(a,a+arraysize);
    cout << "After sorting : " << endl;
    show(a,arraysize);
    if (binary_search(a, a + arraysize, 2 ))
    {
        cout << endl << "Element found in the array." << endl;
    }
    else
    {
        cout << endl << "Element not found in the array." << endl;
    }
    return 0;
}