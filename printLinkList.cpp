/*
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
*/
/*
 Print elements of a linked list on console
 head pointer input could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
void Print(Node *head)
{
    Node *temp=head;
    if(head==0){
        
    }
    else{
        cout<<temp->data<<endl;
        while(temp->next!=0){
            temp=temp->next;
            cout<<temp->data<<endl;
        }
    }
}
