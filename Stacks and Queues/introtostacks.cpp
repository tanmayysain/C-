#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<< "Stack Overflow" <<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<< "Stack Underflow" <<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<< "Stack is Empty" <<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }
};
 
int main(){
    Stack st(5);
    Stack st2(6);

    st.push(22);
    st.push(43);
    st.push(44);  
    st.push(22);
    st.push(43);
    // st.push(44);

    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);
    st2.push(5);
    st2.push(0);

    //st.swap(st2);

    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;
    


return 0;
 
}