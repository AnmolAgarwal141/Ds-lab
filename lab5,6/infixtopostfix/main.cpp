#include <iostream>
#include<stdio.h>
#define max 20
using namespace std;
class stack
{   public:
    char str[max];
    int top;
    stack()
    {

        top=-1;
    }
    void push(char ele)
    {
        if(top!=max-1)
        {
            str[++top]=ele;
        }
    }
    char pop()
    {
        if(top==-1)
        {
            return -1;
        }
        return str[top--];
    }
    int preference(char a)
    {
        if(a=='^')
            return 3;
        else if (a=='*'||a=='/')
            return 2;
        else if(a=='+'||a=='-')
            return 1;
        else if(a=='(')
           return 0;
        else
            return -1;
    }
};
int main()
{
    stack s;
    s.push('(');
    char arr[20],x;
    int l=0;
    cout<<"enter infix expression";
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
        l++;
    for(int i=0;i<l;i++)
    {
        if(isalnum(arr[i]))
        {
            cout<<arr[i];
        }
        else if(arr[i]=='(')
        {
            s.push('(');
        }
        else if(arr[i]==')')
        {
            while((x=s.pop())!='(')

                          cout<<x;
        }
        else
        {
            while(s.preference(s.str[s.top])>=s.preference(arr[i]))
                  {
                      cout<<s.pop();
                  }
                  s.push(arr[i]);

        }

    }
    while(s.top!=-1)
    {
        char q=s.pop();
        if(q!='(')
           cout<<q;
    }
    return 0;
}
