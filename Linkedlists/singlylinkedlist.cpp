#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

   // contructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }

    // destrctor
    ~Node(){
        int value = this -> data;
        //memory free
      if(this-> next != NULL){
        delete next;
        this-> next= NULL;
      }
      cout<<"Memory is free for node with data " << value << endl;
    
    }
};

void InsertatHead(Node* &head , int d){

    Node* temp = new Node(d);
    temp->next =  head;
    head = temp;
}

void InsertatTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail -> next =  temp;
  tail =  temp;
}

void InsertatPosition(Node* &tail,Node* &head , int pos, int d){
    //insert at head
    if(pos == 1){
        InsertatHead(head, d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt< pos - 1){
        temp = temp->next;
        cnt++;
    }

    //insert at tail
    if(temp->next == NULL){
        InsertatTail(tail,d);
        return;
    }
  
   // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next =temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int pos, Node* &head, Node* &tail){

     //deleting from 1st position
     if(pos == 1){
    Node* temp = head;
    head = head->next;

    //memory free
    temp->next = NULL;
    delete temp;
    }

  else {

    Node* current = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt< pos){
        prev = current;
        current = current -> next;   
        cnt++;
    }
    prev -> next = current-> next;
    current->next= NULL;

    delete current;
  }
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

Node* floydDetectLoop(Node* head){
  if(head==NULL)
    return NULL;
    Node* slow = head;
    Node* fast = head;
  
  while(slow != NULL && fast != NULL){
    fast != fast->next;
    if(fast!= NULL){
      fast = fast->next;
    }
    slow= slow->next;
    if(slow==fast){
      return slow;
    }
  }
  return NULL;
}

Node* getStartingNode(Node* head){
  if(head == NULL){
    return NULL;
  }
 Node* intersection = floydDetectLoop(head);
 Node* slow = head;

 while(slow != intersection){
  slow =  slow->next;
  intersection = intersection-> next;
  return slow;
  }
}

void removeLoop(Node * head){
  if(head==NULL){
    return ;
  }
  Node* startofLoop = getStartingNode(head);

  Node* temp =  startofLoop;

  while(temp->next != startofLoop){
    temp = temp->next;
  }
  temp->next = NULL;
}

void print (Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout<< temp->data << " ";
   temp = temp->next;
  }
  cout<<endl;
}
 
int main(){
    
    Node* node1 = new Node(10);
   // cout<< node1 -> data << endl;
    //cout<< node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    //print(head);

    InsertatTail(tail , 12);

    //print (head);

    InsertatTail(tail , 15);

    //print (head);

    InsertatPosition(tail,head,4, 18);
    print(head);

    tail->next = head->next;

    cout<<"head "<< head->data<<endl;
    cout<<"tail "<< tail->data<<endl;
    //print(head);

    if(detectLoop(head)){
      cout<<"Cycle is present"<<endl;
    }
    else{
      cout<<"Cycle is not present"<<endl;
    }

    //deleteNode(2, head, tail);
    //print(head);
    //cout<<"head "<< head->data<<endl;
    //cout<<"tail "<< tail->data<<endl;

return 0;
 
}