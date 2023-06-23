 int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node*slow=head;
           Node*fast=head;
                if(head==NULL){
            return -1;
        }
           for(int i=1;i<=n-1;i++){
               fast=fast->next;
                  if(fast==NULL){
                   return -1;
               }
               
           }
           while(fast!=NULL && fast->next!=NULL){
               slow=slow->next;
               fast=fast->next;
           }
          
           return slow->data;
    }