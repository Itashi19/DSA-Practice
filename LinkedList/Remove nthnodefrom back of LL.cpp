class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode = new ListNode();
		dummyNode->next = head;
		ListNode* fast = dummyNode;
		ListNode* slow = dummyNode;

		for(int i = 1; i<=n; ++i)
		{
			fast = fast->next;
		}

		while(fast->next!=NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}

		slow->next = slow->next->next;
		return dummyNode->next;
	}
    
};