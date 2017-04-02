/*
https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
*/

/*
 Get Nth element from the end in a linked list of integers
 Number of elements in the list will always be greater than N.
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
int GetNode(Node *head,int positionFromTail)
{
    int count=0;
    Node *temp=head;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    temp=head;
    while((count-1)!=positionFromTail){
        temp=temp->next;
        count--;
    }
    return temp->data;
}
