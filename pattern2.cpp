#include<iostream>
using namespace std;
 
int main(){
    //question 1;
  /* int n;
   cin>>n;
  int i=1;
while (i<=3)
{
int j=1;
while (j<=n)
{
    cout<<j;
j=j+1;

}
cout<<endl;
i=i+1;
}

//question 2;

int n;
   cin>>n;
  int i=1;
while (i<=3)
{
int j=1;
while (j<=n)
{
    cout<<n-j+1;
j=j+1;

}
cout<<endl;
i=i+1;
}

//question 3;

int n;
cin>>n;

int i=1;
int count=1;
while (i<=n)
{
    int j=1;

    while (j<=n)
    {
        cout<<count<<" ";
        count= count+1;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
    
}

//question 4;

int n;
cin>>n;
int row=1;
while (row<=n)
{
int col=1;
while (col<=row)
{
    cout<<"*";
    col=col+1;

}
cout<<endl;
row=row+1;

}

//question 5 ;

int n;
cin>>n;
int row=1;
while (row<=n)
{
   int col= 1;
   while (col<=row)
   {
       cout<<row;
       col=col+1;

   }
   cout<<endl;
   row=row+1;

}


//question 6;

int n;
cin>>n;
int row=1;
int count=1;

while (row<=n)
{
   int col= 1;
   while (col<=row)
   {
       cout<<count<<" ";
       count=count+1;
       col=col+1;

   }
   cout<<endl;
   row=row+1;

}

//question 7;

int n;
cin>>n;
int row=1;

while (row<=n)
{
   int col= 1;
   int value = row;

   while (col<=row)
   {
       cout<<value<<" ";
       value= value+1;
       col=col+1;

   }
   cout<<endl;
   row=row+1;

}

//question 8;

int n;
cin>>n;
int row=1;
while (row<=n)
{
    int col=1;
    while(col<=n){

char ch= 'A'+row-1;
cout<<ch;
col=col+1;


    }

    cout<<endl;
    row = row+1;

}

//question 9;

int n ;
cin>>n;
 
 int i =1;
 while (i<=n)
 {
     int j=1;
     while (j<=n)
     {
char ch='A'+j-1;
cout<<ch;
j=j+1;
     }
     cout<< endl;
     i=i+1;

 }


 //question 10;

  int n;
  cin>>n;

  int row=1;
  while (row<=n)
  {
    int col=1;
    while (col<=n)
    {
 char ch ='A'+row+col-2;
 cout<<ch<<" ";
 col=col+1;
    }
    cout<<endl;
    row=row+1;
  }

  //question 11;

   int n;
  cin>>n;

  int row=1;
  while (row<=n)
  {
    int col=1;
    while (col<=row)
    {
 char ch ='A'+row -1;
 cout<<ch<<" ";
 col=col+1;
    }
    cout<<endl;
    row=row+1;
  }

  //question 12;

  int n;
  cin>>n;

  int i=1;
  while (i<=n)
  {
      int j=1;
      while (j<=i)
      {
         char ch = 'A'+i+j-2;
         
        cout<<ch<<" ";
        j=j+1;

      }
      cout<<endl;
      i=i+1;

  }

  //question 13;


  int n ;
   cin>>n;

   int i=1;
    while (i<=n)
    {
        int j =1;
        char start='A'+n-i;
        while (j<=i)
        {
            cout<<start;
            start = start + 1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

    }


    //question 14;

    int n ;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int space= n-i;
        while(space){
cout<<" ";
space= space-1;

        }
int j=1;
while (j<=i)
{
cout<<"*";
j=j+1;

}
cout<<endl;
i=i+1;

    }*/

    int n;
    cin>>n;
    int i =1;
    while (i<=n)
    {
        int space =n-i;
        while (space)
        {
            cout<<" ";
            
            space= space -1;

        }
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j=j+1;

        }
        int start= i-1;
        while (start)
        {
            cout<<start;
            start=start-1;

        }
        cout<<endl;
        i=i+1;

    }
    
    
    
  
  
    
    
}