//
//  main.c
//  argc loop
//
//  Created by Andreas Hortlund on 2018-11-07.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    
    srand((int)time(NULL));
    
    int i;
    int a;
    a = rand();
    
    FILE *fp;
    fp = fopen("/Users/andreas/desktop/C-Dev/argc loop/argc loop/ctest","w");
    
    for (i = 0; i < a; i++) {
        
        fprintf(fp, "%d", i);
        
    }
        
    
    fclose(fp);
        
   
    
    return 1;
    
 
    
}
