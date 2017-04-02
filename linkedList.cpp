/*
https://www.hackerrank.com/challenges/30-linked-list
*/
Node* insert(Node *head,int data)
{
    Node *temp=head;
    Node *x=new Node(data);
    if(head==NULL){
        head=x;
        return head;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=x;
    }
    return head;
    
}


