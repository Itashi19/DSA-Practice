
//Brute force approach for this is to take a vector put all linked list eleemnts to it and check for palidromic List
ListNode* reverseList(ListNode* head)
{
    ListNode* prev=NULL;
    ListNode* cur=head;
    ListNode* nextptr;
    
    while(cur!=NULL)
    {
        nextptr=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextptr;
    }
    return prev;
}



class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL)
            return true;
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL) //finding the middle of the linked list
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next); //reversing the right half of the linked list
        slow=slow->next;
        while(slow!=NULL)  //comparing the first half and the second half of LL in order to check the palidromic Linked Lust
        {
            if(head->val!=slow->val)
                return false;
           head=head->next;
            slow=slow->next;
        }
        return true;
    }
};

//Time complexity of this approach is:O(n/2)+O(n/2)+O(n/2) //1)middle 2)reverse 3)comparison