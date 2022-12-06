#include <iostream>
#include <stack>
using namespace std;
class stack
{
    // Properties
 public:
    int *arr;
    int top;
    int size;
    // Behavior
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    };
    void push(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
        {
            cout << "stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack Underflow" << endl;
        }
    }
    int isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peak()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }


int main()
{
  stack a(5);
    a.push(24);
    a.push(14);
    a.push(57);
    cout << a.peak() << endl;
}