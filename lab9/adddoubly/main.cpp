#include <iostream>

using namespace std;
class node
{
	int exp;
	int coe;
	node *next;
	node *prev;

    public:
	node *create(node *,int,int);
	void display(node *);
	node *add(node *,node *);
};
node *first1=NULL,*first2=NULL,*first3=NULL,*first4=NULL;
node * node::create(node *f,int c,int e)
{
		node *temp;
	temp=new node;

	temp->coe=c;
	temp->exp=e;
	temp->next=temp->prev=NULL;

	if(f==NULL)
    {
        f=temp;
        f->next=f->prev=f;

    }
	else
	{
		   node *curr;
		   for(curr=f;curr->next!=f;curr=curr->next);
		   curr->next=temp;
		   temp->prev=curr;
		   temp->next=f;
		   f->prev=temp;
	}
	return(f);
 }
void node::display(node *f)
    {   node*curr=f;
        cout<<curr->coe<<"^"<<curr->exp;
	    if(curr->next!=f)
	      cout<<"+";

	for(curr=f->next;curr!=f;curr=curr->next)
	{
	    cout<<curr->coe<<"^"<<curr->exp;
	    if(curr->next!=f)
	      cout<<"+";
	}
	cout<<"\n";
    }
    node* node::add(node *f1,node *f2)
{
	node *res=NULL;
	node *a=f1,*b=f2;
    do
	{
		if (a->exp>b->exp)
		{
			res=create(res,a->coe,a->exp);
			a=a->next;
		}
		else if(a->exp==b->exp)
		{
			res=create(res,a->coe+b->coe,a->exp);
			a=a->next;
			b=b->next;
		}
		else //b->exp<a->exp
		{
			res=create(res,b->coe,b->exp);
			b=b->next;
		}
	}while((a!=f1)&&(b!=f2));
	while(a!=f1)
	{
		res=create(res,a->coe,a->exp);
		a=a->next;
	}
	while(b!=f2)
	{
		res=create(res,b->coe,b->exp);
		b=b->next;
	}
	return(res);
}
int main()
{
	int n,i,e,c;
	node a;

	cout<<"how many terms in 1 polynomial\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter coe: ";
		cin>>c;
		cout<<"Enter exp: ";	cin>>e;
		first1=a.create(first1,c,e);
	}
	a.display(first1);

	cout<<"how many terms in 2 polynomial\n";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"\nEnter coe: ";
		cin>>c;
		cout<<"Enter exp: ";	cin>>e;
		first2=a.create(first2,c,e);
	}
	a.display(first2);
	first3=a.add(first1,first2);
	cout<<"Result of addition: ";		a.display(first3);	cout<<endl;
	return 0;
}
