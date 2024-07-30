#include<stdio.h>
int A(int m, int n){
    if(m==0){
        return n+1;
    }
    else if ((m>0) && (n==0))
    {
        return A(m-1,1);
    }
    else if((m>0)&&(n>0)){
        return A(m-1, A(m,n-1));
    }
}
int main(){
    int x,y;
    printf("Enter value of X");
    scanf("%d",&x);
    printf("Enter value of Y");
    scanf("%d",&y);
    int ans;
    ans = A(x,y);
    printf("\n Answer is - %d", ans);

    return 0;
    
}