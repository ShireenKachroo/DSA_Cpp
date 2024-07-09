class CircularQueue{
    int *arr;
    int front, rear, size;
    public:

    CircularQueue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    //push x into queue
    bool enqueue(int value){
        if ((front == 0 &&rear == size - 1) ||
            (rear == (front - 1) % (size - 1))) {
          return false; // queue is empty
        }
        else if (front == -1) {
          front = rear = 0;
          arr[rear] = value;
        } 
        else if ((rear == size - 1) && (front) != 0) {
          rear = 0;
          arr[rear] = value;
        } 
        else {
          rear++;
          arr[rear] = value;
        }
        return true; //element pushed successfully
    }
    
    //pops element from front
    int dequeue(){
        if(front == -1) return -1;  //empty queue, ele  can't be popped
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1; //single element is present
        }
        else if(front == size-1){
            //last element
            front = 0;
        }
        else  front++;
        return ans;
    }
};
