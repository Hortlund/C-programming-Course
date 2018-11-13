//
//  main.c
//  For-Loops and arrays of strings
//
//  Created by Andreas Hortlund on 2018-11-06.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    
    int i = 0;
    
//    go through each string in argv
//    why am i skipping argv[0]?
    for (i = 1; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    char *states[] ={"California", "oregon", "boston", "Texas", NULL};
    
    int numStates = 4;
    
    for (i = 0; i < numStates; i++){
        printf("state %d: %s\n", i, states[i]);
        
    }
    printf("%i",NULL);
    
    return 1;
    
}
