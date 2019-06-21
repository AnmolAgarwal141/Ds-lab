#include<iostream.h>
#include<conio.h>
void main()
{clrscr();int a[20],i,j,k,n;
cout<<"enter total no.";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
cin>>a[i];
for(i=1;i<n;i++)
{k=a[i];
j=i-1;
for(j=i-1;j>=0;j--)
{if(a[j]<k)
{break;}
a[j+1]=a[j];
}
a[j+1]=k;}
cout<<"sorted elements are";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}