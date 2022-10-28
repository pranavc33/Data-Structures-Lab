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

bool Operand(char x)
{
    return (x >= 'a' && x <= 'z') ||
           (x >= 'A' && x <= 'Z');
}
string getInfix(string exp)
{
    stack<string> s;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (Operand(exp[i]))
        {
            string op(1, exp[i]);
            s.push(op);
        }
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + exp[i] +
                   op1 + ")");
        }
    }

    return s.top();
}

// Driver code
int main()
{
    string exp = "ab*c+";
    cout << getInfix(exp);
    return 0;
}