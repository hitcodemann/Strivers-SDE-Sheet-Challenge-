int getlength(Node* head){
    int len =0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    int len = getlength(head);
    int ans = (len/2);
    Node* temp = head;
    while(ans != 0){
        temp = temp->next;
        ans--;
    }
    return temp;
}
