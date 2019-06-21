#include <iostream>

using namespace std;
class list
{
public:
    int data;
	list *link;
	void ins_after();
	void ins_bef();
	void delSpecific();
	void sort();
	void traverse();
	void reverse();
    void delete_alt();
    void ins_sort();
    void ins_n();
};
list *first=NULL;
void list::traverse()
{
	if(first==NULL)
		cout<<"\nlist is empty";
	else
	{
		cout<<"\nthe list is:\n";
		for(list *curr=first;curr!=NULL;curr=curr->link)
			cout<<curr->data<<"\t";
	}
}
void list::ins_bef()
{   int x;
    cout<<"enter element before whichh to add";
    cin>>x;
    list *temp=new list;
    cout<<"enter element";
    cin>>temp->data;
    temp->link=NULL;
    if(first==NULL)
        cout<<"empty list";
    else
    {
        list *cur,*t;int flag=0;
        for(cur=first;cur!=NULL;cur=cur->link)
        {
            if(cur->data==x)
            { if(cur==first)
                {temp->link=cur;
                first=temp;}
               else{ t->link=temp;
                temp->link=cur;}
                flag=1;
                break;
            }
            t=cur;
        }
        if(flag==0)
            cout<<"element not there";
        else
            traverse();

    }
}
void list::ins_after()
{   int x;
    cout<<"enter element before whichh to add";
    cin>>x;
    list *temp=new list;
    cout<<"enter element";
    cin>>temp->data;
    temp->link=NULL;
    if(first==NULL)
        cout<<"empty list";
    else
    {
        list *cur;int flag=0;
        for(cur=first;cur!=NULL;cur=cur->link)
        {
            if(cur->data==x)
            {
                temp->link=cur->link;
                cur->link=temp;
                flag=1;
                break;
            }

        }
        if(flag==0)
            cout<<"element not there";
        else
            traverse();

    }
}
void list::delSpecific()
{
	int x;
	cout<<"\nenter the element to be deleted:";
	cin>>x;

	if(first==NULL)
		cout<<"\nlist is empty";
	else if(first->data==x)
		{
			list *temp=first;
			first=first->link;
			delete temp;
		}
	else
		{       list *prev;
			int flag=0;
			for(list *curr=first;curr!=NULL;curr=curr->link)
			{
				if(curr->data==x)
				{
					prev->link=curr->link;
					delete curr;
					flag=1;
					break;
				}
				prev=curr;
			}
			if(flag==0)	cout<<"\nnode not found";
		}
		traverse();
}
void list::sort()
{
	for(list *i=first;i->link!=NULL;i=i->link)
	{
		for(list *j=i->link;j!=NULL;j=j->link)
		{
			if(i->data>j->data)
			{
				int d=i->data;
				i->data=j->data;
				j->data=d;
			}
		}
	}
	cout<<"\nthe sorted list is";
	traverse();
}

 void list::reverse()
 {
	list *curr,*prev;
	curr=prev=NULL;
	while(first!=NULL)
	{
		prev=curr;
		curr=first;
		first=first->link;
		curr->link=prev;
	}
	first=curr;
 }
 void list::delete_alt()
  {list *cur=first;
  list *t=first->link;
     while(cur!=NULL&&t!=NULL)
     {
        cur->link=t->link;
        delete(t);
        cur=cur->link;
        if(cur!=NULL)
            t=cur->link;
     }
     traverse();
 }
 void list::ins_sort()
{
    list *temp=new list;
    cout<<"enter element";
    cin>>temp->data;
    temp->link=NULL;
    if(first==NULL)
        cout<<"empty list";
    else
    {
        list *cur,*t;int flag=0;
        for(cur=first;cur!=NULL;cur=cur->link)
        {   if(cur==first)
             {
                 if(temp->data<=cur->data)
                 {
                     temp->link=cur;
                     first=temp;
                     break;
                 }
             }
             if(cur->link==NULL)
             {
                 if(temp->data>=cur->data)
                 {
                     cur->link=temp;
                     break;
                 }
             }

            if(temp->data<=cur->data&&temp->data>t->data)
            {
                t->link=temp;
                temp->link=cur;
            }
            t=cur;

        }
            traverse();

    }

}
void list::ins_n()
{

	list *temp=new list;
	cout<<" Enter data: ";
	cin>>temp->data;
	temp->link=NULL;

	if(first==NULL)	first=temp;
	else
	{ list *cur=first;
		while(cur->link!=NULL)
            cur=cur->link;
		cur->link=temp;
	}
	traverse();
}
int main()
{

	list l;
	int ch,n;
	do
	{
		cout<<"\n1 insert before\t2 insert after\t\t3. delete specific\t4.traverse\t5. sort 6. reverse \t 7.delete alternate node 8.insret a element in sorted list \t 9. to normal insert.\t 0 to exit\n enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:l.ins_bef();break;
			case 2:l.ins_after();break;

			case 3:l.delSpecific();break;
			case 4:l.traverse();break;
			case 5:l.sort();break;

			case 6:l.reverse();break;
			case 7:l.delete_alt(); break;
			case 8:l.ins_sort();break;
			case 9:l.ins_n();break;
			case 0:break;
			default:cout<<"\ninvalid input";break;
		}
	}while(ch!=0);
	return 0;
}
