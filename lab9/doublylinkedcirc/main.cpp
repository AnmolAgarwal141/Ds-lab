#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class node
{
    public: int data;
    node *prev, *next;
};

class dlist
{
    public:
    node *head, *tail=new node;
    dlist()
    {
        head=tail=NULL;
    }
    void insert(int elt)
    {
        node *temp=new node;
        temp->data=elt;
        temp->next=temp->prev=NULL;
        if(head==NULL)
        {
            head=tail=temp;
            temp->next=head;
            head->prev=temp;
        }
        else
        {  tail=head;
           while(tail->next!=head)
            tail=tail->next;
            tail->next=temp;
            temp->prev=tail;
           temp->next=head;
           head->prev=temp;

        }

    }
    void del(int elt)
    {
        node *pre, *cur, *pos, *temp=new node;
        pre=NULL;
        pos=NULL;
        cur=head;
        if(head->data==elt)
        {   if(head->next==head)
             {
                 head=NULL;
                 return;
             }
            node *t=head;
            head->next->prev=head->prev;
            head->prev->next=head->next;
            head=head->next;
                delete(t);
                return;
        }
        while(cur->data!=elt)
        {
            pre=cur;
            cur=cur->next;
            pos=cur->next;
        }
        if(cur->next==head)
        {
            cur->prev->next=head;
            head->prev=cur->prev;
            delete(cur);
            return;
        }
        //cout<<"HERE";
        pre->next=pos;
        //cout<<"HERE";
        if(pos!=NULL)
            pos->prev=pre;
        //cout<<"HERE";
        cur=NULL;
        //cout<<"HERE";
    }
    void disp()
    {

        node *temp=new node;
        temp=head;
        if(temp==NULL)
            return;
         cout<<temp->data<<" ";
         temp=temp->next;
        while(temp!=head)
        {

            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{


    dlist l;
int elt;
        cout<<"\n---------------Menu---------------\npress 1 to enter element\nPress 2 for deleting an element\n 0 to exit\n";
        int menu;
        do
        {
            cout<<"enter choice";
        cin>>menu;
        switch(menu)
        {
            case 1:{cout<<"Enter element";
                   cin>>elt;
                   l.insert(elt);
                    cout<<"\nCurrent linked list\n";
                    l.disp();
                    break;}
            case 2:
                {
                    cout<<"\nWhich element do you want to delete? ";
                    cin>>elt;
                    l.del(elt);
                    cout<<"\nCurrent linked list\n";
                    l.disp();
                    break;
                }


            case 0:break;
        }
        }while(menu!=0);

return 0;
    }
