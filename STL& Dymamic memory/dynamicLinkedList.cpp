#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
void push(node **head,int data){
        node* new_node=new node();
        new_node->data=data;
        new_node->next=NULL;

        node* temp=*head;

        if(*head==NULL){
            *head=new_node;
           return;
           
        }
        else{
            while(temp->next!=NULL){
                temp=temp->next; 
                
            }
        }
        temp->next=new_node;
        return;
}
void print(node **head){
    node* temp1=*head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }

}

int main(){
    node* head;
    head=NULL;
    node* temp;
    
    int n;
    cout<<"Enter the number of element to insert : ";
    cin>>n;
    while (n--){
        int data;
        cin>>data;
        push(&head,data);
    }
    print(&head);
}