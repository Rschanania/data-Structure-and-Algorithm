#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }

} *head = nullptr, *tail = nullptr;

void push(int x)
{

    Node *new_node = new Node(x);

    // new_node->next = head;
    // if (head != nullptr)
    // {
    //     head->prev = new_node;
    // }
    // head = new_node;
    if (head == nullptr)
    {
        head = tail = new_node;
    }
    else
    {
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }
}
void insertAfter(Node *prev_node, int x)
{
    if (prev_node == nullptr)
    {
        cout << "Null pointer can node add  node After this \n";
        return;
    }

    Node *new_node = new Node(x);
    new_node->next = prev_node->next;
    new_node->prev = prev_node;
    prev_node->next = new_node;
    if (new_node->next != nullptr)
    {
        new_node->next->prev = new_node;
    }
    else
    {
        {
            tail = new_node;
        }
    }
}
void insertBefore(Node *next_node, int data)
{

    Node *new_node = new Node(data);
    if (next_node == nullptr)
    {
        cout << "Nill pointer can not add node befor it \n";
        return;
    }
    new_node->next = next_node;
    new_node->prev = next_node->prev;
    next_node->prev = new_node;
    if (new_node->prev != nullptr)
    {
        new_node->prev->next = new_node;
    }
    else
    {
        head = new_node;
    }
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << "\n";
}

void append(Node *head, int data)
{

    Node *new_node = new Node(data);

    if (head == nullptr)
    {
        head = tail = new_node;
    }
    else
    {

        new_node->prev = tail;
        new_node->next = tail->next;
        tail->next = new_node;
        tail = new_node;
    }
}

void printLast(void)
{
    cout << " Lst node is " << tail->data << "\n";
}

int main()
{
    push(4);
    push(11);
    push(12);

    insertAfter(head->next->next, 44);
    printList(head);
    append(head,90);
    append(head,90);
    printList(head);
    insertAfter(head->next->next->next->next->next, 44);
    append(head,900);
    printLast();
    cout << "Hello";
    return 0;
}