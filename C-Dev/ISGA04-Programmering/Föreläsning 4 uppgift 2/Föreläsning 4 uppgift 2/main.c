//
//  main.c
//  Föreläsning 4 uppgift 2
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numbers = 0, sum = 0;
    while (sum <= 100) {
        printf("Add a number please:");
        scanf("%d",&numbers);
        sum += numbers;
    }
    printf("Sum = %d, latest number = %d", sum, numbers);
    
    
    return 0;
}
