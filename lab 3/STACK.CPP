#include<iostream.h>
#include<conio.h>
#define maxsize 20
class stack
{
 private:
   char str[maxsize];
   int top;
 public:
   stack()
    {top=-1;}
  void push(char ele)
   {
   if(top==maxsize)
    {cout<<"stack overflow";}
  else
   {top++;
   str[top]=ele;}
   }
 char pop()
  {
   if(top==-1)
    {cout<<"stack underflow";
    return ' ' ;}
   else
    return(str[top--]);
  }
};
void main()
{clrscr;
stack s;
char str1[20],j;
int l=0,i,flag=0;
cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l++;}
for(i=0;i<l;i++)
{s.push(str1[i]);}
for(i=0;i<l/2;i++)
{j=s.pop();
if(str1[i]!=j)
{flag=1;
cout<<"string is not palindrome";
break;}
}
if(flag==0)
cout<<"string is palindrome";
getch();
}



