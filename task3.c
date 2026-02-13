#include<stdio.h>
int main(){
                int balance;
                printf("Enter your balance: ");
                scanf("%d",&balance);
                if(balance>0){
                                printf("positive balance.");
                }
                                else if(balance<0){
                                                printf("overdrawn.");
                                }
                                else{
                                                printf("zero balance.");
                                }
                return 0;
}
