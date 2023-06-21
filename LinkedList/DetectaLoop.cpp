 bool detectLoop(Node* head)
    {
        // your code here
       Node* fast=head;
        Node* slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
       
    }