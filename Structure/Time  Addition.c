#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int num, n,x;
    printf("Enter number:");
    scanf("%d", &n);
    x=count(n);
    num=arm(n,x);
    if(num==n){
        printf("\n%d is Armstrong number",n);
    }else{
        printf("\n%d is not Armstrong number",n);
    }
    getch();
    return 0;
}
int arm(int n,int x){
    int rem;
    rem=n%10;
    if(n==0){
        return 0;
    }else{
        return (pow(rem,x)+arm(n/10,x));
    }
}
int count(int n){
    int c=0;
    while(n!=0){
        n=n/10;
        c++;
    }    
    return c;
}
