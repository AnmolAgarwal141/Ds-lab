#include<iostream.h>
#include<conio.h>
class t{
private:
int row, column, value;
int a[10];
int b[10];
public:
void read(t* );
void transpose(t* , t*);
void display(t*);
};
void t::read(t a[])
{ int m,n,ele,k,i,j;
  cout<<"enter no. of rows and columns";
  cin>>m>>n;
  a[0].row=m;
  a[0].column=n;
  k=1;
  cout<<"enter elements";
  for(i=0;i<m;i++)
   { for(j=0;j<n;j++)
       { cin>>ele;
	 if(ele!=0)
	  { a[k].row=i;
	    a[k].column=j;
	    a[k].value=ele;
	    k++;
	  }
       }
    }
  a[0].value=k-1;
}
void t::transpose(t a[],t b[])
{ int i ,j;
b[0].value=a[0].value;
b[0].row=a[0].column;
b[0].column=a[0].row;
if(a[0].value>0)
{   int k=1;
   for(i=1;i<=a[0].column;i++)
    { for(j=1;j<=a[0].value;j++)
	 { if(a[j].column==i-1)
	     { b[k].value=a[j].value;
	       b[k].column=a[j].row;
	       b[k].row=a[j].column;
	       k++;
	     }
	   }
    }
}
}
void t:: display(t b[])
{ int i,n=b[0].value;
   cout<<"row\tcolumn\tvalue\n";
  for(i=0;i<=n;i++)
  {
   cout<< b[i].row<<"\t"<<b[i].column<<"\t"<<b[i].value;
   cout<<"\n";
  }
}
void main()
{
 clrscr();
 t f[20];
 t q[20];
 t d;
 d.read(f);
 d.transpose(f,q);
 d.display(q);
 getch();
}