#include <iostream>
using namespace std;
class queue
{
    private:
    int *arr;
    int front;
    int rear;
    int capacity;
    public:
    queue(int size)
    {
       capacity=size;
        arr = new int [capacity];
        front = 0;
        rear = -1;
    }
    bool isempty()
    {
        return rear < front;
    }
    bool isfull()
    {
        return rear == capacity - 1;
    }
    void enqueue(int value)
    {
       if (isfull())
    {
        cout<<"queue is full"<< value <<endl;
        return;

    }
    arr[++rear] = value;
    cout<< value << "Enqueued element =" << endl; 

    }
    void display()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return;
        }
        for (int i = front ; i<=rear; i++)
        {
            cout << arr[i] << "\n";
        }
        cout << endl;
    }
    int dequeue()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return -1 ; 
        }
        cout <<arr[front] << "Dequeued element = " << endl;
        front++;
    }
    int peek()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return -1 ; 
        }
        cout << "Front value = " << arr[front] << endl;
    }
        ~queue()
        {
            delete[] arr;
        }

        int exit()
        {
            cout << "Exiting the program." << endl;
            return 0;
        }


};


int main ()
{
    queue q(5);
    cout << "Queue has created with capacity of 5." << endl;
    while (true)
    {
        int ch;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display queue" << endl;
        cout << "4. peek" << endl;
        cout << "5. Delete queue" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: "<< endl;
        cin >> ch;
        if (ch==1)
        {
            int val;
            cout << "Enter value to enqueue: " << endl;
            cin >> val;
            q.enqueue(val);
        }
         else if (ch==2)
         {
            q.display();
        }
            else if (ch==3)
            {
                q.dequeue();
            }
            else if (ch==4)
            {
                q.peek();
            }
            else if (ch==5)
            {
                q.~queue();
            }
            else if (ch==6)
            {
                q.exit();
                break;
            }
            else
            {
                cout << "Invalid choice. Please try again." << endl;
            }
    }
        
    
}