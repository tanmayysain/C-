#include<bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height ;
    int weight;
    int age;

    public:
    int getAge(){
        return this-> age;
    }

  void setWeight(int w ){
        this->weight = w;
    }
};

class Male : private Human {

    public:
    string color;

    void sleep(){
        cout<<"male sleeping" << endl;
    }

    int getheight(){
        return this-> height;
    }
};
 
int main(){

    Male m1;
    cout<<m1.getheight()<<endl;
    
    /*Male object1;
    cout<< object1.age<<endl;
    cout<< object1.height<<endl;
    cout<< object1.weight<<endl;
    cout<< object1.color<<endl;

    object1.setWeight(85);
    cout<< object1.weight<<endl;
    object1.sleep();*/
 
return 0;
 
}