int getMiddle(Node *head)
    {
        // Your code here
        int l=1;
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            l++;
        }
       int ans=l/2;
        int cnt=0;
        Node*tp=head;
        while(cnt<ans){
            tp=tp->next;
            cnt++;
        }
        return tp->data;
        
    }