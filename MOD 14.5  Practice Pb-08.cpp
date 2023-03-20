#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    char data;
    Node*next;
    Node*prev;
Node(char value)
{
    data=value;
    next=prev=NULL;

}
};
Node*head=NULL;
Node*tail=NULL;
void insertAtLast(char data)
{
    struct Node*newnode =new Node(data);
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head =newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
bool isPalindrome(Node*start)
{
    if(start==NULL)
        return true;
    Node*End =tail;
    while(start!=End && End!=start->prev)
    {
        if(start->data!=End->data)
            return false;
        start=start->next;
        End=End->prev;
    }
    return true;
}
int main()
{
string s ="abcba";
cout<<"Element of the linked list"<<endl<<s<<" ";
for(int i=0;i<s.length();i++)
    insertAtLast(s[i]);
Node*start =head;
if(isPalindrome(start))
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;
return 0;
}
