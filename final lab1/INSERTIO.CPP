#include<iostream.h>
#include<conio.h>
void main()
{clrscr();int a[20],i,j,k,h,n;
cout<<"enter total no.";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
cin>>a[i];
h=n+1;
for(i=1;i<n;i++)
{k=a[i];
for(j=i-1;j>=0;j--)
{if(a[j]>k)
{a[j+1]=a[j];
h=j;}}
if(h!=n+1)
a[h]=k;}
cout<<"sorted elements are";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}