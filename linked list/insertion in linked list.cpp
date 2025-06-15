#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void insertAtBeginning(node *&head, int data)
{
    node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(node *&head, int data)
{
    node *newNode = newNode();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(node *&head, int data, int pos)
{
    node *newNode = newNode();
    newNode->data = data;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "position ouf of bounnds" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void displaylist(node *head)
{
    if (head = NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    node *head = NULL;
    insertAtBeginning(head, 2);
    insertAtEnd(head, 6);
    insertAtPos(head, 15);
    displaylist(head);
    return 0;
}
