void insertAtBottom(stack<int> &stack, int num) {
    // Base case
    if (stack.empty()) {
        stack.push(num);
        return;
    }

    // Processing
    int topElement = stack.top();
    stack.pop();

    // Recursive call
    insertAtBottom(stack, num);

    // Push the top element back on the stack
    stack.push(topElement);
}

void reverseStack(stack<int> &stack) {
    // Base case
    if (stack.empty()) return;
    
    // Processing
    int topElement = stack.top();
    stack.pop();

    // Recursive call to reverse remaining elements 
    reverseStack(stack);

    // Inserting the topmost element at the bottom
    insertAtBottom(stack, topElement);
}

