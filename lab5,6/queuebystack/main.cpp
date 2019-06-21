#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;
class QWithStack{
int top[2];
int s1[50],s2[50];
public:
QWithStack(){
top[0]=top[1]=-1;}
void push(int,int);
int pop(int);
void AddQ();
void DelQ();
void DisplayQ();
};
void QWithStack::push(int a,int t){
if(t==0)
s1[++top[t]]=a;
else
s2[++top[t]]=a;
}
int QWithStack::pop(int a){
if(a==0)
return s1[top[a]--];
else
return s2[top[a]--];
}
void QWithStack::AddQ(){
if(top[0]==49){
cout<<"Overflow";
return;}
int ele;
cout<<"Enter an element:";
cin>>ele;
push(ele,0);
}
void QWithStack::DelQ(){
if(top[0]==-1){
cout<<"Underflow";
return;}
while(top[0]!=-1)
push(pop(0),1);
int c=pop(1);
while(top[1]!=-1)
push(pop(1),0);
}
void QWithStack::DisplayQ(){
for(int x=0;x<=top[0];x++)
cout<<s1[x]<<" ";}
int main(){
QWithStack q;
int c;
for(;;){
cout<<"\nEnter 1 to add,2 to delete,3 to display the queue,4 to exit:";
cin>>c;
switch(c){
case 1:q.AddQ();
       break;
case 2:q.DelQ();
       break;
case 3:q.DisplayQ();
       break;
case 4:exit(0);
default:cout<<"Invalid Choice";
}}
getch();
return 0;
}
