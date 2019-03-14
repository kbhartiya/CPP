/*
	print only values which has count = 1 in the lisnked list;
*/
/*
struct ListNode{
	int val;
	ListNode* next;
}
*/

ListNode * Solution::deleteDuplicates(ListNode *head){
        ListNode *origin = head;
        if(head==NULL) return head;
            while (head != NULL) {
            	int curr = head->val;
            	ListNode* prev;
            	while(head->next!=NULL && head->next->val == curr)
            	{
            		head = head->next;
            	}
            	head = head->next;
            	prev->next = head; 
            	}
            return origin;
}

