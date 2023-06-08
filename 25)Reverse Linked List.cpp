LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Iterative Method
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = NULL;
    while(curr != NULL){
        LinkedListNode<int> *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

    return head;
}
