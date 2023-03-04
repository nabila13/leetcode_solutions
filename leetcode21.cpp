

  //Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

class Solution {
public:
ListNode* newNode(int val){
    ListNode* flag=new ListNode;
    flag->val=val;
    flag->next=NULL;
    return flag;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       vector<int>v;
       ListNode* list3=newNode(-1);
       ListNode* result=list3;
while(list2){
    v.push_back(list2->val);
    list2=list2->next;
}
while(list1){
    v.push_back(list1->val);
    list1=list1->next;
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    list3->next=newNode(v[i]);
    list3=list3->next;
}
result=result->next;
return result;
    }
};
