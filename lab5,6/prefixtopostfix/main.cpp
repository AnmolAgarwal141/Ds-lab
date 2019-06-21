#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class PreToPost{
char s[50][50];
int top;
public:
PreToPost(){
top=-1;}
void push(char *);
char* pop();
void Convert(char*);
};
void PreToPost::push(char a[]){
strcpy(s[++top],a);
}
char* PreToPost::pop(){
if(top!=-1)
return s[top--];
else return NULL;
}
void PreToPost::Convert(char a[]){
for(int x=strlen(a)-1;x>=0;x--){
    char c=a[x];
    if(c=='+'||c=='-'||c=='/'||c=='*'){
        char i[50];
        strcpy(i,pop());
        strcat(i,pop());
        char q[2];
        q[0]=c;
        q[1]='\0';
        strcat(i,q);
        push(i);
    }
    else{
	    char q[2];
    q[0]=c;q[1]='\0';
        push(q);
}}
puts(pop());
}
int main(){
    PreToPost obj;
    char prefix[50];
    cout<<"Enter prefix form:";
    gets(prefix);
    obj.Convert(prefix);
    getch();
    return 0;}
