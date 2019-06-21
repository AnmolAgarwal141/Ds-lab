#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Student{
	int rn;
	char name[50];
	char g;
	public:
		void read(Student*,int);
		void sor(Student*,int,Student);
		void Display(Student*,int);
};
void Student::read(Student *a,int n){
	cout<<"Enter roll number,name and grade\n";
	for(int i=0;i<n;i++)
		cin>>a[i].rn>>a[i].name>>a[i].g;}
void Student::sor(Student *a,int n,Student t){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j].rn>a[j+1].rn){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void Student::Display(Student *a,int n){
	for(int i=0;i<n;i++)
		cout<<a[i].rn<<"\t"<<a[i].name<<"\t"<<a[i].g<<'\n';
}
int main(){
	Student a[30],t;
	int n;
	cout<<"Number of students:";
	cin>>n;
	t.read(a,n);
	t.sor(a,n,t);
	t.Display(a,n);
	getch();
	return 0;
}