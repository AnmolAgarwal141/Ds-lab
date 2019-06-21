#include<iostream>
using namespace std;



class node
{
   public: int data;
    struct node *next;
};


class stack
{
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push();
    void pop();
    void show();
};

void stack::push()
{
    int value;
    node *ptr;

    cout<<"Enter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;


}


void stack::pop()
{
     node *temp;
    if(top==NULL)
    {
        cout<<"\nThe stack is empty!!!";
    }
    temp=top;
    top=top->next;
    cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
    delete temp;
}


void stack::show()
{
     node *ptr1=top;
    cout<<"\nThe stack is\n";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    cout<<"NULL\n";
}



class queue
{
     node *front;
     node *rear;
    public:
    queue()
    {
        front=rear=NULL;
    }
    void push();
    void pop();
    void show();
};

void queue::push()
{
    int value;
     node *ptr;

    cout<<"Enter element: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(front==NULL)
    {
        front =rear=ptr;
        rear->next=NULL;
    }
        if(front!=NULL)
        {rear->next=ptr;
        rear=ptr;
        rear->next=NULL;}
}


void queue::pop()
{
     node *temp;
    if(front==NULL)
    {
        cout<<"\nThe queue is empty!!!";
    }
    else{
            temp=front;
    cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
    front=front->next;
    delete temp;}
}


void queue::show()
{
     node *ptr1=front;
    cout<<"\nThe queue is\n";
    while(ptr1!=rear->next)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    cout<<"NULL\n";
}




int main()
{
    stack s;
    int choice,indic=1;

    while(indic==1)
    {
        cout<<"\n------------------------------STACK USING LINKED LIST------------------------------";

        cout<<"1 : PUSH\n2 : POP\n3 : DISPLAY STACK\n";

        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;

            default:
                cout<<"\nPlease enter correct choice(1-3)";
                break;
        }
    cout<<"\n1 to continue,0 to exit";
    cin>>indic;
    }
     queue s1;
     indic=1;

    while(indic==1)
    {
        cout<<"\n------------------------------QUEUE USING LINKED LIST------------------------------";

        cout<<"1 : INSEET\n2 : DELETE\n3 : DISPLAY \n";

        cin>>choice;
        switch(choice)
        {
            case 1:
                s1.push();
                break;
            case 2:
                s1.pop();
                break;
            case 3:
                s1.show();
                break;

            default:
                cout<<"\nPlease enter correct choice(1-3)";
                break;
        }
    cout<<"\n1 to continue,0 to exit";
    cin>>indic;
    }

    return 0;}
