#include <iostream>
using namespace std;
class Stack
{
    private:
    int size ;
    int *arr; 
    int top;

    public:
    Stack(int s)// constructor to initialize the stack
    {
        int size = s;
        arr = new int[size];
        top = -1;
    }
    // this function cheaks if stack is empty or not
    bool isempty()    
    {
        return top == -1;

    }
    // this function cheaks if stack is full or not
    bool isfull()
    {
        return top == size - 1;
    }
    // this function adds an element to the top of the stack
    void push(int value)
    {
       if (isfull())
    {
        cout<<"stack is full"<<endl;
        return;

    }
    arr[++top] = value;
    cout << "Pushed element ="<<arr[top] << endl; 

    }
    void display()
    {
        if (isempty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        for (int i = top ; i>=0; i--)
        {
            cout << arr[i] << "\n";
        }
        cout << endl;
    }
    int pop()//
    {
        if (isempty())
        {
            cout << "stack is empty" << endl;
            return -1 ; 
        }
        cout << "Popped element = " << arr[top] << endl;
        top--;
    }
    int peek()
    {
        if (isempty())
        {
            cout << "stack is empty" << endl;
            return -1 ; 
        }
        cout << "Top value = " << arr[top] << endl;
    }
        ~Stack()
        {
            delete[] arr;
        }

        int exit()
        {
            cout << "Exiting the program." << endl;
            return 0;
        }

};
int main()
{
    Stack st(5);
    cout << "Stack has created with capacity of 5." << endl;
    while (true)
    {
        int ch;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display stack" << endl;
        cout << "4. peek" << endl;
        cout << "5. Delete stack" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: "<< endl;
        cin >> ch;
        if (ch==1)
        {
            int val;
            cout << "Enter value to push: " << endl;
            cin >> val;
            st.push(val);
        }
         else if (ch==2)
        {
            st.pop();
        }

      
         else if (ch==3)
        {
            st.display();
        }
         else if (ch==4)
         {
            st.peek();
         }
        else if (ch==5)
        {
             st.~Stack();
             cout << "Stack has been deleted." << endl;
        }
        else if (ch==6)
        {
            st.exit();
             break;
      }
            
            
       
        



    }

    return 0;
}