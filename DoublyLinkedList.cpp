/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }

};

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* temp=head;
    if(head ==NULL){
        head =newNode;
    }
    
    else {
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;

    }
}
void deleteAtHead(Node* &head){
    Node* todel=head;
    head =head->next;
    head->prev=NULL;
    delete todel;
}
void deleteNode(Node* &head,int pos){
    int count=1;
    Node* temp=head;
    if(head ==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else if(pos==1){
        deleteAtHead(head);
        return ;
    }
    else {
        
        while(temp!=NULL && count!=pos){
            temp=temp->next;
            count++;
        }
        temp->prev->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=temp->prev;

        }
        delete temp;
    
    }
    
}
void insertAtBeginning(Node* &head,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(head ==NULL){
        head =newNode;

    }
    else {
        newNode->next=head;
        head->prev=newNode;
        head =newNode;
    }
}
void display(Node* &head){
    Node* temp=head;
    if(head ==NULL){
        cout<<"list is empty"<<endl;
    }
    cout<<"NULL<->";
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head =NULL;
    display(head);
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    display(head);
    insertAtBeginning(head,0);
    display(head);
    deleteNode(head,2);
    deleteNode(head,4);
    display(head);

    return 0;
}
/*===========================OUTPUT=====================*/