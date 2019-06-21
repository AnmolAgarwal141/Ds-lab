#include <iostream>

using namespace std;

class list
{
	int data;
	list *next;
	list *prev;
 public:
	list* create(list *);
	void traverse(list*);
	list* concatenate(list *,list*);
};

list* list::concatenate(list *f1,list *f2)
{
	if(f1==NULL)
	{
		f1=f2;
	}
	else if(f2==NULL)
	{}
	else
	{  list *curr;
		for(curr=f1;curr->next!=NULL;curr=curr->next);
		curr->next=f2;
		f2->prev=curr;
	}
	return f1;
	//traverse(f1);
}
list* list::create(list *first)
{
	list *temp;
	temp=new list;
	cout<<"\nent er the data:";
	cin>>temp->data;
	temp->prev=NULL;
	temp->next=NULL;
	if(first==NULL)
		first=temp;
	else
	{ list *curr;
		for(curr=first;curr->next!=NULL;curr=curr->next);
		curr->next=temp;
		temp->prev=curr;
	}
	traverse(first);
	return(first);
}
void list::traverse(list *first)
{
	if(first==NULL)
		cout<<"\nlist is empty";
	else
	{
		cout<<"\nthe list is:\n";
		for(list *curr=first;curr!=NULL;curr=curr->next)
			cout<<curr->data<<"\t";
	}
}
int main()
{
    list *first1=NULL,*first2=NULL;
	list l,k;
	list *f1,*f2;
	int ch,n;
	do
	{
		cout<<"\n1 create for 1st\t2 create for 2nd \t 3.concat\t\t 4.traverse for 1st\t 5. traverse for 2nd \t0 to exit\n enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:first1=l.create(first1);break;
			case 2:first2=l.create(first2);break;
			case 3:f1=first1;f2=first2;first1=k.concatenate(f1,f2);break;
			case 4:l.traverse(first1);break;
			case 5:l.traverse(first2);break;
			case 0:break;
			default:cout<<"\ninvalid input";break;
		}
	}while(ch!=0);
	return 0;
}
