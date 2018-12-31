/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int compareLists(ListNode* head1,ListNode *head2) 
{ 
    ListNode* temp1 = head1; 
    ListNode* temp2 = head2; 
  
    while (temp1 && temp2) 
    { 
        if (temp1->val == temp2->val) 
        { 
            temp1 = temp1->next; 
            temp2 = temp2->next; 
        } 
        else return 0; 
    } 
  
    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL) 
        return 1; 
  
    /* Will reach here when one is NULL 
      and other is not */
    return 0; 
} 
void reverse(ListNode** head) 
{ 
    ListNode* prev   = NULL; 
    ListNode* current = *head; 
    ListNode* next; 
    while (current != NULL) 
    { 
        next  = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    *head = prev; 
} 
int Solution::lPalin(ListNode *A) 
{ 
    ListNode *slow_ptr = A, *fast_ptr = A; 
    ListNode *second_half, *prev_of_slow_ptr = A; 
    ListNode *midnode = NULL;   
    int res = true; 
  
    if (A!=NULL && A->next!=NULL) 
    { 
        while (fast_ptr != NULL && fast_ptr->next != NULL) 
        { 
            fast_ptr = fast_ptr->next->next; 
  
            
            prev_of_slow_ptr = slow_ptr; 
            slow_ptr = slow_ptr->next; 
        } 
  
  
        
        if (fast_ptr != NULL) 
        { 
            midnode = slow_ptr; 
            slow_ptr = slow_ptr->next; 
        } 
  
        
        second_half = slow_ptr; 
        prev_of_slow_ptr->next = NULL;  
        reverse(&second_half);   
        res = compareLists(A, second_half); 
  
        
         reverse(&second_half);
         
         if (midnode != NULL)  
         { 
            prev_of_slow_ptr->next = midnode; 
            midnode->next = second_half; 
         } 
         else  prev_of_slow_ptr->next = second_half; 
    } 
    return res; 
} 

