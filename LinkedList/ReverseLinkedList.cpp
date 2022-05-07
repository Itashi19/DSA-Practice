
//code
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=null;
         ListNode* curr=head;
         ListNode* nextptr;
        
        while(curr!=NULL)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
};

//simply breaking links and resetting it
//1->2->3->4
