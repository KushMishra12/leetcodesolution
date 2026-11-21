/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertAttail(Node* &head,Node* &tail,int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    };
public:
    Node* copyRandomList(Node* head) {
        // step1 create clone;
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insertAttail(cloneHead,cloneTail,temp->val);
            temp=temp->next;
        }
        //step 2 create a link using mapping;
        unordered_map<Node*,Node*>oldtoNew;
        Node* originalNode=head;
        Node* cloneNode=cloneHead;
        while(originalNode!=NULL){
            oldtoNew[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        // step 3 connecting random pointer
        originalNode=head;
        cloneNode=cloneHead;
        while(originalNode!=NULL){
            cloneNode->random=oldtoNew[originalNode->random];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
    }
};