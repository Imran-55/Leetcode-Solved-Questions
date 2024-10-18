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
    ListNode* sortList(ListNode* head) {

        vector<ListNode*>ans;
        ListNode * temp = head;
        if(!head || !head->next){return head;}
        while(temp){
            ans.push_back(temp);
            temp = temp->next;
        }
        int n = ans.size();
        for(int i = 0; i<n-1;i++){
            for(int j = 0; j<n-i-1; j++){
                if(ans[j]->val > ans[j+1]->val){
                    swap(ans[j], ans[j+1]);
                }
            }
        }

        for(int i = 0; i<n-1; i++){
            (ans[i]->next) = ans[i+1];
        }

        ans[n-1]->next = NULL;
        head = ans[0];

        for(auto i: ans){
            cout<<i<<" ";
        }
        return head;
    }
};
