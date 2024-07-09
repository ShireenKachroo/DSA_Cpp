#include<bits/stdc++.h>
using namespace std;
/*IMPLEMENTATION OF STACK USING ARRAYS*/
class Stack{
    int size;
    int top;
    int* arr;
    public:
    Stack()
    {
        //initialising the properties
        size = 1000;  //taking a random max size
        top = -1;  //in the beginning stack is empty
        arr = new int[size];
    }
    //inserting elements
    void push(int ele)
    {
        arr[++top] = ele;
        return;
    }
    //deleting ele
    int pop()
    {
        int ele = arr[top]; //store the element to be deleted
        top--;  //move top to prev position
        return ele;
    }
    //finding topmost ele
    int Top()
    {
        return arr[top];
    }
    //finding the size
    int Size()
    {
        return top+1;
    }
    //checking if the stack is empty
    bool isEmpty()
    {
        if(top == -1)  return true;
        return false;
    }
};
int main()
{
    Stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    cout<<st.isEmpty()<<endl;
    st.pop();
    st.pop();
    cout<<st.isEmpty();
}
