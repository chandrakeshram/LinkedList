/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }

};
void insertAtBeginning(Node*&head,int val){
    Node *newNode=new Node(val);
    if(head ==NULL){
        head =newNode;
    }
    else {
        newNode->next=head;
        head =newNode;
        
    }
}

Node* makeCycle(Node* &head,int pos){
    Node* temp=head;
    Node* startNode;
    int count=0;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
void display(Node* &head){
    Node* temp=head;
    if(head ==NULL){
        cout<<"List is empty"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void removeCycle(Node* &head ){
    Node* fast=head;
    Node* slow=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
    
}
int main()
{
    Node* head=NULL;
    insertAtBeginning(head,5);
    insertAtBeginning(head,4);
    insertAtBeginning(head,3);
    insertAtBeginning(head,2);
    insertAtBeginning(head,1);
    display(head);
    makeCycle(head,2);
    
    removeCycle(head);
    display(head);
    
   
    
    
    
    return 0;
}
/*===========================OUTPUT=====================*/