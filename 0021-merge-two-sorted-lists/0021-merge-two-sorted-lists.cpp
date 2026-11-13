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
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->val >list2->val){
            swap(list1,list2);
        }
        ListNode* curr=list1->next;
        ListNode* prev=list1;
        ListNode* temp=list2;
        while(curr!=NULL && temp!=NULL){
        if(prev->val <= temp->val && temp->val <=curr->val){
            prev->next=temp;
           ListNode* temp2=temp->next;
            temp->next=curr;
            prev=temp;
            temp=temp2;

        }
        else{
            prev=curr;
            curr=curr->next;
        }
        }
            if(temp!=NULL){
                prev->next=temp;
        }
        return list1;

    }
};