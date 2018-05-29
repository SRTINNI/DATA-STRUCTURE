/*postorder traversal*/
#include<iostream>
using namespace std;


struct node
{
 	int data;
 	node *left,*right;
 };


void postorder(node *root)
 {
 	if(root==NULL)
 	{
 		return;
 	}
 	postorder(root->left);
 	postorder(root->right);
 	cout<<root->data<<endl;
 }

 node* GetNode(int data)
 {
 	node* newNode = new node();
 	newNode->data = data;
 	newNode->left = newNode->right = NULL;
 	return newNode;
 }

 node* insert(node* root,int data)
 {
 	if(root==NULL)
 	{
 		root = GetNode(data);
 	}
 	else if(data<=root->data)
 	{
 		root->left = insert(root->left,data);
 	}
 	else
 	{
 		root->right = insert(root->right,data);
 	}
 	return root;
 }


 int main()
 {
 	node *root = NULL;
 	int n;
 	cout<<"\nEnter the value how much value you want to input: ";
    cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		int data;
 		cin>>data;
 		root = insert(root,data);
 	 }
 	cout<<endl;
 	postorder(root);
 	return 0;
 }
