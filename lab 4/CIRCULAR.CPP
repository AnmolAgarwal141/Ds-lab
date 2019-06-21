#include<iostream.h>
#include<conio.h>
#define size 5
class queue
{ int rear,front;
  int a[size];
 public:
 queue()
 {rear=front=-1;}
 void insert(int);
 int delqueue();
 void display();
 };
 void queue::insert(int ele)
 { if((front==0&&rear==size-1)||(rear==front-1))
   {cout<<"stack is full";}
   else if(front==-1)
   {front=rear=0;
   a[rear]=ele;}
   else if(rear==size-1&&front!=0)
   {rear=0;
   a[rear]=ele;}
   else
   {rear++;
   a[rear]=ele;}
  }
  int queue::delqueue()
 {
 if(front==-1)
 {cout<<"queue is empty";
 return NULL;
 }
 int data=a[front];
 a[front]=-1;
 if(front==rear)
 { front=-1;
 rear=-1;
 }
 else if(front==size-1)
 front=0;
 else
 front++;
 return data;
 }
 void queue::display()
 {
 if(front==-1)
 {cout<<"queue is empty";
 return;
 }
 cout<<"elements in queue are:";
 if(rear>=front)
 {for(int i=front;i<=rear;i++)
 cout<<a[i];
 }
 else
 { for(int i=front;i<size;i++)
 cout<<a[i];
 for(i=0;i<=rear;i++)
 cout<<a[i];
 }
 }
 int main()
 {queue q;int b,option,n;
  do{
  cout<<"\nenter 1 to add 2 to delete 3 to display and 0 to exit; \n";
  cin>>option;
  switch(option)
  {
  case 1: cout<<"enter element to insert";
  cin>>n;
  q.insert(n);
  break;
  case 2:b=q.delqueue();
  cout<<"deleted element is"<<b;
  break;
  case 3:q.display();
  break;
  case 0:break;
  default:cout<<"enter valid input" ;
  }
  }while(option!=0);
   getch();
  return 0;
 }