#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

bool isoperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
string prefixtopostfix(string prefix)
{
    stack<string> s;
    reverse(prefix.begin(), prefix.end());
    for (int i = 0; i < prefix.length(); i++)
    {
        char c = prefix[i];
        if (isalnum(c))
        {
            s.push(string(1, c));
        }
        else if (isoperator(c))
        {
            string operand1 = s.top();
            s.pop();
            string operand2 = s.top();
            s.pop();

            string expression = operand1 + " " + operand2 + " " + c;
            s.push(expression);
        }
    }
    return s.top();
}
int main()
{
    string prefix;
    cout << "enter a prefix expression: ";
    cin >> prefix;
    cout << "the postfix expression is : " << prefixtopostfix(prefix) << endl;
    return 0;
}