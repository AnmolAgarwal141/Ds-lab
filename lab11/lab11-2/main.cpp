
#include<iostream>
#include<process.h>
#include<conio.h>
using namespace std;
class bst
{
	bst *lchild;
	int data;
	bst *rchild;
public:
	bst(int ele=0)
	{
		lchild=NULL;
		rchild=NULL;
		data=ele;
	}

	void insert(int);
	void display(bst *root);
	bst *del();
};

bst *root=NULL;

void bst::insert(int ele)
{
	bst *temp=new bst(ele);
	if(root==NULL){root=temp;return;}

	else
	{
		bst *curr=root,*prev=NULL;
		while(curr)
		{
			prev=curr;
			if(temp->data<curr->data)	curr=curr->lchild;
			else if(temp->data>curr->data)	curr=curr->rchild;
			else
			{
				cout<<"Insertion is not possible";
				return;
			}
		}

		if(temp->data>prev->data)
			prev->rchild=temp;
		else if(temp->data<prev->data)
			prev->lchild=temp;
	}
	return;
}

void bst::display(bst *ptr)
{
	if(ptr){
		display(ptr->lchild);
		cout<<" "<<ptr->data;
		display(ptr->rchild);
	}
}

bst* bst::del()
{
bst *c, *p, *s,*q;
int ele;
cout<<"Enter the key value to be deleted ";
cin>>ele;
  if(root==NULL)
  return root;
  p=NULL;
  c=root;
  while(c!=NULL)
  {
       if(ele==c->data)
          break;
         p=c;
       if(ele<c->data)
           c=c->lchild;
       else
           c=c->rchild;
  }
  if(c==NULL)
  return root;
   if(c->lchild==NULL)
      q=c->rchild;
   else if(c->rchild==NULL)
       q=c->lchild;
   else
    {
      s=c->rchild;
       while(s->lchild)
       s=s->lchild;
       s->lchild=c->lchild;
       q=c->rchild;
     }
     if(!p)
    {
       delete c;
       return q;
    }
    if(c==p->lchild)
      p->lchild=q;
    else
      p->rchild=q;
delete(c);
return(root);
}
int main()
{
	int ch,ele;
	bst b;
	while(1){
	cout<<"\n1. insert 2. display  3. delete 4. exit\n";
	cin>>ch;

	switch(ch)
	{
		case 1: cout<<"Enter the element to be inserted: ";
			cin>>ele;
			b.insert(ele);
			b.display(root);
			break;
		case 2: b.display(root);
			break;
		case 3:
			root=b.del();
			b.display(root);
			break;
		case 4: break;
	}
	if(ch==4)
        break;
	}
	return 0;
}

