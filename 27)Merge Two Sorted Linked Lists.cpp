Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy = new Node<int>(-1);
    Node<int>* ptr1 = first;
    Node<int>* ptr2 = second;
    Node<int>* ptr3 = dummy;
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data < ptr2->data) {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if (ptr1 == NULL) {
        ptr3->next = ptr2;
    } else if (ptr2 == NULL) {
        ptr3->next = ptr1;
    }
    return dummy->next;
}
