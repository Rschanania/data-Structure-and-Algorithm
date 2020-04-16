#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    cout<<q.empty()<<endl;
    while(q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();

    }
    
    return 0;
}