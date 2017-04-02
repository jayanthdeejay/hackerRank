/*
https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
*/
/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Insert(Node *head,int data)
{
    if(head==0){
        Node *temp1=new Node;
        temp1->data=data;
        temp1->next=0;
        head=temp1;
    }
    else{
        Node *temp=head;
        while(temp->next!=0){
            temp=temp->next;
        }
        Node *temp1=new Node;
        temp1->data=data;
        temp1->next=0;
        temp->next=temp1;
    }
    return head;
}
