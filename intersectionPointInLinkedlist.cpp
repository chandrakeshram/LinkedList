#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;

    }
};
void insertAtBeginning(Node* &head ,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(head ==NULL){
        head =newNode;
    }
    else{
        newNode->next =head;
        head->prev=newNode;
        head =newNode;
    }
}
void display(Node* &head){
    Node* temp=head;
    if(head ==NULL){
        cout<<"List is empty"<<endl;
    }
    else {
        cout<<"NULL<->";
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}
int length(Node*&head){
    Node* temp=head;
    int l=0;
    while(temp!=NULL){
        
        l++;
        temp=temp->next;
    }
    return l;
}
void intersectLinkedList(Node*&head1,Node*&head2,int pos){
    Node *temp1=head1;
    Node *temp2=head2;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int  intersectionPoint(Node*&head1, Node*&head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    Node*ptr1;
    Node*ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    insertAtBeginning(head1,5);
    insertAtBeginning(head1,4);
    insertAtBeginning(head1,3);
    insertAtBeginning(head1,2);
    insertAtBeginning(head1,1);
    insertAtBeginning(head2,10);
    insertAtBeginning(head2,9);
    insertAtBeginning(head2,8);
    insertAtBeginning(head2,7);
    insertAtBeginning(head2,6);
    intersectLinkedList(head1,head2,4);
    
    display(head1);
    display(head2);
    cout<<intersectionPoint(head1,head2)<<endl;


    return 0;
}
/*===========================OUTPUT=====================*/