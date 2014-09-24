//
//  main.c
//  exercise3
//
//  Created by Adam Albarghouthi on 2014-06-09.
//  Copyright (c) 2014 Adam Albarghouthi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    
    int x;
    int y;
    int spaces;
    int enteredHeight;
    
    printf("choose a height for your zig-zag:");
    scanf("%d", &enteredHeight);

    
    y = enteredHeight;

    while (y > 0) {
        
        for (spaces = enteredHeight - y; spaces > 0; spaces--) {
            printf(" ");
        }
        
        for (x = 1 ; x < 2*y ; x++) {
            
            if (x == 1 || x == 2*y - 2) {
                printf("*");
            }
            printf(" ");
            
        }
        
        printf("\n");
        
        y--;
    
    }
    
}

