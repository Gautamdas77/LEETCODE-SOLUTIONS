/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int cnt = 0;
        ListNode* len = head;
        if(head==NULL || head->next==NULL || k<=0){
            return head;
        }
        while(len){
            cnt++;
            len = len->next;
        }
        if(k%cnt == 0) return head;
        k = k%cnt;
        int rem = cnt - k;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(rem--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        ListNode* newhead = curr;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = head;

        return newhead;

    }
};