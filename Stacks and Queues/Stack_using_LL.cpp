/*implementing stack using linked list*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    public:
    Node(int n){
        val = n;
        next = nullptr;
    }
    Node(int n, Node* nextPtr){
        val = n;
        next = nextPtr;
    }
};
class Stack{
    Node* head; //denotes top of LL
    int size;
    public:
    Stack(){
        head = nullptr;
        size = 0;
    }
    void push(int ele){
        //pushes ele at top of stack/ head of LL
        Node* newHead = new Node(ele);
        newHead->next = head;
        head = newHead;
        size++;
    }
    void pop(){
        //removes ele from head of LL/ top of stack
        Node* nodeToDel = head;
        head = head->next;
        nodeToDel->next = nullptr;
        delete nodeToDel;
        size--;
    }
    int top(){
        if(head != NULL){
            //non empty stack
            return head->val;
        }
        return -1; //empty stack
    }
    int Size(){
        return size;
    }
    bool empty(){
        if(head == nullptr) return true;
        return false;
    }

};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // Should output 3
    st.pop();
    cout << st.top() << endl; // Should output 2
    cout<<"Size of stack: "<<st.Size()<<endl;
    cout<<"is empty? "<<st.empty()<<endl;
    st.pop();
    st.pop();
    cout<<"is empty? "<<st.empty()<<endl;
    cout<<"Size of stack: "<<st.Size()<<endl;
    return 0;
}
