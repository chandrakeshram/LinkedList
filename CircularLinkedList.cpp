/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        return ;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    head =newNode;

}
void insertAtTail(Node*&head,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    if(head ==NULL){
        insertAtHead(head,val);
        return ;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void display(Node* &head){
    Node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    

}

int main()
{
    Node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head ,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,0);
    display(head);
    return 0;
}
/*===========================OUTPUT=====================*/