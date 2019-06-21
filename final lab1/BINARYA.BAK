#include<iostream.h>
int main()
{int i,m,f,l,a[20],n,b,k;
cout<<"enter total no.";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter no. to be searched";
cin>>b;
f=0;
l=n-1;
while(f<=l)
{m=(f+l)/2;
if(a[m]<b)
{f=m+1;}
else if(a[m]>b)
{l=m-1;}
else
{cout<<"no. is at "<<m+1<<" th position";
k=m+1;
break;}
}
if(k==0)
cout<<"element is not there";
return 0;}