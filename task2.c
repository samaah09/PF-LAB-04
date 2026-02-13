#include<stdio.h>
int main(){
                int GB;
                printf("Enter the GB used: ");
                scanf("%d",&GB);
                if(GB<=50){
                                printf("basic user.");
                }
                                else if((GB>=51)&&(GB<=150)){
                                                printf("standard user.");
                                }
                                else{
                                                printf("heavy user.");
                                }
                return 0;
}
