/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data ;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head ==NULL){
        head =newNode;
    }
    
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next =newNode;

    }

}
void displayLinkedList(Node *&head){
    if(head ==NULL){
        cout<<"List is empty"<<endl;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL"<<endl;
}
void evenAfterOdd(Node*&head){
    Node* odd=head;
    Node* even=head->next;
    Node* evenStart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd =odd->next;
        even->next=odd->next;
        even =even->next;
    }
    odd->next=evenStart;
    if(odd->next!=NULL){
        even->next=NULL;
    }

}

int main()
{
    Node *head =NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtEnd(head,arr[i]);

    }
    displayLinkedList(head);
    evenAfterOdd(head);
    displayLinkedList(head);
    
}
/*===========================OUTPUT=====================*/