
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
ListNode* newNode(int val){
    ListNode* flag=new ListNode;
    flag->val=val;
    flag->next=NULL;
    return flag;
}
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        reverse(v.begin(),v.end());
ListNode* list3=newNode(-1);
ListNode* result=list3;
for(int i=0;i<v.size();i++){
    list3->next=newNode(v[i]);
    list3=list3->next;
}
result=result->next;
return result;
    }
};
