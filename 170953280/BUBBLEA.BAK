#include<iostream.h>
int main()
{int a[20],i,j,b,n;
cout<<"enter total no.";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
{
cin>>a[i];}
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
{if(a[j]>a[j+1])
{b=a[j];
a[j]=a[j+1];
a[j+1]=b;
}}}
cout<<"sorted array is";
for(i=0;i<n;i++)
{cout<<a[i];}
return 0;
}