/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(!head || !(head->next))
        	return head;
        	
        Node* curr = head;
        	
        while(curr && curr->next){
        	if(curr->data == curr->next->data){
        		Node* temp = curr->next;
        		curr->next = temp->next;
        		delete temp;
			}
			else{
				curr = curr->next;
			}
		}
		
		return head;
        
    }
};