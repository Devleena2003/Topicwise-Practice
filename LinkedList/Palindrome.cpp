 bool isPalindrome(Node *head)
    {
        //Your code here
        Node* temp=head;
        stack<int>s;
        while(temp!=NULL){
            s.push(temp->data);
            temp=temp->next;
            
        }
        temp=head;
        while(temp!=NULL && !s.empty()){
            if(temp->data!=s.top())
            return false;
        temp=temp->next;
        s.pop();
        }
        return true;
    }