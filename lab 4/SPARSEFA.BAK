#include<iostream.h>
#include<conio.h>
class spm
{int r,c,val;
int a[10],b[10];
public:
void read_sm(spm * ,int,int);
void fttranspose(spm *, spm * );
void display(spm *);
};
void spm::read_sm(spm a[],int m,int n)
{
int item;
a[0].r=m;
a[0].c=n;
int k=1;
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {cin>>item;
  if(item==0)
  continue;
  a[k].r=i;
  a[k].c=j;
  a[k].val=item;
  k++;
  }
}
a[0].val=k-1;
}
void spm::fttranspose(spm a[],spm b[])
{int i,j; int rowterms[10],startingpos[10];
b[0].r=a[0].c;
b[0].c=a[0].r;
b[0].val=a[0].val;
for(i=0;i<a[0].c;i++)
rowterms[i]=0;
for(j=1;j<=a[0].val;j++)
rowterms[a[j].c]++;
startingpos[0]=1;
for(i=1;i<a[0].c;i++)
startingpos[i]=startingpos[i-1]+rowterms[i-1];
for(i=1;i<=a[0].val;i++)
{j=startingpos[a[i].c]++;
b[j].r=a[i].c;
b[j].c=a[i].r;
b[j].val=a[i].val;
}
}
void main()
{int m,n;
cout<<"enter no. of rows";
cin>>m;
cout<<"entr no. of coloumns";
cin>>n;
spm a[20],b[20];
spm s;
s.read_sm(a,m,n);
s.fttranspose(a,b);
s.display(a);
s.display(b);
getch();
}
void spm::display(spm a[])
{for(int i=0;i<=a[0].val;i++)
{cout<<a[i].r<<""<<a[i].c<<""<<a[i].val;
 cout<<'\n';
 }
 }