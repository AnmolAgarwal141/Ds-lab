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
  int n,l=0,b[30],i,k,option,m,v;
  char ch;
  do{
   cout<<"enter a decimal no";
  cin>>n;
  cout<<"enter base in which to convert";
  cin>>option;
  k=n;
  switch(option)
  {
  case 2:
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
  break;
  case 8:
   n=k;
   l=0;
  while(n!=0)
  {s.push(n%8);
   n=n/8;
   l++;
   }
   cout<<"octet of "<<k<<" is: " ;
  for(i=0;i<l;i++)
  b[i]=s.pop();
  for(i=0;i<l;i++)
  cout<<b[i];
  break;
  case 16:
 n=k;
 l=0;
  while(n!=0)
  {m=n%16;
  if(m<10)
  s.push(m);
  else if(m==10)
  s.push('A');
  else if(m==11)
  s.push('B');
  else if(m==12)
  s.push('C');
  else if(m==13)
  s.push('D');
  else if(m==14)
  s.push('E');
  else
  s.push('F');
  n=n/16;
   l++;
   }
   cout<<"hexadecimal of "<<k<<" is: " ;
  for(i=0;i<l;i++)
 { v=s.pop();
  if(v<10)
  cout<<v;
  else
  cout<<char(v);
  }
  break;
  default:
  cout<<"enter a valid option";
  }
  cout<<'\n';
  cout<<"want to do other(y/n)";
  cin>>ch;
  }while(ch!='n');
  getch();
}