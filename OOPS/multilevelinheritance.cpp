#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<< " speaking " << endl;
    }
};

class Dog : public Animal{

};

class Germanshepherd : public Dog{

};
 
int main(){
   Germanshepherd g;
   g.speak();
 
return 0;
 
}