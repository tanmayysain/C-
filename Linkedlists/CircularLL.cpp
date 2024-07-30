#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this-> data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this-> data;

        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<" Memory free for node with data "<< value << endl;
    }
};

void insertNode(Node* &tail, int element , int d){

 if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
 }
 else {
    Node* current = tail;

    while(current->data != element ){
        current = current-> next;
    }

    Node* temp = new Node(d);
    temp-> next = current->next;
    current->next =  temp;

 }
 }

 void print(Node* tail){

Node* temp = tail;

if(tail== NULL){
    cout<<"List is Empty "<< endl;
    return ;
}

 do{
    cout << tail -> data << " " ;
    tail = tail -> next;
 }while(tail != temp);

  cout<< endl;
}

void deleteNode(Node* &tail, int value){

    if(tail == NULL){
        cout<<" List is empty " << endl;
        return ;
    }

    else {

        Node* prev = tail;
        Node* current = prev->next;

        while(current-> data != value){
            prev = current;
            current = current -> next;
        }
        prev-> next = current -> next;

        //for one node LL
        if(current == prev){
            tail=NULL;
        }
        //>=2 node LL
        if(tail==current){
            tail=prev;
        }
        current->next = NULL;
        delete current;
    }
}

bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }

    Node* temp =  head-> next;
    while(temp!= NULL && temp!= head){
        temp =  temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){
    if(head==NULL)
    return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }

        visited[temp] = true;
        temp=temp->next;
    }
    return false;
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5, 7);
    print(tail);

    insertNode(tail,7, 9);
    print(tail); 

    insertNode(tail,5, 6);
    print(tail); 
     
    insertNode(tail,9, 10);
    print(tail);    

    deleteNode(tail,6);
    print(tail);

    if(isCircularList(tail)){
        cout<<"LInked list is circular in nature " <<endl;
    }
    else{
       cout<< "List is not Circular " << endl;
    }

 
return 0;
 
}