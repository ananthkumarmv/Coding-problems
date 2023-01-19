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

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;

        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    bool compare(ListNode* h1, ListNode* h2){
        while(h1 && h2){
            if(h1->val != h2->val)
                return false;

            h1 = h1->next;
            h2 = h2->next;
        }

        return true;
    }

    bool isPalindrome(ListNode* head) {

        if(!head->next)
            return true;

        ListNode* h1 = head;
        ListNode* mid = findMid(head);

        ListNode* h2 = reverse(mid);

        return compare(h1, h2);
        
    }
};
