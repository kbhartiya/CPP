/*
Binary Tree to Binary search tree
*/
void inorderarr(Node* root,int arr[],int *index_ptr)
{
	if(root==NULL) return;
	
	inorderarr(root->left,arr,index_ptr);
	arr[(*index_ptr)] = root->val;
	(*index_ptr)++;
	inorderarr(root->right,arr,index_ptr);
	
}
void arraytobst(int arr, Node* root, int index_ptr)
{
if(root==NULL) return;
arraytobst(arr,root->left,index_ptr);
root->val = arr[(*index_ptr)];
(*index_ptr)++;
arraytobst(arr,root->right,index_ptr);

}
Node* bttobst(Node* root)
{
	if(root==NULL) return;
	
	int n = count(root);
	int *arr = new int [n];
	int i = 0;
	inorderarr(root,arr,i);
	sort(arr,arr+n);
	arraytobst(arr,root,i);
	delete [] arr;
	return root;
}
