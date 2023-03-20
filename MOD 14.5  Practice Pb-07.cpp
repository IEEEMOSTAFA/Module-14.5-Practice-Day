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
void Delete(int index)    //Ekane akta while loop choltace so wrost case a Time Complexity O(n) hobe............
{
    if(index>=sz)
    {
        cout<<index<<"Doesn't Exit.\n ";
        return;
    }
    node*a=head;
    int cur_index=0;
    while(cur_index!=index)
    {
        a=a->nxt;
        cur_index++;
    }
    node*b=a->prv;
    node*c=a->nxt;
    if(b!=NULL)
    {
     b->nxt=c;
    }
    if(c!=NULL)
    {
     c->prv=b;

    }
   delete a;
   if(index==0)
   {
       head =c;
   }
   sz--;
}
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
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);

    dl.Traverse();

dl.Delete(2);
dl.Traverse();
    return 0;

}


