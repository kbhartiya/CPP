/*
Insertion in a Binary Search tree
*/

/*
struct node{
int val;
node *right, *left;
};

struct node *newnode(int item)
{
	node *temp = new node;
	temp->val = item;
	temp->right = temp->left = NULL;
	return temp; 
}

*/

node* search(node* node, int item)
{
	if(node==NULL || node->val==item)
		return node;
	if(node->val>item)
	{
		return search(node->left,item);
	}
	return search(node->right, item);	
}
/*

Consider the given tree:
		3
	   / \
	   2  5
	  / 
	  1
Search for 1.	  
	  
	  
Call stack
----------
push(3)
push(2)
push(1)
pop(1)
pop(2)
pop(3)
return 1;

*/
