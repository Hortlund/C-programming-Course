//
//  main.c
//  föreläsning 4 uppgift 4
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 1;
    int sum = 0, tal = 0;
    printf("Enter a number to see if its even or odd, add a zero to exit\n");
    while (i) {
        printf("Enter a number: ");
        scanf("%d",&tal);
        sum = tal % 2;
        if (sum == 1) {
            printf("Odd\n");
        } else if(tal == 0) {
            printf("quit\n");
            i = 0;
        } else {
            printf("Even\n");
        }
    }
    
    return 0;
}
