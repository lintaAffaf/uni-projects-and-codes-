#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }

    if (c == '*' || c == '/')
    {
        return 2;
    }
    if (c == '+' || c == '-')
    {
        return 1;
    }
    return -1;
}

string infixToPrefix(string infix)
{
    stack<char> operators;
    stack<string> operands;

    for (int i = infix.length() - 1; i >= 0; i--)
    {
        char c = infix[i];

        if (isalnum(c))
        {
            operands.push(string(1, c));
        }
        else if (isOperator(c))
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c))
            {
                string op1 = operands.top();
                operands.pop();
                string op2 = operands.top();
                operands.pop();
                string prefix = operators.top() + op2 + op1;
                operands.push(prefix);
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty())
    {
        string op1 = operands.top();
        operands.pop();
        string op2 = operands.top();
        operands.pop();
        string prefix = operators.top() + op2 + op1;
        operands.push(prefix);
        operators.pop();
    }

    return operands.top();
}

int main()
{
    string infix;
    cout << "Enter infix expression: ";
    cin>> infix);

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
