#include<stdio.h>


int main(int argc, char* args[]){

    int i=0;
    if(argc == 1){
        printf("you only have one argument. \n ");
    }else if(argc>1 && argc<4){
        printf("Here are your arguments: \n ");
        for(i=0;i<argc;i++){
            printf("%s \n", args[i]);
        }
        printf("\n");
    }else{
        printf("You have too many arguments. \n");
    }
}