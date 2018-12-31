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

node * minValueNode(node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 

node* remove(node *root, int item)
{

	if(root == NULL) return root;
	
	if(root->val>item)
	{
		root->left = remove(root->left,item);
	}
	else if(root->val<item)
	{
		root->right = remove(root->right,item);
	}
	else
	{
		if(root->right==NULL){
        node *temp = root->left; 
        free(root); 
        return temp; }
        
        else if(root->left==NULL)
        {node *temp = root->right;
        free(root);
        return temp;
        }
        node *temp = minValueNode(root->right);
        root->val = temp->val;
        root->right = remove(root->right,temp->val);
        
        
	}
	return root;
}
/*Consider the following tree:
--------------------------------
			7
		   / \
		  6	 9
		 /  / \		
		5   8  10
remove(6)		   
		   
Call Stack:
push(7);<--root
push(6);		<--root

operation of deletion.
So because of line 40 
pop(6)
recurse back;			
root-->7
root->left = 5
pop(7)
return root	   

remove(9)
push(7);<--root
push(9)     <--root
temp->val = 10

*/		   
		   
