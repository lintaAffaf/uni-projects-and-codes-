#include <iostream>
using namespace std;

class PriorityQueue
{
private:
    int *elements; // Dynamic array to hold the elements
    int capacity;  // Maximum number of elements
    int size;      // Current number of elements

    // Method to resize the array when it is full
    void resize()
    {
        capacity *= 2;                        // Double the capacity
        int *newElements = new int[capacity]; // Allocate new array
        for (int i = 0; i < size; ++i)
        {
            newElements[i] = elements[i]; // Copy old elements
        }
        delete[] elements;      // Free the old array
        elements = newElements; // Point to the new array
    }

public:
    // Constructor
    PriorityQueue(int initialCapacity = 10)
    {
        capacity = initialCapacity;
        size = 0;
        elements = new int[capacity]; // Allocate initial array
    }

    // Destructor to free allocated memory
    ~PriorityQueue()
    {
        delete[] elements;
    }

    // Method to insert an element into the priority queue
    void push(int value)
    {
        if (size == capacity)
        {
            resize(); // Resize if the array is full
        }
        elements[size] = value; // Add element to the end
        size++;                 // Increase size
        // Move the new element to its correct position
        int index = size - 1;
        while (index > 0)
        {
            int parent = (index - 1) / 2; // Get parent index
            if (elements[index] > elements[parent])
            {                                            // Max-heap condition
                swap(elements[index], elements[parent]); // Swap with parent
                index = parent;                          // Move up to parent
            }
            else
            {
                break; // Stop if the parent is greater
            }
        }
    }

    // Method to remove the highest priority element
    void pop()
    {
        if (size == 0)
        {
            cout << "Priority queue is empty!" << endl;
            return;
        }
        // Move the last element to the root and remove the last
        elements[0] = elements[size - 1];
        size--; // Decrease size
        // Restore the heap property
        heapify(0);
    }

    // Method to get the highest priority element
    int top()
    {
        if (size == 0)
        {
            cout << "Priority queue is empty!" << endl;
            return -1; // Return an invalid value
        }
        return elements[0];
    }

    // Method to check if the priority queue is empty
    bool isEmpty()
    {
        return size == 0;
    }

private:
    // Helper method to maintain the heap property after popping
    void heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;  // Left child index
        int right = 2 * index + 2; // Right child index

        // Check if left child exists and is greater
        if (left < size && elements[left] > elements[largest])
        {
            largest = left;
        }

        // Check if right child exists and is greater
        if (right < size && elements[right] > elements[largest])
        {
            largest = right;
        }

        // If the largest is not the current index, swap and heapify
        if (largest != index)
        {
            swap(elements[index], elements[largest]);
            heapify(largest);
        }
    }
};

int main()
{
    PriorityQueue pq;

    pq.push(30);
    pq.push(20);
    pq.push(50);
    pq.push(10);

    cout << "Priority Queue Elements (from highest to lowest):" << endl;
    while (!pq.isEmpty())
    {
        cout << pq.top() << " "; // Display the highest priority element
        pq.pop();                // Remove the highest priority element
    }
    cout << endl;

    return 0;
}
