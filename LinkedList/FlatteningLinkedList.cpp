/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *entry=head;
        if(head==NULL ||head->next==NULL)
            return NULL;
        
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) //detect a cycle
            {
                while(slow!=entry)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};