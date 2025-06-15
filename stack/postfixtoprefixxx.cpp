#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isoperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixtoprefix(string postfix)
{
    stack<string> s;

    for (int i = 0; i < postfix.length(); i++)
    {
        char c = postfix[i];

        if (isalnum(c))
        {
            s.push(string(1, c));
        }
        else if (isoperator(c))
        {
            if (s.size() < 2)
            {
                cerr << "Error: Invalid postfix expression." << endl;
                return "";
            }

            string operand1 = s.top();
            s.pop();
            string operand2 = s.top();
            s.pop();

            // Concatenate without spaces for the prefix expression
            string expression = c + operand2 + operand1;
            s.push(expression);
        }
    }

    if (s.size() != 1)
    {
        cerr << "Error: Invalid postfix expression." << endl;
        return "";
    }

    return s.top();
}

int main()
{
    string postfix;
    cout << "Write a postfix expression: ";
    cin >> postfix;
    cout << "The statment you gave is " << postfix << endl;
    string prefix = postfixtoprefix(postfix);
    if (!prefix.empty())
    {
        cout << "The prefix expression is: " << prefix << endl;
    }

    return 0;
}
