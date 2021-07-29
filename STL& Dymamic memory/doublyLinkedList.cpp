#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
};
void print(node** head ){
    node* head_ref=*head;

    cout<<"Input order : ";
    while(head_ref!=NULL){
        cout<<head_ref->data<<" ";
        
        head_ref=head_ref->next;
    }
    cout<<"\n";
    cout<<"Reverse Order : ";

    node* temp=*head;
    while(temp->next!=NULL){
        //cout<<temp->data<<endl;
        temp=temp->next; 
       
    }

    while(temp!=NULL){
        cout<<temp->data<<" ";
        
        temp=temp->prev;
    }
}
void addBegin(node** head,int data1){
  

    node* new_node=new node();
    new_node->data=data1;
    new_node->prev=NULL;
    new_node->next=NULL;

    if(*head==NULL){
        
        *head=new_node;
        return;
    }
    
    (*head)->prev=new_node;
    new_node->next=*head;
    *head=new_node;
}
int main(){
	node* head=NULL;

    addBegin(&head,5);
    addBegin(&head,15);
    addBegin(&head,25);
    addBegin(&head,35);
    addBegin(&head,25);
    addBegin(&head,85);
    //cout<<head->data<<endl;;
    
    

    print(&head);
}