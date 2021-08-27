/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    stack<Node*> s1;
    stack<Node*> s2;
    Node* temp = head1;
    while(temp!=NULL){
        s1.push(temp);
        temp=temp->next;
    }
    temp = head2;
    while(temp!=NULL){
        s2.push(temp);
        temp=temp->next;
    }
    int ans=-1;
    while(!s1.empty() && !s2.empty()){
        if(s1.top() == s2.top()){
            ans= s1.top()->data;
            s1.pop();
            s2.pop();
        }
        else{
            break;
        }
    }
    return ans;
}