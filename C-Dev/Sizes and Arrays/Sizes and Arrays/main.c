//
//  main.c
//  Sizes and Arrays
//
//  Created by Andreas Hortlund on 2018-11-05.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char full_Name[] = {'A', 'n', 'd', ' ', 'y', '\0'};
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Andy";
    
    
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The nuber of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    
    printf("The first areas is %d, the 2nd %d\n", areas[0], areas[1]);
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name char(char[]): %ld\n", sizeof(name));
    printf("the number of chars: %ld\n", sizeof(name) / sizeof(char));
    
    printf("The size of full_name (char[]): %ld\n", sizeof(full_Name));
    printf("The number of chars: %ld\n", sizeof(full_Name) / sizeof(char));
    
    printf("name=\"%s\" and full_Name=\"%s\"\n", name, full_Name);
    
    return 0;
}


