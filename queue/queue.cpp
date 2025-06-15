#include <iostream>
using namespace std;

int queue[5];
int s = 5;
int front = -1;
int rear = -1;
int x;

void enqueue()
{
    if (rear == s - 1)
    {
        cout << "queue is full";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
    }
    cout << "enter value";
    cin >> x;
    rear++;
    queue[rear] = x;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "queue is empty";
    }
    else if (rear == front)
    {
        rear = -1;
        front = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "empty";
    }
    else
    {
        cout << "displaying ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}