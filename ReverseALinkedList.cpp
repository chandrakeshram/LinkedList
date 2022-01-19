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
Node* reverseLinkedList(Node* &head){
    Node* prevNode,*currentNode,*nextNode;
    prevNode=NULL;
    currentNode=head;
    nextNode=NULL;
    while(currentNode!=NULL){
        nextNode=currentNode->next;
        currentNode->next=prevNode;
        
        prevNode=currentNode;
        currentNode=nextNode;
        
    }
    return prevNode;
}
int main()
{
    Node *head =NULL;
    insertAtEnd(head,5);
    insertAtEnd(head,4);
    insertAtEnd(head,3);
    insertAtEnd(head,2);
    insertAtEnd(head,1);
    insertAtEnd(head,0);
    displayLinkedList(head);
    Node*newhead=reverseLinkedList(head);
    displayLinkedList(newhead);

    

    
    return 0;
}
/*===========================OUTPUT=====================*/