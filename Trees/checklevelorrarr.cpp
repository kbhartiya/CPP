/*
Check whether the array represents a level order traversal of any BST.
*/

/*
struct Node
{
	int val;
	Node* left, *right;
	
}
Node* newNode(int item)
{
	Node *newnode = new Node;
	newnode->val = item;
	newnode->left = newnode->right = NULL;
	return newnode;
}

*/
struct Node{
	int val;
	int min;
	int max;
}

bool islevelorder(vector<int > arr)
{
	int n = A.size();
	if(n==0) return false;
	
	queue<Node > q;
	int i=0;
	Node newnode;
	newNode->val = arr[i];
	newnode->min = INT_MIN;
	newnode->max = INT_MAX;
	i++;
	q.push(newnode);
	while(i!=n && !q.empty())
	{
		node temp = q.front();
		q.pop();
		if(i<n && (arr[i]<temp->val && arr[i]>temp->min)
		{	
			newnode->val = arr[i];
			newnode->max = temp->val;
			newnode->min = temp->min;
			i++;
			q.push(newnode);
		}
		if(i<n && (arr[i]>temp->val && arr[i]<temp->max))
		{
			newnode->val = arr[i];
			newnode->min = temp->val;
			newnode->max = temp->max;
			i++;
			q.push(newnode);
			}
	}
	if(i==n) return true;
	else return false;
}
