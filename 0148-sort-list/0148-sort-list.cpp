class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Base case
        if (head == nullptr || head->next == nullptr)
            return head;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split list
        ListNode* right = slow->next;
        slow->next = nullptr;

        // Sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge
        return merge(left, right);
    }

    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (a != nullptr && b != nullptr) {
            if (a->val < b->val) {
                curr->next = a;
                a = a->next;
            } else {
                curr->next = b;
                b = b->next;
            }

            curr = curr->next;
        }

        if (a != nullptr)
            curr->next = a;
        else
            curr->next = b;

        return dummy.next;
    }
};
