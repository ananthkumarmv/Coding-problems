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

        ios_base::sync_with_stdio(0); 
        cin.tie(0);

        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                break;
        }

        if(fast == NULL || fast->next == NULL)
            return NULL;

        slow = head;

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
        
    }
};