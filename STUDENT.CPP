#include<iostream.h>
#include<conio.h>
class student{
private:
char name[25];
int rollno;
char grade;
public:
void read(student s[],int n)
{for(int i=0;i<n;i++)
{cout<<"enter name";
cin.get(s[i].name,24);
cout<<"enter roll no";
cin>>s[i].rollno;
cout<<"enter grade";
cin>>s[i].grade;
}}
void display(student s[],int n)
{for(int i=0;i<n;i++)
{cout<<"name is"<<s[i].name;
cout<<"roll no. is"<<s[i].rollno;
cout<<"grade is"<<s[i].grade;
}}
void sort(student s[],int n)
{for(int i=0;i<n-1;i++)
{for(intj=0;j<n-1-i;j++)
if(s[j].rollno>s[j+1].rollno)
{int temp=s[j].rollno;
s[j].rollno=s[j+1].rollno;
s[j+1].rollno=temp;
char flag=s[j].name;
s[j].name=s[j+1].name;
s[j+1].name=flag;
char q=s[j].grade;
s[j].grade=s[j+1].grade;
s[j+1].grade=q;
}}}
}
void main()
{clrscr;
student s[30];
cout<<"enter no of students";
cin>>n;
read(student s[],n);
sort(student s[],n);
display(student s[],n);
getch();
}