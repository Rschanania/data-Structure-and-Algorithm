#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int arr[10] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
    int size=sizeof(arr) / sizeof(arr[0]);
    cout << "Size of " <<size <<endl;
  


s.push(0);
cout<<1<<" ";
for(int i=1;i<size;i++)
{
while(s.empty()==false && arr[s.top()]<=arr[i])
{
    s.pop();
}
int span=s.empty()?i+1:i-s.top();
cout<<span<<" ";
s.push(i);
}
return 0;


}