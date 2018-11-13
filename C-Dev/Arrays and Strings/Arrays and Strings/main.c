//
//  main.c
//  Arrays and Strings
//
//  Created by Andreas Hortlund on 2018-11-05.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int numbers[4] = { 0 };
    char name[5] = { 'a' };
    
    //Skriv ut dem raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
    
    printf("name: %s\n", name);
    
    //Setting up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    
    //Setting up the name
    name[0] = 'A';
    name[1] = 'N';
    name[2] = 'D';
    name[3] = 'Y';
    name[4] = '\0';
    
    //Print them initialized
    printf("numbers: %d %d %d %d\n",numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
    
    //Print the name array like a string
    printf("name: %s\n", name);
    
    //Another way to use name
    char *another = "Andy";
    
    printf("another: %s\n", another);
    
    printf("another each: %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4]);
    
    return 0;
}
