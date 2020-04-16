#include<iostream>
using namespace std;
struct book
{

int bookid=10;
char title[10];
int price;
}b2;
int main ()
{

book b1={1,"Ravinder",44};
cout<<b1.bookid<<"  "<<b1.price<<" "<<b1.title<<endl;
cout<<b1.bookid<<"  "<<b1.price<<" "<<b1.title<<endl;
return 0;

}