#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node(int d)
    {
        data=d;
    }
    node*nxt;
};
bool isPalin(node*head)
{
    node*a=head;
    stack<int>s;

    while(a!=NULL)
    {
        s.push(a->data);
        a=a->nxt;

    }
    while(head!=NULL)
    {
        int i=s.top();  //top function is used to reference the top (or the newest) element of the stack;
        s.pop();       //pop() is used to remove an element from the top of the stack container

        if(head->data!= i)
        {
            return false;
        }
        head =head->nxt;
    }
    return true;
}
int main()
{
    node one =node(1);
    node two =node(2);
    node three =node(3);
    node four =node(2);
    node five =node(1);


    five.nxt=NULL;
    one.nxt=&two;
    two.nxt=&three;
    three.nxt=&four;
    four.nxt=&five;
    node*temp=&one;

    int result =isPalin(&one);
    if(result==1)
    cout<<" Yes" ;
    else
        cout<<"No";
    return 0;





}
