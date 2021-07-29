#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *link;
};
int main()
{
   

    node* first=new node();
    node* second=new node();
    node* third=new node();

    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=NULL;

    node*head;

    head=first;

    node*temp=head;

    while(temp!=NULL){
       cout<<temp->data<<" ";
        temp=temp->link; 
        
    }

}
