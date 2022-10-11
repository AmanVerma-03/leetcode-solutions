#include<bits/stdc++.h>
using namespace std ;
struct node{
	int data ;
	node* left ;
	node* right ;
	node(int val)
	{
		data = val ;
		left = NULL;
		right = NULL ;
	}
};
vector<int>bottomview(node* root)
{
	vector<int>ans ;
	map<int,int>mpp;
	queue<pair<node*,int>>q ;
	q.push({root,0});
	while(!q.empty())
	{
		auto it  = q.front();
		q.pop();
		node* t= it.first;
		int line = it.second ;
		if(mpp.find(line)==mpp.end())
		{
			mpp[line]=t->data;
		}
		else
		mpp[line]=t->data ;
		if(t->left!=NULL)
		q.push({t->left,line-1});
		if(t->right!=NULL)
		q.push({t->right,line+1});
	}
	for(auto it : mpp)
	{
		ans.push_back(it.second);
	}
return ans ;	
}
int main()
{
	node* root = new node(20);
	root->left = new node(8);
	root->right = new node(22);
	root->left->left = new node(5);
	root->left->right = new node(3);
//	root->right->left = new node(6);
	root->right->right = new node(25);
	root->left->right->left = new node(10);
	root->left->right->right = new node(14);
	vector<int>res =  bottomview( root) ;
	 for(int i = 0 ;i < res.size() ; i++)
	 cout<<res[i]<<" ";
	return 0 ;
	
}