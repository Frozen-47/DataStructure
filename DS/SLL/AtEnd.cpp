//Insert and Delete at End....
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *head = NULL;

void insertAtEnd(int value){
    Node *newNode = new Node(value);
    if(head == NULL){
       head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

    
}
void deleteAtEnd(){
    if(head == NULL){
        return;
    }
    Node *temp = head;
   while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    
}
void print(){
   if(head == NULL){
    cout<<"Nothing is Here";
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
int main(){
    int n,v;
    cout<<"Enter the values : ";
    cin>>n;
    for(int i = 0 ; i <= n-1 ; i++){
       cin>>v;
       insertAtEnd(v);
    }
    print();
    cout<<"How many node to Delete : ";
    cin>>v;
    for(int i = 0 ; i <= v-1 ; i++){
       deleteAtEnd();
    }
    print();
    return 0;
}