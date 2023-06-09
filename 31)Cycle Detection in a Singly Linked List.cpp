bool detectCycle(Node *head)
{
	//	Write your code here
    if(head == NULL || head->next == NULL){
        return false;
    }
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}
