#include<iostream.h>
#include<conio.h>
class time
{
int h,m,s;
public:
void Read();
void Display();
time Add(time,time);
time Sub(time,time);
};
void time::Read(){
cout<<"Enter time in hours,minutes,seconds ";
cin>>h>>m>>s;}
void time::Display(){
cout<<endl<<h<<"::"<<m<<"::"<<s;}
time time::Add(time a,time b){
time c;
c.s=a.s+b.s;
c.m=a.m+b.m;
c.h=a.h+ b.h;
if(c.s>59){
c.s=c.s%60;
c.m++;}
if(c.m>59){
c.m%=60;
c.h++;}
return c;
}
time time::Sub(time a,time b){
time c;
c.s=a.s-b.s;
c.m=a.m-b.m;
c.h=a.h-b.h;
if(c.s<0){
c.s=c.s+60;
c.m--;}
if(c.m<0){
c.m+=60;
c.h--;}
return c;
}
int main()
{
time a,b,c,d;
a.Read();
b.Read();
a.Display();
b.Display();
cout<<"\nAddition  ";
c=b.Add(a,b);
c.Display();
cout<<"\nDifference ";
d=b.Sub(a,b);
d.Display();
getch();
return 0;
}

