/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    Node* detectCycle(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
        	slow = slow->next;
        	fast = fast->next->next;
        	
        	if(slow == fast){
        		
        		slow = head;
        		while(slow != fast){
        			slow = slow->next;
        			fast = fast->next;
				}
				
				return slow;
			}
		}
		
		return NULL;
    }
};