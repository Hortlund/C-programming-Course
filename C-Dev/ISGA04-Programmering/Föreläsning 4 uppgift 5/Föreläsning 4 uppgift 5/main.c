//
//  main.c
//  Föreläsning 4 uppgift 5
//
//  Created by Andreas Hortlund on 2018-11-13.
//  Copyright © 2018 Andreas Hortlund. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float brutto,netto;
    
    printf("Skriv din brutto inkomst: ");
    scanf("%f", &brutto);
    
    if (brutto <= 204000) {
        netto = brutto - (brutto * (1 - 0.3));
        printf("%.2f", netto);
    } else if (brutto > 204000){
        netto = brutto - (brutto * (1 - 0.5));
        printf("%.2f", netto);
    } else {
        printf("Något gick fel, gå hem");
    }
    
    return 0;
}
