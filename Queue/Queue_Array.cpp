#include <iostream>
using namespace std;
struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isFull()
    {
       return (size==cap);
        
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void dequeue(void)
    {
        if (isEmpty() == true)
        {
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    void printQueue(void)
    {
        for (int i=0;i<=size-1;i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<"\n";
    }
    void enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full \n";
            return ;
        }
        arr[size] = x;
        size++;
    }
    void getSize(void)
    {
        cout<<size<<"\n";
    }
};

int main()
{

Queue q(5);
q.enqueue(10);
q.enqueue(11);
q.enqueue(102);
q.enqueue(1023);
q.enqueue(1024);
q.enqueue(102);
q.enqueue(102);
q.enqueue(102);
q.getSize();
q.printQueue();
q.dequeue();
q.printQueue();
q.getSize();
return 0;
}