#include <iostream>
using namespace std;
string stack[20];
int n = 10;
int top = -1;

void push(string x)
{
    if (top == n - 1)
    {
        cout << "stack is full";
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void display()
{
    cout << "the stack is : " << endl;
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
    else
    {
        cout << "stack is empty.." << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        top--;
    }
}

void empty()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}
main()
{
    push("10");
    push("20");
    display();
    pop();
    display();
    push("30");
    push("40");
    display();
    pop();
    display();
}