#include<iostream>
using namespace std;
class node{ //linked list node
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){
    // node* temp=head;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int size(node* head){
    node* temp=head;
    int n=0;
    while(temp!=NULL){
        // cout<<temp->val<<" ";
        n++;
        temp=temp->next;
    }
    return n;
}
void revdisplay(node* head){
    if(head==NULL) return; //base case
    revdisplay(head->next); //call
    cout<<head->val<<" "; //kaam
}
void displayrec(node* head){
    if(head==NULL) return; //base case
    cout<<head->val<<" "; //kaam
    displayrec(head->next); //call
}
void inseratend(node* head,int val){
    node* t = new node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
}
int main(){
   node* a=new node(10);
   node* b=new node(20);
   node* c=new node(30);
   node* d=new node(40);
   node* e=new node(50);
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
//    node* temp=a;
//    while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
//    }
    // cout<<a->next->next->val;
    display(a);
    // displayrec(a);
    // revdisplay(a);
    inseratend(a,80);
    display(a);
    // cout<<size(a);
}