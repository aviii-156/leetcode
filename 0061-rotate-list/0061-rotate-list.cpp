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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int len =1;
        ListNode* temp = head;
        // length calculate krro 
       while(temp->next!=NULL){
        len++; 
        temp=temp->next;
       }
       // linklist ko circular bnao 
       temp->next=head;

       k=k %len;
       
       int steps=len-k;
       while (steps!=0){
        temp=temp->next;
        steps--;
       }
       //head ko asign kr do and uske pich wwale ko null asiign kr do 
       head=temp->next;
       temp->next=NULL;
       return head;


        
        
    }
};