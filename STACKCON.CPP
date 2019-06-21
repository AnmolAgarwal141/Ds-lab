#include<iostream.h>
#include<conio.h>
#define maxsize 20
class stack
{
  private:
   int top;
   int a[maxsize];
  public:
   stack()
    { top=-1; }
   void push(int ele)
   {
    if(top==maxsize)
     cout<<"stack overflow";
    else
    {
     top++;
     a[top]=ele;
    }
   }
   int pop()
   {
    if(top==-1)
     {cout<<"stack is empty";
     return 0;
     }
    else
     {return(a[top--]);}
    }
};
void main()
{ stack s;
  int n,l=0,b[30],i,k;
  cout<<"enter a decimal no";
  cin>>n;
  k=n;
  while(n!=0)
  {s.push(n%2);
   n=n/2;
   l++;
   }
   cout<<"binary form of "<<k<<" is: " ;
  for(i=0;i<l;i++)
  b[i]=s.pop();
  for(i=0;i<l;i++)
  cout<<b[i];
  getch();
}