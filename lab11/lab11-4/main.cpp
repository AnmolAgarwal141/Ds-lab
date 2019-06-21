
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
	void inorder(bst*);
	void postorder(bst*);
	void preorder(bst*);
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
void bst::inorder(bst *root)
{
    if(!root) return;
    inorder(root->lchild);
    cout << root->data << " " ;
    inorder(root->rchild);
}

void bst::preorder(bst *root)
{
    if(!root) return;
    cout << root->data << " " ;
    preorder(root->lchild);
    preorder(root->rchild);
}

void bst::postorder(bst *root)
{
    if(!root) return;
    postorder(root->lchild);
    postorder(root->rchild);
    cout << root->data << " ";
}

int main()
{
	int ch,ele;
	bst b;
	while(1){
	cout<<"\n1. insert 2. traverse 3.exit\n";
	cin>>ch;

	switch(ch)
	{
		case 1: cout<<"Enter the element to be inserted: ";
			cin>>ele;
			b.insert(ele);
			b.inorder(root);
			break;
		case 2:
    cout << "\nINORDER: \n";
    b.inorder(root);
    cout << "\nPREORDER: \n";
    b.preorder(root);
    cout << "\nPOSTORDER: \n";
    b.postorder(root);
		    break;
		    case 3:break;
	}
	if(ch==3)
        break;
	}
	return 0;
}
