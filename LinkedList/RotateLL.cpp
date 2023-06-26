 Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        while(k!=0){
            temp=temp->next;
            head=head->next;
            k--;
        }
        temp->next=NULL;
        return head;
    }