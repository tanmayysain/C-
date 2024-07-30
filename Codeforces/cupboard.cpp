#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,l,r;
	int s1=0,s2=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;

		if(l==1){
          s1++;
		}

		if(r==1){
			s2++;
		}
    }

	if(s1*2>n){
		cnt+=n-s1;
	}
	else{
		cnt += s1;
	}

	if(s2*2>n){
		cnt += n-s2;
	}
    else{
		cnt += s2;
	}

	cout<< cnt<<endl;
    
 
return 0;
 
}