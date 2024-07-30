#include<iostream>
using namespace std;

void reverse ( string &str , int i , int j){

    cout<<" call recieved for " << str << endl;

    if(i>j){
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse ( str , i ,j);
    
}
 
int main(){
    string name = "abcde" ;

    reverse( name , 0, name.length()-1);

     cout<< name << endl;

return 0;
}