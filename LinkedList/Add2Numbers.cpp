Approach:
reverse two linked list l1 and l2
int sum,carry=0;
Node*temp=new Node(0);
while(l1||l2||carry){
    if(l1!=NULL){
        sum+=l1;
        l1=l1->next;
    }
     if(l2!=NULL){
        sum+=l2;
        l2=l2->next;
    }
    sum+=carry;
    carry=sum/10;
    Node* dummy= new Node(sum%10);
  temp->next=dummy;
  temp=temp->next;
  Node* ans=reverse(temp->next);
  return ans;
}