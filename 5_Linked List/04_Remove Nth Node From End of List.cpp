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
int getLength(ListNode* head){
    int len=0;
    ListNode* temp=head;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getLength(head);
        ListNode* temp=head;
        ListNode* prev=NULL;
        int a=len-n+1;

        if(a == 1){
            ListNode* temp=head;
            head=head->next;
            
            temp->next=NULL;
            delete temp;
        }
        else{
            int cnt=1;
            while(cnt<a){
                prev=temp;
                temp=temp->next;
                cnt++;
            }
            prev->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
        

        return head;


    }
};
