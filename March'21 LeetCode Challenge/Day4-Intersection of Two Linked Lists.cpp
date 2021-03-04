/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
public:
    
    int getlength(ListNode* head){
        int l = 0;
        while(head){
            l++;
            head = head->next;
        }
        return l;
    }
    
    ListNode* travel(ListNode* head1,int l, ListNode* head2, int s){
        
        int d = l-s;
        while(d--){
            if(head1 == NULL){
                return NULL;
            }
            head1 = head1->next;
        }
        
        while(head1!=NULL && head2!=NULL){
            if(head1 == head2){
                return head1;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return NULL;
        
    }
    

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL)return NULL;
        
        int l1 = getlength(headA);
        int l2 = getlength(headB);
        
        ListNode* root;
        if(l1 > l2){
            root = travel(headA, l1, headB, l2);
        }else{
            root = travel(headB, l2, headA, l1);
        }
        
        return root;
        
    }
};
