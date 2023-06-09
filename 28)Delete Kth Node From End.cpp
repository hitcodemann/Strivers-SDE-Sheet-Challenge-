Node* removeKthNode(Node* head, int k)
{
    if (head == NULL) {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    for (int i = 0; i < k; i++) {
        if (fast == NULL) {
            return head; // k is greater than the length of the list, return head as is
        }
        fast = fast->next;
    }
    while (fast != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    if (prev == NULL) {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}
