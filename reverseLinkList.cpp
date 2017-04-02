/*
https://www.hackerrank.com/challenges/reverse-a-linked-list
*/
/*
 Reverse a linked list and return pointer to the head
 The input list will have at least one element
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Reverse(Node *head)
{
    if(head==0||head->next==0){
        return head;
    }
    else{
        Node *temp=head;
        Node *tail=head;
        head=head->next;
        tail->next=0;
        while(head->next!=0){
            temp=head;
            head=head->next;
            temp->next=tail;
            tail=temp;
            temp=head;
        }
        head->next=tail;
        return head;
    }
}
