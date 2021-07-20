class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map< Node*, int> mp;
        struct Node *slow = head;
        struct Node *fast = head;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast ){
                break;
            }
        }
        if(slow==fast){
            slow = head;
            fast = head;
            while(true){
                if(mp.find(slow)!=mp.end()){
                    fast->next=NULL;
                    break;
                }
                else{
                    mp[slow]=1;
                    fast = slow;
                    slow=slow->next;
                }
            }
        }
        // int count =0;
        // struct Node *p1 =slow;
        // struct Node *p2 = slow;
        // while(p2->next!=p1){
        //     p2=p2->next;
        //     count++;
        // }
        // p1=head;
        // p2=head;
        // int i =0;
        // while(i<count){
        //     p2=p2->next;
        //     i++;
        // }
        
        // while(p2!=p1){
        //     p2=p2->next;
        //     p1=p1->next;
        // }
        // while(p2->next!=p1){
        //     p2=p2->next;
        // }
        // p2->next =NULL;
    }
};