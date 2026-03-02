/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;

        Node* curr = head;
        while(curr){
            Node* currnext = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = currnext;
            curr = currnext;
        }

        curr = head;

        while(curr && curr->next){
            if(curr->random==NULL) curr->next->random = NULL;
            else{
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* newHead = curr->next;
        Node* newCurr = newHead;
        while(curr && newHead){
            curr->next = curr->next==NULL ? NULL: curr->next->next;
            newHead->next = newHead->next==NULL ? NULL: newHead->next->next;
            curr = curr->next;
            newHead= newHead->next;
        }
        return newCurr;
    }
};