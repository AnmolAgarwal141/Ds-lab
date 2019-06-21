#include<iostream>
#include<ctype.h>
enum Boolean1{ FALSE, TRUE};
using namespace std;


class stack
{	int top;
	int a[20];
	int maxsize;
public: stack()
	{ maxsize=10;top=-1;}

	Boolean1 Isfull()
	{
		if(top==maxsize-1)
			return TRUE;
		return FALSE;
	}

	Boolean1 Isempty()

	{	if(top==-1)
			return TRUE;
		return FALSE;
	}
	void push(char x);
	int  pop();
void display();
	int topele();
};
void stack::push(char x)
{       if(Isfull())
		cout<<"Stack is full \n";
	else
		a[++top]=x;
}
int stack::topele()
{	return(a[top]);
}
int  stack::pop()
{
	if(Isempty())
		return(-9999);
	else
		   return(a[top--]);

}
void  stack::display()
{        if(Isempty())
		cout<<"Stack is empty";
	else
	for(int i=top;i>-1;i--)
cout<<a[i];
}
// returns the value when a specific operator
// operates on two operands
int eval(int op1, int op2, char operate) {
   switch (operate) {
      case '*': return op2 * op1;
      case '/': return op2 / op1;
      case '+': return op2 + op1;
      case '-': return op2 - op1;
      default : return 0;
   }
}

int evalPostfix(char postfix[], int size) {
   stack s;
   int i = 0;
   char ch;
   int val;
   while (i < size) {
      ch = postfix[i];
      if (isdigit(ch)) {
         s.push(ch-'0');
      }
      else {
         int op1 = s.topele();
         int t1= s.pop();
         int op2 = s.topele();
         int t2 = s.pop();
         val = eval(op1, op2, ch);
         s.push(val);
      }
      i++;
   }
   return val;
   }

int main() {

   char postfix[30];int size=0;
   cin>>postfix;
for(int i=0;postfix[i]!='\0';i++)
    size++;
   int val = evalPostfix(postfix, size);
   cout<<"\nExpression evaluates to "<<val;

   cout<<endl;
   return 0;
}




