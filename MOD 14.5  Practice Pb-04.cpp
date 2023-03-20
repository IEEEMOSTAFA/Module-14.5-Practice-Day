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
//this function is used to chack a element is present in the list;
void chack(int el)
{
    if(sz==0)
    {
        cout<<"empty "<<"\n";
        return;
    }
    node*a=head;
    for(int i=0;i<sz-1;i++)
    {
        if(a->data==el)
        {
            cout<<"true"<<"\n";
            return;
        }
        a=a->nxt;
    }
    cout<<"false"<<"\n";
}




 void index_i(int i)
 {
     if(sz==0) return;
     node*a =head;
     for(int j=0;j<i;j++)
     {
         a=a->nxt;
     }
     cout<<a->data<<endl;
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

     cout<<dl.getsize()<<"\n ";
    dl.index_i(2);








    dl.chack(6);
    return 0;

}



