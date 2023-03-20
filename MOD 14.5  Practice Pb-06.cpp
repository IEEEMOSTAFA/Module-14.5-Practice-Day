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
void Insert(int index,int data)
{
    if(index>sz)
    {
        return;
    }
    if(index==0)
    {
        InsertAtHead(data);
        return;
    }
    node*a =head;
    int cur_index =0;
    while(cur_index !=index-1)
    {
        a=a->nxt;
        cur_index++;
    }
    //a =cur_index-1;
    node*newnode=CreateNewNode(data);
    newnode->nxt=a->nxt;
    newnode->prv=a;
    node*b=a->nxt;
    b->prv = newnode;
    a->nxt = newnode;
    sz++;
}
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

  dl.Insert(1,0);

       dl.Traverse();

    return 0;

}


