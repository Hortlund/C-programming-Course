//
//  main.c
//  Föreläsning 4 uppgift 3
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }
    
    printf("\n");
    for (c = 'Z'; c >= 'A'; c--) {
        printf("%c ", c);
    }
    
    
    return 0;
}
