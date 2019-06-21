#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int ch,i,y=0,j,w,m,n,x=0,k=0,p,q,d=0;
	char a[100],b[100],c[100];
	char ch1;
	do
	{
	cout<<"1.Length 2. Concatenation 3. Compare 4. Insert substring 5. Delete substring\nEnter choice";
	cin>>ch;
	switch(ch){
	case 1:
		cout<<"Enter a string\t";
		gets(a);
		for(i=0;a[i]!='\0';i++)
		x++;
		cout<<"Length of the String="<<x;
		break;
	case 2:
		x=0;
		cout<<"Enter a String\n";
		gets(a);
		for(i=0;a[i]!='\0';i++)
		x++;
		cout<<"Enter a String\n";
		gets(b);
		for(i=0;b[i]!='\0';i++)
		y++;
		for(i=0;i<x;i++)
		c[i]=a[i];
		for(int j=0;i<(x+y);i++,j++)
		c[i]=b[j];
		cout<<"Concatenated String:";
		puts(c);
		break;
	case 3:
		x=0;
		y=0;
		cout<<"Enter a string:";
		gets(a);
		cout<<"Enter a string:";
		gets(b);
		for(i=0;a[i]!='\0';i++)
		x++;
		for(j=0;b[j]!='\0';j++)
		y++;
		if(x!=y)
		{
			cout<<"Strings are not equal";
		}
		else
		      cout<<"Strings are equal";
		break;
	case 4:
	       x=0;y=0;k=0;d=0;
		cout<<"Enter a String:";
		gets(a);
		cout<<"Enter the substring:";
		gets(b);
		cout<<"Enter position of substring:";
		cin>>p;
		for(i=0;a[i]!='\0';i++)x++;
		for(j=0;b[j]!='\0';j++)y++;
	      for(i=0;i<x+y;i++)
	      {if(i>=p-1&&i<p-1+y)
	      {
	      c[i]=b[k];
	      k++;
	      }
	      else
	       {
	       c[i]=a[d];
	       d++;
	       }
	      }
		cout<<"New String:";
		for(i=0;i<x+y;i++)
		cout<<c[i];
		break;
	case 5:
		cout<<"Enter a String:";
		gets(a);
		cout<<"Enter substring to be deleted:";
		gets(b);
		for(x=0;a[x]!='\0';x++);
		for(y=0;b[y]!='\0';y++);
		for(q=0;a[q]!='\0';q++)
		{
			if(a[q]==b[0])
			{
				p=0;
				for(m=q,n=0;n<y;m++,n++)
				{
					if(a[m]==b[n])
					{
						p++;
					}
				}
				if(p==y)
				{
					for(int e=q;a[e]!='\0';e++)
					{
						a[e]=a[e+y];
					}
				}
			}
		}
		cout<<"New String:";
		puts(a);
		break;
	default: cout<<"Invalid choice";
	}
	cout<<"\n want to do another(y/n)";
	cin>>ch1;
	}while(ch1!='n');
	getch();
	return 0;
}