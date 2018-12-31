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
node* insert(node* node, int item)
{
	if(node==NULL)
	{
		return newnode(item);
	}
	if(item<=node->val)
	{
		node->left = insert(node->left, item);
	}
	if(item>node->val)
	{
		node->right = insert(node->right, item);
	}
	return node; 
}
