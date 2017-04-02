/*
https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
*/
/*
 Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
 
 A Node is defined as:
 struct Node {
 int data;
 struct Node* next;
 }
 */

bool has_cycle(Node* head) {
    Node *slow=head, *fast=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

