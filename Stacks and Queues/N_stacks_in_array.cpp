class NStack
{
    int *arr;
    int *next;
    int *top;
    int n,s,freespot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N, s = S;
        arr = new int[s];

        top = new int[n];
        //initialise all ele of top[]
        for(int i=0;i<n;i++){
            top[i] = -1;
        }
        next = new int[s];
        //initialise all ele of next[]
        for(int i=0;i<s;i++){
            next[i] = i+1;
        }
        //initialise last ele to -1
        next[s-1] = -1;
        //initialise freespot
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check for stack overflow
        if(freespot == -1)  return false; 

        //find the index to insert ele
        int index = freespot;
        //insert the ele
        arr[index] = x;
        //update freespot
        freespot = next[index];
        //update next
        next[index] = top[m-1];
        //update top
        top[m-1] = index;

    return true; //element inserted successfully 
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //check for underflow 
        if(top[m-1] == -1) return -1;

        //find index;
        int index = top[m-1];
        //update top
        top[m-1] = next[index];
        //update next
        next[index] = freespot;
        //update freespot
        freespot = index;

    return arr[index];  //return ele to be popped
    }
};
