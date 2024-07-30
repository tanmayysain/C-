#include<iostream>
using namespace std;
 //question 1 2d array(unique paths)
/*int main(){
    int arr[100][100] = {0};
	int n,m;
    cin>>n>>m;
    //for row
	for(int i=0;i<m;i++){
        arr[n-1][i]=1;
    }
   
    //for col
    for(int i=0;i<n;i++){
        arr[i][m-1]=1;
    }
    //  Print2DArray(arr,n,m);
    for(int row=n-2;row>=0;row--){
        for(int col=m-2;col>=0;col--){
            arr[row][col]=arr[row+1][col]+arr[row][col+1];
        }
    }
     int ans=arr[0][0];
     cout<<ans<<endl;
 }*/

 int main(){
    /*int n;
    cin>>n;
     int arr[n][n];
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }
     
     for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<< arr[i][j]<<" ";

        }
        cout<<endl;
        
    }*/
     int a,b;
    cin>>a>>b;
    int c=max(a,b);
    int d=min(a,b);
    int flag=0;
    if(c%d==0){
    while(true){
        if(c==d){
            flag=1;
            break;
        }
        if(c<d){
            break;
        }
        if(c%2==0){
            c=c/2;
        }
        else{
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}
