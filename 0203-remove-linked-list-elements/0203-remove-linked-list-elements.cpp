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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
            head=head->next;
        }
        ListNode* f=head;
        while(f && f->next ){
            if(f->next->val==val){
                f->next=f->next->next;
            }else{
                f=f->next;
            }
        }
        return head;

    }
};