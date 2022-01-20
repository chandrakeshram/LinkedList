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
Node* reverseKNodes(Node*&head,int k){
    Node* currentNode,*prevNode,*nextNode;
    currentNode=head;
    prevNode=NULL;
    nextNode=NULL;
    int count =0;
    while(currentNode!=NULL && count<k){
        nextNode=currentNode->next;
        currentNode->next=prevNode;
        prevNode=currentNode;
        currentNode=nextNode;
        count++;
    }
    if(nextNode!=NULL){
        head->next=reverseKNodes(nextNode,k);

    }
    return prevNode;
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
int main()
{
    Node* head=NULL;
    insertAtBeginning(head,5);
    insertAtBeginning(head,4);
    insertAtBeginning(head,3);
    insertAtBeginning(head,2);
    insertAtBeginning(head,1);
    display(head);
    Node* newhead = reverseKNodes(head,2);
    display(newhead);
    return 0;
}
/*===========================OUTPUT=====================*/