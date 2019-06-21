#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char str1[20],str2[30],str3[10],input;
int l1=0,i,l2=0,j,k,option,a,b,c;
do{
cout<<"enter option";
cin>>option;
switch(option)
{case 1:{
cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l1++;}
cout<<"length of string is"<<l1<<'\n';
break;}
case 2:
{l1=0;
l2=0;
cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l1++;}
cout<<"enter another string";
cin.get(str2,20);
for(i=0;str2[i]!='\0';i++)
{l2++;}
k=0;
for(i=l1;i<l1+l2;i++)
{str1[i]=str2[k];
k++;}
for(k=0;k<l1+l2;k++)
cout<<str1[k];
break;}
case 3:
{l1=0;l2=0;
cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l1++;}
cout<<"enter another string";
cin.get(str2,20);
for(i=0;str2[i]!='\0';i++)
{l2++;}
if(l1>l2)
{
cout<<"length of string " ;
for(i=0;str1[i]!='\0';i++)
cout<<str1[i];
cout<<" is greater";}
else if(l2>l1)
{cout<<" length of string ";
for(i=0;str2[i]!='\0';i++)
cout<<str2[i];
cout<<" is greater ";}
else
{cout<<"length of string are same";}
 break;}
  case 4:
 {l1=0;
 cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l1++;}
k=0;
c=0;
cout<<"enter a sub string";
 cin.get(str3,10);
 for(i=0;str3[i]!='\0';i++)
 l2++;
 cout<<"enter position where to enter the sub string";
 cin>>a;
 while(str1[i]!='\0')
 {if(i>=a-1&&i<(a-1+l2))
 {str2[c]=str3[k];
 k++;
 c++; }
 else
 {str2[c]=str1[i];
 c++;}}
 cout<<"new string is";
 for(i=0;str2[i]!='\0';i++)
 cout<<str2[i];
 break;
 }
 case 5:
 { l1=0;
 cout<<"enter a string";
cin.get(str1,20);
for(i=0;str1[i]!='\0';i++)
{l1++;}
k=0;
c=0;
 cout<<"enter starting position to delete the sub string";
 cin>>a;
 cout<<"enter ending position to delete the sub string";
 cin>>b;
 while(str1[i]!='\0')
 {if(i>=a-1&&i<(a-1+b))
 {str3[c]=str1[i];
 c++; }
 else
 {str2[k]=str1[i];
 k;}}
 cout<<"new string is";
 for(i=0;str2[i]!='\0';i++)
 cout<<str2[i];
 break;
 }
 }
 cout<<"wnat to do another program? y/n";
 cin>>input;
 }while(input!='n');
getch();

}