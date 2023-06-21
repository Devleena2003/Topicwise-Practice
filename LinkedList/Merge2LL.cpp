Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* head=new Node(0);
    Node* curr=head;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            curr->next=head1;
            head1=head1->next;
        }
        else{
            curr->next=head2;
            head2=head2->next;
        }
        curr=curr->next;
    }
    
    if(head1!=NULL)
    curr->next=head1;
    if(head2!=NULL)
    curr->next=head2;
    
    return head->next;
}  