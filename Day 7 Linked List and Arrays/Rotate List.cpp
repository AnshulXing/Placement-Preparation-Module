class Solution {
public:
    int length(ListNode* head){
        int len =0;
        while(head){
            head=head->next;
            len++;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        int len = length(head);
        int actualk = k%len;
        if(actualk == 0) return head;

        int pos = len-actualk-1;

        ListNode* newlast=head;
        ListNode* newhead=nullptr;

        
        for(int i=0;i<pos;i++){
            newlast=newlast->next;
        }
        newhead = newlast->next; 
        newlast->next = NULL;  
        
        ListNode* it = newhead;
        while(it->next != NULL){
            it=it->next;
        }
        it->next=head;
        return newhead;
        }
};
