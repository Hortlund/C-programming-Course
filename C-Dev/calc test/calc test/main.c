//
//  main.c
//  calc test
//
//  Created by Andreas Hortlund on 2018-11-07.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, const char * argv[])
{
    char val[10];
    int tal1,tal2,multi,sum,plus;
    int check;
    
    printf("Skriv in ett tal please: ");
    scanf("%d",&tal1);
    printf("Skriv ett till tal: ");
    scanf("%d",&tal2);
    printf("Skriv multi eller plus: ");
    getchar();
    fgets(val, sizeof(val), stdin);
    printf("%s", val);
    
    check = strcmp(val, "Multi");
    check - 9;
    printf("%d", check);
    if (check){
        printf("ya");
       
        
    } else {
        printf("OKAY!");
    }
    
    return 1;
    
    
    
}
