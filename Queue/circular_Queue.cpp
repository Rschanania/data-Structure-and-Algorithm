#include <iostream>
using namespace std;
struct circular_Queue
{
    int cap;
    int size;
    int front;
    int rear;
    int *arr;
    circular_Queue(int c)
    {
        size = 0;
        front = -1;
        rear = -1;
        cap = c;
        arr = new int[cap];
    }
    void dequeue(void)
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty \n";
        }
        else if (front == rear)
        {
            front = rear = -1;
            size++;
        }
        else
        {
            front = (front + 1) % cap;
            size++;
        }
    }
    void enqueue(int x)
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = x;
            size++;
        }
        else if ((rear + 1) % cap == front)
        {
            cout << "Queue is Full Can not insert\n";
            return;
        }
        else
        {
            rear = (rear + 1) % cap;
            arr[rear] = x;
            size++;
        }
    }
    bool isFull(void)
    {
        return (size == cap);
    }
    bool isEmpty(void)
    {
        return (size == 0);
    }
    int getFront(void)
    {
        if (isEmpty())
            return -1;
        else
        {
            return arr[front];
        }
    }
    int getRear(void)
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
            return -1;
        }
        else
        {
            {
                return arr[rear];
            }
        }
    }
    void printQueue(void)
    {
        if (rear >= front)
        {
            for (int i = 0; i <= rear; i++)
            {
                cout << " " << arr[i];
            }
            cout << "\n";
        }
        else
        {
            for (int i = front; i < cap; i++)
            {
                cout << " " << arr[i];
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << " " << arr[i];
            }
            cout << "\n";
        }
    }
};

int main()

{
    circular_Queue q(5);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(8);

    q.dequeue();
    q.dequeue();
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
    q.enqueue(18);
    q.enqueue(183);
    q.enqueue(13);
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;

    q.printQueue();
    return 0;
}