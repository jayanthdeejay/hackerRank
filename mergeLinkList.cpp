/*
https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
*/

/*
 Find merge point of two linked lists
 Node is defined as
 struct Node
 {
 int data;
 Node* next;
 }
 */
int FindMergeNode(Node *headA, Node *headB)
{
    int count1=0, count2=0;
    Node *temp=headA;
    while(temp!=0){
        count1++;
        temp=temp->next;
    }
    temp=headB;
    while(temp!=0){
        count2++;
        temp=temp->next;
    }
    if(count1<=count2){
        temp=headA;
        Node *temp2;
        while(temp->next!=0){
            temp2=headB;
            while(temp2->next!=0){
                if(temp->next==temp2->next){
                    return temp2->next->data;
                }
                temp2=temp2->next;
            }
            temp=temp->next;
        }
    }
    else{
        temp=headB;
        Node *temp2=headA;
        while(temp!=0){
            while(temp2!=0){
                if(temp->next==temp2->next){
                    return temp2->next->data;
                }
                temp2=temp2->next;
            }
            temp=temp->next;
        }
    }
    return 0;
}
