#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;
int evaluatePostfix(const string &expression)
{
    stack<int> s;
    stringstream ss(expression);
    string token;
    while (ss >> token)
    {
        if (isdigit(token[0]))
        {
            s.push(stoi(token));
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            int result;
            switch (token[0])
            {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
            default:
                cout << "Invalid operator!" << endl;
                return -1;
            }
            s.push(result);
        }
    }
    return s.top();
}
int main()
{
    string expression = "5 3 + 8 2 - *";
    int result = evaluatePostfix(expression);
    cout << "Result of postfix expression: " << result << endl;
    return 0;
}
