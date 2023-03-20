#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*nxt;
    node*prv;
};
class DoublyLinkedList{
public:
    node*head;
    int sz;
    DoublyLinkedList()   //TM=O(1)
    {
        head=NULL;
        sz=0;
    }
    //Create a newnode with the given data and return it;             //TM:::O(1)
    node*CreateNewNode(int data)
    {
        node*newnode=new node;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //Inserts a node with given data  at head   O(1)
void InsertAtHead(int data)
{
    sz++;
  node*newnode =CreateNewNode(data);
  if(head==NULL)
  {                                       //There is simple operation  .
      head=newnode;
      return;
  }
  node*a =head;
  newnode->nxt=a;
  a->prv=newnode;
  head=newnode;
}
//Inserts the given data at the given index   So Time complexity is O(n)

//Delete the given index;

void Traverse()   //print the linked list O(n);
//jeheto akta loop choltece abong shob element access korci tai TC=O(n)
{
    node*a=head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->nxt;
    }
    cout<<"\n";

}
int getsize()   //Only one element we return in the programme .So,Time Complexity O(1)
{
    return sz;
}
void Reverse()   //2 ta while loop cholce wrost case TC =O(2*n)  =O(n)
 {
     if(head ==NULL)
     {
         return;
     }
     node*a =head;
     int cur_index=0;
     while(cur_index!=sz-1)
     {
         a=a->nxt;
         cur_index++;
     }
     //last index is in a

     node*b=head;
     while(b!=NULL)
     {
         swap(b->nxt,b->prv);
         b=b->prv;    //Reverse a amader nxt node a jete hole privious  a jabo | karon amra olta dike jete jacii;

     head =a;
 }
 }
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(5);
    dl.InsertAtHead(4);
    dl.InsertAtHead(3);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);

    dl.Traverse();

dl.Reverse();
dl.Traverse();

    return 0;

}


