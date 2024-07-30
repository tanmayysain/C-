#include<bits/stdc++.h>
using namespace std;
 
 class Hero{
  private:
  int health;

  public:
    //properties
    char *name;
    char level;
    static int timetocomplete;

    Hero(){
        cout<< "Simple Constructor Called " <<endl;
        name = new char[100];   
    }

    //Parameterised constructor
    Hero(int health) {
        //cout<< "this -->  "<< this << endl;
       this -> health = health;
    }

    Hero(int health, char level) {
       // cout<< "this -->  "<< this << endl;
        this -> level =  level;
       this -> health = health;
    }

    //copy constructor 
  //  Hero(Hero &temp){
    //cout << "Copy constructor called " << endl;
 //  this ->health = temp.health;
//   this -> level = temp.level;
 //    }


    void print(){
        cout<<endl;
        cout<<"Name: " << this -> name << " ,";
        cout<< "Health: " << this-> health <<" ,";
        cout<< " Level: " << this-> level << " ,";
        cout<< endl;
    }

    int gethealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this-> name , name);
    }

    ~Hero() {
        cout<<" Destructor bhai called " << endl;
    }

 };

 int Hero:: timetocomplete = 5;

int main(){
  cout << Hero :: timetocomplete << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 //static
 //Hero a;

 //dynamic
 //Hero *b = new Hero();
 //delete b;



/* Hero hero1;
hero1.sethealth(12);
hero1.setLevel('D');
char name[7] = "Babbar";
hero1.setName(name);

hero1.print();

//use default copy constructor
 Hero hero2(hero1);
 hero2.print(); 

 hero1.name[0] = 'G';
 hero1.print();

 hero2.print();

*/

/*Hero Tam( 70, 'C');
Tam.print();

//copy constructor 
Hero saket(Tam);
saket.print();*/

/* //object created statically
Hero tam(10);
//cout<<"Address of tam " << &tam<<endl;
tam.print();
 
 Hero *h = new Hero(11);
 h-> print();

 Hero temp(22,'H');
 temp.print();
*/

/*
 //static allocation
    Hero a;
    a.sethealth(89);
    a.setLevel('X');
    cout<<"Level is "<< a.getLevel()<<endl;
    cout<<"Health is "<<a.gethealth()<<endl;
// dynamic allocation
    Hero *b =  new Hero;

    b->sethealth(70);
    b-> setLevel('A');
    cout<<"Level is "<< b->getLevel()<<endl;
    cout<<"Health is "<< b->gethealth() <<endl;
    */
    

    //creation of object
   /*/ Hero tam;
    cout<<"Tam's health is " <<tam.gethealth()<<endl;
    tam.sethealth(70);
    //tam.health = 70;
    tam.level = 'A';

   cout<<"Health is : " << tam.health <<endl;
   cout<<"Level is : " << tam.level <<endl;


    //cout<< " Size : " << sizeof(h1)<<endl; */

return 0;
}