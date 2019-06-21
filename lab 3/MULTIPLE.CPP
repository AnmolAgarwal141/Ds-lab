#include<iostream.h>
#include<conio.h>
#define max 20
class stack{
int t[10],b[10],a[20],k,i,n;
public:
stack()
{for(i=0;i<n;i++)
{t[i]=b[i]=(max*i)/n-1;
}
b[i]=max-1;}
void push(int ele,int x)
{if(t[x-1]==b[x])
{cout<<"stack overflow";
return;}
else
{t[x-1]++;
a[t[x-1]]=ele;}
}
int pop(int x)
{if(t[x-1]!=b[x-1])
return(a[t[x-1]--]);
}
};
void main()
{char ch;
stack s;
int i,m,k,n,x,d;
cout<<"enter no. of stacks";
cin>>n;
do
{cout<<"enter which stack";
cin>>x;
cout<<"enter elements";
for(i=0;i<m/n;i++)
{cin>>k;
s.push(k,x);}
cout<<"want to add element to other stack(y/n)";
cin>>ch;
}while(ch!='n');
do
{cout<<"enter which stack";
cin>>x;
cout<<"elements in this stack are";
for(i=0;i<m/n;i++)
{
d=s.pop(x);
cout<<d;}

cout<<"want to add element to other stack(y/n)";
cin>>ch;
}while(ch!='n');
getch();
}