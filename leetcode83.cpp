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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>s;
        while(head){
            s.insert(head->val);
            head=head->next;
        }
        ListNode* list=newNode(-1);
        ListNode* result=list;

        set<int>::iterator it;
        for(it=s.begin();it!=s.end();++it){
            list->next=newNode(*it);
            list=list->next;
        }
        result=result->next;
        return result;
    }
};
