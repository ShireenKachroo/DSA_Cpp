class MyQueue {
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        // Default constructor
    }
    
    void push(int x) {
        input.push(x);
        return;
    }
    
    int pop() {
        if (output.empty()) {
            //pushing ele of input stack to output
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int front = output.top();
        output.pop();
        return front;
    }
    
    int peek() {
        if (output.empty()) {
            //pushing ele of input stack to outpu
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return (input.empty() && output.empty());
    }
};



