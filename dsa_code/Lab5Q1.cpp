
/* C++ implementation to convert
infix expression to postfix*/

#include <bits/stdc++.h>
using namespace std;
const int STACK_SIZE = 100;
class Stack
{
private:
    int top;
    int arr[STACK_SIZE];

public:
    Stack()
    {
        top = -1;
    }
    void push(int elem)
    {
        if (top < STACK_SIZE)
        {
            arr[++top] = elem;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    int pop()
    {
        if (top >= 0)
            return arr[top--];
        cout << "Stack Underflow!" << endl;
        return -1;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Underflow" << endl;
            return -1;
        }
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

// Function to return precedence of operators
int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{

    stack<char> st; // For stack operations, we are using
                    // C++ built in stack
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');

        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        // If an operator is scanned
        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    cout << result << endl;
}

// Driver's code
int main()
{
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;
    // string expression = "a+b*(c^d-e)^(f+g*h)-i";

    // Function call
    infixToPostfix(expression);
    return 0;
}