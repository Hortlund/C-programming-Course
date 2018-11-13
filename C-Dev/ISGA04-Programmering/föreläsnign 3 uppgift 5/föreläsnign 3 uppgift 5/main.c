//
//  main.c
//  föreläsnign 3 uppgift 5
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    
    double tal;
    srand((int)time(NULL));
    
    for (int i = 0; i < 30; i++) {
        tal = ((float)rand()/(float)RAND_MAX * 10) +1;
        printf("%.2lf \n", tal);
    }
    
    return 0;
}
