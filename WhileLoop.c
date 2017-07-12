#include <stdio.h> 

int main(int args, char * argv[]) {
    int i = 0;
    while(i<args){
        printf("arg %d: %s\n",i,argv[i]);
        i++;
    };

    char *states[] = {"California", "Oregon","Washington","Texas"};

    int num_states = 4;
    i=0;
    while(i<num_states){
        printf("state %d: %s\n", i , states[i]);
        i++;
    };

    return 0;
}