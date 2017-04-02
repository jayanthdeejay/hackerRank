/*
https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
*/

/*
 Insert Node at a given position in a linked list
 head can be NULL
 First element in the linked list is at position 0
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* InsertNth(Node *head, int data, int position)
{
    Node *temp=new Node;
    temp->data=data;
    if(position==0&&head==0){
        temp->next=0;
        head=temp;
    }
    else if(position==0){
        temp->next=head;
        head=temp;
    }
    else{
        Node *temp1=head;
        for(int i=0;i<position-1;i++){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
    }
    return head;
}
