#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* prev;
  node* next;

  //constructor
  node(int d ){
    this-> data = d;
    this-> prev = NULL;
    this-> next = NULL;
  }

  ~node(){
    int val =  this-> data;
    if(next!=NULL){
        delete next;
        next = NULL;
    }
    cout<<" Memory free for node with data "<< val << endl;
  }
};

void insertatHead(node* &head,node* & tail, int d){

    if(head==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp; 
    }
    else{
    node* temp = new node(d);

    temp-> next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertatTail(node* &tail,node* &head, int d){

    if(tail == NULL){
     node* temp = new node(d);
     tail = temp;
     head = temp;
    }
    else{
    node* temp = new node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertatPosition(node* &head, node* & tail, int pos , int d){
    if(pos == 1){
        insertatHead(head, tail,d);
        return ;
    }
    
    node* temp = head;
    int cnt = 1;

    while(cnt< pos - 1){
        temp = temp->next;
        cnt++;
    }

    //insert at tail
    if(temp->next == NULL){
        insertatTail(tail,head, d);
        return;
    }
  
   // creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert->next =temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert -> prev = temp;
}


void deleteNode(int pos, node* &head, node* &tail){

     //deleting from 1st position
     if(pos == 1){
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;

    //memory free
    temp->next = NULL;
    delete temp;
    }

  else {

    node* current = head;
    node* prev = NULL;

    int cnt = 1;
    while(cnt< pos){
        prev = current;
        current = current -> next;   
        cnt++;
    }
    current -> prev = NULL;
    prev -> next = current-> next;
    current->next= NULL;

    delete current;
  }
}


//traversing the list
void print (node* &head){
     node* temp = head;

     while(temp!= NULL){
        cout<< temp-> data << " -> " ;
        temp = temp -> next;
     }
     cout<<endl;
}

//length of list
int getLength(node* head) {
    int len = 0;
    node* temp = head;
    while(temp!= NULL){
        len++;
        temp =  temp-> next;
    }

    return len;
}


int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print (head);
    cout<<getLength(head)<<endl;

    insertatHead(head,tail,11);

    print(head);   
    insertatTail(tail,head,25);
    insertatTail(tail,head,16);
    insertatTail(tail,head,12);

    print(head);

    insertatPosition(head,tail,4,100);
    print(head);

   cout<<"head "<< head-> data <<endl;
   cout<<"tail "<< tail-> data <<endl;

    insertatPosition(head,tail,7,101);
    print(head); 
 
  cout<<"head "<< head-> data <<endl;
   cout<<"tail "<< tail-> data <<endl;

   deleteNode(2, head , tail);

   print(head);

return 0;
 
}