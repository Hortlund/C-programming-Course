//
//  main.c
//  Grundläggande programmering
//
//  Created by Andreas Hortlund on 2018-11-06.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <time.h>




int main(int argc, const char * argv[])
{

    int tal;
    char fe[] = {"----------"};
    printf("Skriv ett tal please: ");
    scanf("%d",&tal);
    
    
    
    for (int i = 0; i < 3; i++) {
        switch (i) {
            case 1:
                printf("%d",tal);
                printf("%5d * %d", tal, tal);
                printf("%5d * %d * %d\n", tal, tal, tal);
                
                printf("%c %c %c",fe[3]);
                break;
            case 2:
                
            case 3:
                printf("          --------");
                
            default:
                break;
        }
    }
    
    
    
    return 1;
    
}
