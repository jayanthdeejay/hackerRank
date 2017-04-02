/*
https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
*/
/*
 Remove all duplicate elements from a sorted linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* RemoveDuplicates(Node *head)
{
    Node *temp=head;
    while(temp!=0){
        while(temp->next!=0 && temp->data==temp->next->data){
            Node *del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
        temp=temp->next;
    }
    return head;
}
