/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;

        int carry = 0;

        while(l1 && l2){
            int value = l1->val + l2->val + carry;
            carry = value/10;

            l3->next = new ListNode(value%10);

            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
        }


        while(l1){
            int value = l1->val + carry;
            carry = value/10;

            l3->next = new ListNode(value%10);

            l1 = l1->next;
            l3 = l3->next;
        }

        while(l2){
            int value = l2->val + carry;
            carry = value/10;

            l3->next = new ListNode(value%10);

            l2 = l2->next;
            l3 = l3->next;
        }

        while(carry>0){
            l3->next = new ListNode(carry%10);
            carry /= 10;

            l3 = l3->next;
        }

        return reverse(head->next);
        
    }
};