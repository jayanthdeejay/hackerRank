/*
https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
*/

/*
 Merge two sorted lists A and B as one linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* MergeLists(Node *headA, Node* headB)
{
    Node *tList=0, *headC=0;
    if(headA==0 && headB==0){
        return headB;
    }
    else if(headB==0 && headA!=0){
        return headA;
    }
    else if(headA==0 && headB!=0){
        return headB;
    }
    else {
        if(headA->data <= headB->data){
            headC=headA;
            tList=headA;
            headA=headA->next;
        }
        else{
            headC=headB;
            tList=headB;
            headB=headB->next;
        }
        tList->next=0;
        while(headA!=0 && headB!=0){
            if(headA->data <= headB->data){
                tList->next=headA;
                headA=headA->next;
                tList=tList->next;
            }
            else{
                tList->next=headB;
                headB=headB->next;
                tList=tList->next;
            }
            tList->next=0;
        }
        if(headA==0){
            tList->next=headB;
        }
        else{
            tList->next=headA;
        }
        return headC;
    }
}
