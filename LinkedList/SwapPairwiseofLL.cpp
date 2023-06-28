 Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head->next==NULL)
        return head;
       
       Node *nxt=head->next;
        head->next = pairWiseSwap(nxt->next);
        nxt->next=head;
        
        return nxt;
    }