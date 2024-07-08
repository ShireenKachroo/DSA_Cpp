/*implementing stack using 2 queues*/
class Stack {
    queue<int> q1;
    queue<int> q2;
public:
    void push(int ele) {
        // Add element to q2
        q2.push(ele);
        // Add elements of q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        // Swap q1 and q2
        swap(q1, q2);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack underflow" << endl;
            return;
        }
        q1.pop();
    }

    int top() {
        if (q1.empty()) {
            cout << "Empty Stack has no top" << endl;
            return -1; // Return an invalid value to indicate error
        }
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

/*Using Single Queue*/
class MyStack {
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if (!q.empty()) {
            int topElement = q.front();
            q.pop();
            return topElement;
        }
        return -1;
    }
    
    int top() {
        if (!q.empty()) return q.front();
        return -1;
    }
    
    bool empty() {
        return q.empty();
    }
};
