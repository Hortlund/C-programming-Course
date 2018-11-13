//
//  main.c
//  Föreläsning nånting
//
//  Created by Andreas Hortlund on 2018-11-12.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    
    int tkn, i;
    
    srand((int)time(NULL));
    
    for (i=1; i <=13; i++) {
        tkn=rand()%3;
        
        switch (tkn) {
            case 0:
                printf(" x\n");
                break;
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("  2\n");
                break;
                
            default:
                break;
        }
        
        //printf("%i ",tkn);
    }
    
    return 1;
    
}
