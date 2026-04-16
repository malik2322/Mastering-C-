

#include <iostream>
using namespace std;

class stackPractice
{
private:
    int top;
    int arr[100];

public:
    stackPractice()
    {
        top = -1;
    };

    // ~stackPractice();
    void push(int x)
    {
        if (top >= 99)
        {
            cout << "Stack overFlow: " << endl;
        }
        arr[++top] = x;
        cout << "Stack Pushed..." << x << endl;
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack UnderFlow: " << endl;
        }
        return arr[top--];
        cout << "Stack Pulled..." << endl;
    }
    int peek()
    {
        if (top <= 0)
        {
            cout << "Stack is empty: " << endl;
        }
        return arr[top];
        cout << "Stack peeked..." << endl;
    }

    bool isEmpty()
    {
        return (top < 0);
    }
};

// stackPractice::stackPractice(/* args */)
// {
// }

int main()
{
    stackPractice stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    int peek_result = stack.peek();
    cout << "top of stack" << peek_result << " " << endl;

    cout << "Elements present in stack : ";
    // While the stack is not empty
    while (!stack.isEmpty())
    {
        // Pop the top element from the stack and print it
        cout << stack.pop() << " ";
    }

    return 0;
}