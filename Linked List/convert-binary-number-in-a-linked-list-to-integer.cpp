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
    int getDecimalValue(ListNode* head) {
        ListNode *ptr=head;
        int cnt=0, dec=0;
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL){
            dec+=ptr->val * pow(2, cnt-1);
            cnt--;
            ptr=ptr->next;
        }
        return dec;
    }
};
