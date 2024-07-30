#include<bits/stdc++.h>
using namespace std;

#define f(x) 1/(1+pow(x,2))
 
int main(){
    float lower, upper, integration=0.0,stepsize,k;
    int i, subinterval;
    printf("enter the lower limit of integration:");
    scanf("%f",&lower);
    printf("enter the upper limit of integration:");
    scanf("%f",&upper);
    printf("enter the number of subinterval:");
    scanf("%f",&subinterval);

    stepsize=(upper-lower)/subinterval;
    integration=f(lower)+f(upper);
    for(i=1;i<=subinterval-1;i++){
        k=lower+i*stepsize;
        if(i%3==0){
        integration=integration + 2*f(k);
        }
        else{
            integration=integration + 3*f(k);
        }
    }
    integration = integration * stepsize*3/8;
    printf("the required value of integration: %.3f",integration);

return 0;
 
}