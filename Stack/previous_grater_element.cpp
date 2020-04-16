#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int arr[] = {15,10,18,12,4,6,2,8};
    int size=sizeof(arr) / sizeof(arr[0]);
    cout << "Size of " <<size <<endl;
    s.push(0);
    for (int i=1;i<size;i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        int ge=s.empty()?-1:arr[s.top()];
        cout<<" "<<ge <<" "<<i<<endl;
        s.push(i);
    }
    return 0;
}
  
