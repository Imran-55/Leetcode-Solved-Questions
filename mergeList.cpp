You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Solution --->

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
    ListNode* mergeTwoLists(ListNode* l, ListNode* r) {
        ListNode * ans = new ListNode(-1);
        ListNode * temp = ans;

        while( l && r ){
            if( l->val <= r->val ){
                temp->next = l;
                temp = l;
                l = l->next;
            }
            else
            {
                temp->next = r;
                temp = r;
                r = r->next;

            }
        }
        
        temp->next = l ? l : r;
        return ans->next;
    }
};
