
stack<int> pushAtBottom(stack<int>& myStack, int ele) 
{
    stack<int>dummyStack;
    //put all elements of myStack into dummy stack
    while(!myStack.empty())
    {
        int num = myStack.top();
        myStack.pop(); //remove the topmost ele
        dummyStack.push(num);
    }
    //pushing the element to insert at top of dummy stack
    dummyStack.push(ele);
    //popping out all ele from dummy stack back into myStack to get desired ans
    while(!dummyStack.empty())
    {
        int num = dummyStack.top();
        dummyStack.pop();
        myStack.push(num);
    }
    return myStack;
}
