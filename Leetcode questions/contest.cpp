// // #include<bits/stdc++.h>
// // using namespace std;
 
// // int main(){
// //     int n,m;
// //     cin>>n>>m;
// //     vector<int>nums1,nums2;
// //     for(int i=0;i<=n;i++){
// //         if(i%m==0){
// //             nums2.push_back(i);
// //         }
// //         else{
// //             nums1.push_back(i);
// //         }
// //     }
// //     cout<<(accumulate(nums1.begin(),nums1.end(),0))-(accumulate(nums2.begin(),nums2.end(),0))<<endl;
 
// // return 0;
 
// // }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	string s = "";
// 	for(auto i:arr){
// 	    s+=to_string(i);
// 	}
//     // string p = s[n]+s[n-1]+s[n-2];
// 	// int num = stoi(p);
 
//     cout<<s<<endl;
//     int x = s.length();
//     string p=s.substr(x-3,3);
//     //cout<<p<<endl;

//     int num = stoi(p);
//     int ans = stoi(s);

//     if(num%8 == 0){
//         cout<<s<<endl;
//     }
//     else{
//         if(n<8){
//             cout<<n+(8-n)<<endl;
//         }
//         else
//     }
//     }
// return 0;
 
// }