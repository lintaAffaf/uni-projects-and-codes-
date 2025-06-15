#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int front;
    int back;
    int size;
    int capacity;

    void resize(int newCapacity)
    {
        int *newArr = new int[newCapacity];
        int j = 0;
        for (int i = front; i != back; i = (i + 1) % capacity)
        {
            newArr[j++] = arr[i];
        }
        newArr[j] = arr[back];
        front = 0;
        back = size - 1;
        capacity = newCapacity;
        delete[] arr;
        arr = newArr;
    }

public:
    Deque(int capacity) : capacity(capacity), size(0), front(-1), back(-1)
    {
        arr = new int[capacity];
    }

    ~Deque()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return size == capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void insertFront(int key)
    {
        if (isFull())
        {
            resize(2 * capacity);
        }

        if (front == -1)
        {
            front = back = 0;
        }
        else if (front == 0)
        {
            front = capacity - 1;
        }
        else
        {
            front--;
        }

        arr[front] = key;
        size++;
    }

    void insertback(int key)
    {
        if (isFull())
        {
            resize(2 * capacity);
        }

        if (back == -1)
        {
            front = back = 0;
        }
        else if (back == capacity - 1)
        {
            back = 0;
        }
        else
        {
            back++;
        }

        arr[back] = key;
        size++;
    }

    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == back)
        {
            front = back = -1;
        }
        else if (front == capacity - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        size--;
    }

    void deleteback()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == back)
        {
            front = back = -1;
        }
        else if (back == 0)
        {
            back = capacity - 1;
        }
        else
        {
            back--;
        }

        size--;
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int getback()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        return arr[back];
    }
};

int main()
{
    Deque dq(5);

    dq.insertback(1);
    dq.insertback(2);
    dq.insertFront(3);
    dq.insertFront(4);
    dq.insertback(5);

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getback() << endl;

    dq.deleteFront();
    cout << "Front element after deletion: " << dq.getFront() << endl;

    dq.deleteback();
    cout << "Rear element after deletion: " << dq.getback() << endl;

    return 0;
}