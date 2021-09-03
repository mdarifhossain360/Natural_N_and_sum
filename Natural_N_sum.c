#include<stdio.h>
int main (){
	int num,store;
    printf("Enter your number :");
    scanf("%d",&num);
    printf("Your requested number are : ");
    for (int i=0;i<=num;i++){
        
        printf("\n%d\n",i);
        store=store+i;
        
    }
    printf("\nAnd Your total number is : %d",store);
    
	return 0;
}
