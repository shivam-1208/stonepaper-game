#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number,word,a;
    srand(time(0));
    number=rand()%3+1;
  printf("press 3 for  stone  ,press 2 for paper ,press 1 for scissor\n");
    do{
        printf("enter the word\n");
        scanf("%d",&word);
        if(number==3&word==1){
            printf("its a stone\n");
            printf("Oops! you lose\n");
            
        }
        else if(number==3&word==2){
              printf("its a stone\n");
            printf("Hurrah! you won\n");
            
        }
        else if(number==2&word==3){
            printf("its a paper\n");
            printf("Oops! you lose\n");
            
        }
        else if(number==2&word==1){
             printf("its a paper\n");
            printf("Hurrah! you won\n");
            
        }
        else if(number==1&word==2){
            printf("its a scissor\n");
            printf("Oops! you lose\n");
            
        }
        else if(number==1&word==3){
            printf("its a scissor\n");
            printf("Hurrah! you won\n");
            
        }
        else if(number==word){
            printf("It's a tie\n");

        }
        else{
            printf("Please play again with valid input\n");
        }
        printf(" Press 1 for stop the game or Press 2 for continue the game \n");
        scanf("%d",&a);

    }while(a!=1);
    printf("****Thank you for playing the game****");
}