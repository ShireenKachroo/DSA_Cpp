/*IMPLEMENTING QUEUE USING ARRAYS*/
#include<bits/stdc++.h>
using namespace std;
class Queue {

    int *arr;
    int size;
    int front;
    int rear;
    int currSize;

public:
    Queue() {
        /*default constructor*/
        arr = new int[1000];  //any random size
        size = 1000;
        front = -1;
        rear = -1;
        currSize = 0;
    }
    Queue(int s) {
        /*Param. constructor*/
        this->size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
        currSize = 0;
    }
    void push(int ele) {
        // first check if the queue is full
        if (currSize == size) {
            cout << "Queue is full" << endl;
            return;
        }
        // queue is empty, move front,rear to next index i.e 0th index
        if (rear == -1) {
            front = 0;
            rear = 0;
        }
        //queue is empty but rear has crossed maxSize of queue and start is moved to 0+index after popping
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = ele;
        currSize++;
    }
    int pop() {
        // first check if the queue has min 1 ele/ non-empty
        if (currSize == 0) {
            cout << "Queue is Empty" << endl;
            return -1; // or throw an exception
        }
        int popped = arr[front];
        if (currSize == 1) {
            //1 sized array
            front = -1;
            rear = -1;
        }
        //bring back front circularly
        else {
            front = (front + 1) % size;
        }
        currSize--;
        return popped;
    }
    int Top() {
        // check if queue isn't empty
        if (currSize == 0) {
            cout << "Empty Queue" << endl;
            return -1; // or throw an exception
        }
        return arr[front];
    }
    int Size() {
        // simply return the size
        return currSize;
    }
    bool isEmpty() {
        // returns true if empty else returns false
        return currSize == 0;
    }
};
int main()
{
    Queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"TOP: "<<q.Top()<<endl;
    cout<<"SIZE: "<<q.Size()<<endl;
    q.pop();
    cout<<"TOP: "<<q.Top()<<endl;
    cout<<"SIZE: "<<q.Size()<<endl;
    cout<<"IS EMPTY: "<<q.isEmpty()<<endl;
    q.pop();
    q.pop();
    cout<<"IS EMPTY: "<<q.isEmpty()<<endl;
    return 0;
}
