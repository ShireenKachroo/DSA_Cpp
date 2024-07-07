#include<bits/stdc++.h>
using namespace std;
class Kqueue{

    int* arr;
    int* front;
    int* rear;
    int* next;
    int index,freeSpot,k,n;

public:
    Kqueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        //initialising all elements of front [] and rear[] as -1
        for(int i=0;i<k;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        arr = new int[n];
        //storing indexes of next elements
        next = new int[n];
        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        freeSpot = 0;
    }
    //to push elements
    void enqueue(int ele, int q){
        //overflow
        if(freeSpot == -1){
            cout<<"QUEUE OVERFLOW"<<endl;
            return;
        }
        //first free space
        int index = freeSpot;
        //update freeSpot
        freeSpot = next[index];
        //check if first element to be inserted
        if(front[q-1] == -1)  front[q-1] = index;
        else{
            //link new element to the previous element
            next[rear[q-1]] = index;
        }
        //update next
        next[index] = -1;
        //update rear
        rear[q-1] = index;
        //push the element
        arr[index] = ele;
        return;
    }
    //to pop elements
    void dequeue(int q){
        //underflow
        if(front[q-1] == -1){
            cout<<"UNDERFLOW OCCURRED"<<endl;
            return;
        }
        //find index to pop
        int index = front[q-1];
        //move front
        front[q-1] = next[index];
        //manage freeSpot
        next[index] = freeSpot;
        freeSpot = index;
        return;
    }

};
int main(){
    Kqueue q(10,3);
    q.enqueue(5,1);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(5,2);
    q.enqueue(23,2);
    q.dequeue(1);
    q.dequeue(2);
    q.dequeue(3);
}
