#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBeginning(Node*& head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *&head, int data)
{
    Node *newNode = newNode();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(Node *&head, int data, int pos)
{
    Node *newNode = newNode();
    newNode->data = data;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "position ouf of bounnds" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void displaylist(Node *head)
{
    if (head = nullptr)
    {
        cout << "list is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    Node *head = Nullptr;
    insertAtBeginning(head, 2);
    insertAtEnd(head, 6);
    insertAtPos(head, 15);
    displaylist(head);
    return 0;
}

