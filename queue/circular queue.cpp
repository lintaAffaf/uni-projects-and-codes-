#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int front, rear, size;
    int *queue;

public:
    CircularQueue(int s)
    {
        size = s;
        queue = new int[size];
        front = rear = -1;
    }

    ~CircularQueue()
    {
        delete[] queue;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        queue[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        int value = queue[front];
        if (front == rear)
        {
            front = rear = -1; // Queue is now empty
        }
        else
        {
            front = (front + 1) % size;
        }
        cout << "Dequeued: " << value << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i != rear; i = (i + 1) % size)
        {
            cout << queue[i] << " ";
        }
        cout << queue[rear] << endl; // Print the last element
    }
};

int main()
{
    CircularQueue q(5); // Create a circular queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This should show "Queue is full!"
    q.display();

    return 0;
}
