#include <bits/stdc++.h>
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Check if the deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) 
            return false;
        
        // Insert first element
        if (front == -1)
        {
            front = rear = 0;
        }
        // Ensure circular nature
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Check if the deque is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size))
            return false;

        // Insert first element
        if (front == -1)
        {
            front = rear = 0;
        }
        // Ensure circular nature
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Check if empty
        if (front == -1) 
            return -1;

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1; // Single element was present
        }
        else if (front == size - 1)
        {
            front = 0; // Ensure circular nature
        }
        else
        {
            front++;
        }
        
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Check if empty
        if (front == -1) 
            return -1;

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        {
            front = rear = -1; // Single element was present
        }
        else if (rear == 0)
        {
            rear = size - 1; // Ensure circular nature
        }
        else
        {
            rear--;
        }
        
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (front == -1) 
            return -1;
        
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (front == -1) 
            return -1;
        
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        return front == -1;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        return (front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1 + size) % size);
    }
};
