
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
	void search(int);
	void display(bst *root);
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

void bst::search(int ele)
{

	if(root==NULL)
	{
		cout<<"tree is empty";
		return;
	}
	bst *curr=root;
	while(curr!=NULL)
	{
		if(curr->data==ele)
		{
			cout<<"Element found";
			return;
		}
		else if(curr->data>ele)	curr=curr->lchild;
		else			curr=curr->rchild;
	}
	cout<<"Element not found";
}

int main()
{
	int ch,ele;
	bst b;
	while(1){
	cout<<"\n1. insert 2. display 3. search 4. exit\n";
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
		case 3: 	cout<<"Enter the element to be found: ";
			int ele;
			cin>>ele;
			b.search(ele);
			break;
		case 4:break;
	}
	if(ch==4)
        break;
	}
	return 0;
}
