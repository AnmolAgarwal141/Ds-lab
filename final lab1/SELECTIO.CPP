#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[20],min,j,i,b,n;
cout<<"enter total no.";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{min=i;
for(j=i+1;j<n;j++)
{min=i;if(a[min] >a[j])
{      min=j;
b=a[min];
a[min]=a[i];
a[i]=b;    }}
}
cout<<"sorted elements are";
for(i=0;i<n;i++)
cout<<a[i];
getch();
}