#include<iostream>
using namespace std;

bool checkpalindrome( string str , int i, int j){

    if(i>j){
        return true ;
    }

    if(str[i] != str[j])
  {  return false ;
  }
    else{
        return checkpalindrome(str , i+1, j-1);
    }
}
 
int main(){
    string name = "babbab";

    cout<< name << endl;

    bool ispalindrome = checkpalindrome ( name, 0 , name.length()-1 );
    
    if(ispalindrome){
        cout<<" It is a palindrome" << endl;
    }

    else{
        cout<< "It is not a palindrome" << endl;
}
return 0;
}