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
            temp=NULL;
        }
        else
        {
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }

    }
    void disp()
    {

        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {

            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insertbefore(int n, int elt)
    {
        node  *cur, *temp=new node;

        cur=head;
        while(cur->data!=n)
        {

            cur=cur->next;
        }
        temp->data=elt;
        cur->prev->next=temp;
        temp->prev=cur->prev;
        cur->prev=temp;
        temp->next=cur;
    }
    void insertafter(int n, int elt)
    {
        node *pos, *cur, *temp=new node;
        pos=NULL;
        cur=head;
        while(cur->data!=n)
        {

            cur=cur->next;
            pos=cur->next;
        }
        temp->data=elt;
        cur->next=temp;
        temp->prev=cur;
        pos->prev=temp;
        temp->next=pos;
    }
    void del(int elt)
    {
        node *pre, *cur, *pos, *temp=new node;
        pre=NULL;
        pos=NULL;
        cur=head;
        while(cur->data!=elt)
        {
            pre=cur;
            cur=cur->next;
            pos=cur->next;
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
    void rev()
    {
        node *temp,*current=new node;
        current=head;
        while (current !=  NULL)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if(temp != NULL )
        {
            tail=head;
            head= temp->prev;
        }
    }
  /*  void clear()
    {
        head=tail=NULL;
    }
    void concat(dlist A)
    {
        node *y=new node;

        y=A.head;
        tail->next=y;
        y->prev=tail;
        tail=A.tail;

    }
}/*/};


int main()
{


    dlist l;
    int indicator=1;
        cout<<"How many elements do you want to enter?";
        int n,elt;
        cin>>n;
        cout<<"Enter elements";
        for(int i=0;i<n;i++)
        {
            cin>>elt;
            l.insert(elt);
        }
        cout<<"\nCurrent linked list\n";
        l.disp();
        cout<<"\n---------------Menu---------------\nPress 1 for inserting before an element\nPress 2 for inserting after an element\nPress 3 for deleting an element\nPress 4 for reversing the list\n 0 to exit\n";
        int menu;
        do
        {
            cout<<"enter choice";
        cin>>menu;
        switch(menu)
        {
            case 1:
            {
                cout<<"\nBefore which element do you want to insert another element? ";
                cin>>n;
                cout<<"\nEnter element to enter ";
                cin>>elt;
                l.insertbefore(n,elt);
                cout<<"\nCurrent linked list\n";
                l.disp();
                break;
            }
            case 2:
                {
                    cout<<"\nAfter which element do you want to insert another element? ";
                    cin>>n;
                    cout<<"\nEnter element to enter ";
                    cin>>elt;
                    l.insertafter(n,elt);
                    cout<<"\nCurrent linked list\n";
                    l.disp();
                    break;
                }
            case 3:
                {
                    cout<<"\nWhich element do you want to delete? ";
                    cin>>elt;
                    l.del(elt);
                    cout<<"\nCurrent linked list\n";
                    l.disp();
                    break;
                }
            case 4:
                {
                    cout<<"\nReversing the list";
                    l.rev();
                    cout<<"\nCurrent linked list\n";
                    l.disp();
                    break;
                }
            case 0:break;
        }
        }while(menu!=0);

return 0;
    }



