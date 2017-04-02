/*
https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
*/

/*
 Delete Node at a given position in a linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Delete(Node *head, int position)
{
    struct Node *temp;
    if(position==0){
        return head->next;
    }
    else{
        temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
}
