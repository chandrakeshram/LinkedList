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
void insertAtBeginning(Node* &head, int val){
    Node* newNode =new Node(val);
    if(head ==NULL){
        head =newNode;

        
    }
    newNode->next=head;
    head =newNode;
}
bool searchInLinkedList(Node* &head,int k){
    if(head ==NULL){
        cout<<"List is empty "<<endl;
        return false;
    }
    Node* temp=head;
    while(temp !=NULL){
        if(temp->data==k){
            return true;
        }
        temp=temp->next;
        
    }

    return false;

}
void deletion(Node *&head,int val){
    Node* temp=head;
    if(head ==NULL){
        cout<<"List is empty"<<endl;
    }
    
    else if(head ->data==val){
        head =head->next;
        free(temp);
    }
    else{
        while(temp->next!=NULL && temp->next->data!=val){
        temp=temp->next;
        }
        Node* toDel=temp->next;
        temp->next =temp->next->next;
        free(toDel);
    }
}
int main()
{
    Node *head =NULL;
    displayLinkedList(head);
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    displayLinkedList(head);
    insertAtBeginning(head,4);
    insertAtBeginning(head,5);
    displayLinkedList(head);
    cout<<searchInLinkedList(head,1)<<endl;
    cout<<searchInLinkedList(head,44)<<endl;
    deletion(head,5);
    deletion(head,2);
    displayLinkedList(head);
    return 0;
}
/*===========================OUTPUT=====================*/