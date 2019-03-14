/*
Level order traversal of a tree
*/
/*
struct Node{
int val;
Node* left,*right;

}

*/

vector<int > levelOrder(Node* root,vector<int > &arr)
{
	if(!root) return NULL;
	queue<int > q;
	q.push(root);
	while(!q.empty())
	{
		Node* node = q.front();
		arr.push_back(node->val);
		q.pop();
		if(node->left!=NULL)
		{
			q.push(node->left);
			
		}
		if(node->right!=NULL)
		{
			q.push(node->right);
		}
	}
	return arr;
}

