#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {

        data = value;
        next = NULL;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(NULL) {}
    void insert(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void display()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *secondLast = head;
        while (secondLast->next->next)
        {
            secondLast = secondLast->next;
        }
        delete secondLast->next;
        secondLast->next = NULL;
    }
    void deleteAtPosition(int position)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (position == 0)
        {
            deleteFront();
            return;
        }
        Node *current = head;
        for (int i = 0; i < position - 1 && current != NULL; i++)
        {
            current = current->next;
        }
        if (current == NULL || current->next == NULL)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }
    ~LinkedList()
    {
        while (head)
        {
            deleteFront();
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insert(5);
    ll.insert(4);
    ll.insert(3);
    ll.insert(2);
    ll.insert(1);

    cout << "Initial Linked List:" << endl;
    ll.display();

    cout << "\nAfter deleting from front:" << endl;
    ll.deleteFront();
    ll.display();

    cout << "\nAfter deleting from end:" << endl;
    ll.deleteEnd();
    ll.display();

    cout << "\nAfter deleting at position 2:" << endl;
    ll.deleteAtPosition(2);
    ll.display();
    return 0;
}