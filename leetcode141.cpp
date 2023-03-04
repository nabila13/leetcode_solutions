

class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool flag=true;
        if(head==NULL || head -> next ==NULL){
           flag=false;
        }
        else{
             ListNode *temp = head, *temp2 = head -> next;
        while(temp!=temp2){
            if(temp2==NULL || temp2 ->next ==NULL){
                flag=false;
                break;
            }
            else{
                temp= temp->next;
                temp2= temp2->next->next;
            }
          }
        }
        return flag;
    }
};
