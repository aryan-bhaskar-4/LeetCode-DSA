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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode;
        ListNode* ans = dummy;
        ListNode* i = list1;
        ListNode* j = list2;

        while(i != NULL && j != NULL){
            if(i->val <= j->val){
                ans->next = i;
                i = i->next;
            } else {
                ans->next = j;
                j = j->next;
            }
            ans = ans->next;
        }

        while(i != NULL){
            ans->next = i;
            i = i->next;
            ans = ans->next;
        }
        

        while(j != NULL){
            ans->next = j;
            j = j->next;
            ans = ans->next;
        }

        return dummy->next;
    }
};