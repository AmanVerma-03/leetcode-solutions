#include<bits/stdc++.h>
using namespace std ;
struct node{
	int data ;
	struct node* left = NULL;
	struct node* right = NULL ;
	node(int val)
	{
		data = val ;
	}
};

void levelorder(node* root)
{
	
	if(root==NULL)
	return ;
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		node* p = q.front() ;
		q.pop();
		if(p!=NULL)
	    cout<<p->data<<" ";
	    if(p->left!=NULL)
	    q.push(p->left);
	    if(p->right!=NULL)
	    q.push(p->right);
	}
	}
	int main()
	{
		struct node* root = new node(1);
		root->left = new node(2);
		root->right = new node(3);
		root->left->right = new node(4);
		root->left->right -> left= new node(5);
		levelorder(root);
	}
	