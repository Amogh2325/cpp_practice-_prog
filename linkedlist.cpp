#include <iostream>
using namespace std;

class node
{
private:

public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAtBeginning(node *& head, int value)
{
    node *newnode = new node(value);
    newnode->next = head;
    head = newnode;
}

void display(node* head)
{
    if(head == NULL)
    {
        cout << "Head is null";
        return;
    }

    node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;   // missing line in your code
    }
    cout << "NULL" << endl;
}

void insertAtEnd(node *& head, int value)
{
    node *newnode = new node(value);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;  
    

};

int main()
{
    node *head = NULL;

    
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);
    insertAtEnd(head, 6);


    display(head);

    return 0;
}