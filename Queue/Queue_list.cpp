#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    int size;
    Node(int x)
    {
        data = x;
        next = nullptr;
        size = 0;
    }
};
struct Queue
{
    Node *rear, *front;
    int size;
    Queue()
    {
        size = 0;
        rear = nullptr;
        front = nullptr;
    }
    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == nullptr)
        {
            front = rear = temp;
            size++;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }
    void dequeue(void)
    {

        if (front == nullptr)
            return;
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        size--;
        delete (temp);
    }
    void printQueue(void)
    {
        Node *temp = front;
        if(temp==nullptr)
        {
            cout<<"No element in the Queue\n";
        }
        while (temp != nullptr)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
        cout << "\n";
    }
    void getSize(void)
    {
        cout << " \nSize of queue is :-" << size << "\n";
    }
};

int main()
{

    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.printQueue();
    q.getSize();
    q.dequeue();
    q.getSize();
    q.printQueue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printQueue();
    q.getSize();

    return 0;
}