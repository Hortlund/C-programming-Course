//
//  main.c
//  föreläsning 4 uppgift 6
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char string[100];
    char *c;
    printf("Skriv!\n");
    fgets(string, 100, stdin);
    printf("%s", string);
    
    for (c = string; *c; ++c) {
        if (*c >= 'A' && *c <= 'Z') {
            printf("%c", *c);
        }
    }
    
    return 0;
}
