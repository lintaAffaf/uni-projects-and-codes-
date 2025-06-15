#include <iostream>
#include <vector>
using namespace std;
class Stack
{
private:
    vector<char> stack;

public:
    // Push method
    void push(char element)
    {
        stack.push_back(element);
    }

    // Pop method
    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        char top = stack.back();
        stack.pop_back();
        return top;
    }

    // Peek method
    char peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        return stack.back();
    }

    // isEmpty method
    bool isEmpty()
    {
        return stack.empty();
    }

    // Size method
    int size()
    {
        return stack.size();
    }

    void display()
    {
        cout << "Stack: ";
        for (size_t i = 0; i < stack.size(); ++i)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack myStack;

    myStack.push('A');
    myStack.push('B');
    myStack.push('C');
    myStack.display();
    cout << "Pop: " << myStack.pop() << endl;
    cout << "Peek: " << myStack.peek() << endl;
    cout << "isEmpty: " << myStack.isEmpty() << endl;
    cout << "Size: " << myStack.size() << endl;
    myStack.display();
    return 0;
}