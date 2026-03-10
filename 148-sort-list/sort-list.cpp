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
    ListNode* splitAtMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }

        return slow;
    }

    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;

        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                ans->next = left;
                left = left->next;
            } else {
                ans->next = right;
                right = right->next;
            }
            ans = ans->next;
        }

        while(left != NULL){
            ans->next = left;
            ans = ans->next;
            left = left->next;
        }

        while(right != NULL){
            ans->next = right;
            ans = ans->next;
            right = right->next;
        }

        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* midHead = splitAtMid(head);

        ListNode* left = sortList(head);
        ListNode* right = sortList(midHead);

        return merge(left,right);
    }
};