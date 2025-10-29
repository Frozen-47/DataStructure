//Insert and Delete at Begin....
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
    }
};

Node *head = NULL;

void insertAtBegin(int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void deleteAtBegin(){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
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
       insertAtBegin(v);
    }
    print();
    cout<<"How many node to Delete : ";
    cin>>v;
    for(int i = 0 ; i <= v-1 ; i++){
       deleteAtBegin();
    }
    print();
    return 0;
}