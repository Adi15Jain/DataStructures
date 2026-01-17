#include <iostream>
using namespace std;

#define MAX 100

int st[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
        cout << "Stack Overflow\n";
    else
        st[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        top--;
}

void peek() {
    if (top == -1)
        cout << "Empty Stack\n";
    else
        cout << st[top] << endl;
}

int main() {
    push(10);
    push(20);
    peek();
    pop();
    peek();
    return 0;
}
