 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL )
        return head;
        
        struct node * curr=head;
        struct node * prev=NULL;
        struct node * temp=NULL;
        
        // Step 1:reverse k nodes
        int cnt=0;
        while(curr!=NULL && cnt<k){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            cnt++;
        }
        
        // Step 2:recursive call
        head->next=reverse(temp,k);
        
        // Step 3:return ans
        return prev;
    }