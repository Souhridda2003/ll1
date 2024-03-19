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
int main(){
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    // d.val=40;
    // a.next=NULL;
    // b.next=NULL;
    // c.next=NULL;
    // d.next=NULL;
    // cout<<&a<<endl;
    // cout<<a.next;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // d.next=NULL;
    // node* ptr=&b;
    // ptr->val=60;
    // a.next->val=70;
    // cout<<(a.next)->val;
    //cout<<((a.next)->next)->val;
    // cout<<b.val;
    node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}