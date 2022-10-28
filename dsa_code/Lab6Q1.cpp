#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define STACK_SIZE 100
class Stack
{
private:
    int top;
    char arr[STACK_SIZE];

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

    char pop()
    {
        if (top >= 0)
            return arr[top--];
        return -1;
    }

    char peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int precedence(char c)
{
    switch (c)
    {
    case '-':
    case '+':
        return 1;
        break;
    case '*':
    case '/':
        return 2;
        break;
    case '$':
    case '^':
        return 3;
        break;
    default:
        return 0;
        break;
    }
}
// handling brackets
string rev(string output)
{
    string result;
    int len = output.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (output[i] == '(')
        {
            result += ')';
        }
        else if (output[i] == ')')
        {
            result += '(';
        }
        else
        {
            result += output[i];
        }
    }
    return result;
}

string infixtoPrefix(string infix)
{
    infix = "(" + infix + ")";
    infix = rev(infix);
    int l = infix.size();
    string output;
    Stack s;
    for (int i = 0; i < l; i++)
    {
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];
        else if (infix[i] == '(')
            s.push(infix[i]);
        else if (infix[i] == ')')
        {
            while (s.peek() != '(')
                output += s.pop();
            s.pop();
        }
        else
        {
            while (precedence(infix[i]) < precedence(s.peek()))
                output += s.pop();
            s.push(infix[i]);
        }
    }
    output = rev(output);
    return output;
}

int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    cout << infixtoPrefix(s);
}