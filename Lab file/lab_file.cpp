#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Queue using Two Stacks
class QueueUsingStacks {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) s2.pop();
    }

    int front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.empty() ? -1 : s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};

// Stack using Two Queues
class StackUsingQueues {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    void pop() {
        if (!q1.empty()) q1.pop();
    }

    int top() {
        return q1.empty() ? -1 : q1.front();
    }

    bool isEmpty() {
        return q1.empty();
    }
};

int main() {
    cout << "Testing Queue Using Two Stacks:" << endl;
    QueueUsingStacks q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front: " << q.front() << endl;
    q.dequeue();
    cout << "Front: " << q.front() << endl;
    cout << "Is Queue Empty: " << (q.isEmpty() ? "Yes" : "No") << endl;

    cout << "\nTesting Stack Using Two Queues:" << endl;
    StackUsingQueues s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top: " << s.top() << endl;
    cout << "Is Stack Empty: " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
