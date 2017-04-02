/*
https://www.hackerrank.com/challenges/compare-two-linked-lists
*/
/*
 Compare two linked lists A and B
 Return 1 if they are identical and 0 if they are not.
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
int CompareLists(Node* headA, Node* headB)
{
    if(headA==0 && headB==0){
        return 1;
    }
    else if((headA==0 && headB!=0) || (headA!=0 && headB==0)){
        return 0;
    }
    else{
        Node *temp1=headA, *temp2=headB;
        if(temp1->next==0 && temp2->next==0){
            if(temp1->data==temp2->data){
                return 1;
            }
            else{
                return 0;
            }
        }
        while(temp1->next!=0 && temp2->next!=0){
            if(temp1->data==temp2->data){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                return 0;
            }
        }
        if(temp1->next==0 && temp2->next==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
