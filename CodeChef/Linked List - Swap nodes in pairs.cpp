/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}
*/

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
    	if(head->next == NULL)
    		return head;
    	
        Node* curr = head->next;
        Node* prev = head;
        Node* next = NULL;
        
        head = curr;
        
        while(curr){
        	next = curr->next;
        	curr->next = prev;
        	
        	if(next == NULL || next->next == NULL){
        		prev->next = next;
        		break;
			}
			
			prev->next = next->next;
			prev = next;
			curr = next->next;
		}
		
		return head;
        
    }
};