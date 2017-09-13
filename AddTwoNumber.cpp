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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* add;
		ListNode* head;
		ListNode* p2;
		int count = 0;
		int carry = 0;
		int len = sizeof(ListNode);
		
		while (l1 != NULL || l2 != NULL){
			count++;
			if (count == 1){
				add = (ListNode*) malloc (len);
                p2 = add;
				head = add;
                p2->next = NULL;
                
				add->val = l1->val + l2->val + carry;
				carry = add->val / 10;
                add->val %= 10;
                
				p2->next = add;
                p2 = add;
                
                add = (ListNode*) malloc (len);
				l1 = l1->next;
				l2 = l2->next;
			}
			else if (l1 == NULL){
				add->val = l2->val + carry;
				carry = add->val / 10;
                add->val %= 10;
                
                p2->next = add;
				p2 = add;
                
                add = (ListNode*) malloc (len);
				l1 = l1->next;
				l2 = l2->next;
			}
			else if (l2 == NULL){
				add->val = l1->val + carry;
				carry = add->val / 10;
                add->val %= 10;
                
                p2->next = add;
				p2 = add;
                
                add = (ListNode*) malloc (len);
				l1 = l1->next;
				l2 = l2->next;
			}
			else {
				add->val = l1->val + l2->val + carry;
				carry = add->val / 10;
                add->val %= 10;
                
                p2->next = add;
				p2 = add;
                
                add = (ListNode*) malloc (len);
				l1 = l1->next;
				l2 = l2->next;
			}
		}
		return head;
    }
};