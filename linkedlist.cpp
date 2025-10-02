#include<iostream>
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
class linkedlist{
    Node*head;
    Node*tail;
    public:
    linkedlist(){
        head=tail=NULL;
    }
    void pushfront(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void display(){
        Node* temp=head;
    while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
    }
        cout<<"NULL"<<endl;
    }
    void insend(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        tail->next=newNode;
    }
    void insmid(int val,int index){
        Node*temp=head;
        Node* newNode=new Node(val);
        for(int i=1;i<index-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        
    }
};
int main()
{
    linkedlist list;
    list.pushfront(5);
    list.pushfront(4);
    list.pushfront(3);
    list.insend(6);
    list.insmid(7,3);

    list.display();
    return 0;
}
