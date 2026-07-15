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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp=nullptr;
        ListNode* prev=nullptr;
        unordered_set<int> set(nums.begin(), nums.end());
        while (set.count(head->val) > 0) {
            head = head->next;
        }
        temp=head;
        while(temp!=nullptr){
            
            if (set.count(temp->val) > 0) {
                temp = temp->next;
                prev->next = temp;          
            }
            else{
                prev=temp;
                temp=temp->next;}
            }   
        return head;
    }
};