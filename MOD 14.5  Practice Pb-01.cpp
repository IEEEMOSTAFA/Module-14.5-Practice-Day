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

  dl.InsertAtHead(0);

       dl.Traverse();


    return 0;

}


