//
//  main.c
//  Uppgifter föreläsning 4
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
        double numbers = 0, sum = 0, sqr = 0;
        printf("End with \"N\" \nEnter numbers: \n");
        while(scanf("%lf", &numbers) == 1) {
            printf("Enter numbers: ");
            sum += numbers;
            sqr = sqrt(sum);
        }
        printf("\n %.2lf \n %.2lf \n", sum, sqr);
    
    return 1;
    }

