#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // Ask the user how high he wants the pyramid
    int height;
    
    do {
        printf("How high of a pyramid would you like? ");
        height = GetInt();
    } while (height > 23 || height < 0);
    
    
    // Run through loop and print pyramid on console
    for (int x = 2; x < height + 2; x++) {
       
          for (int space = 0; space <= height - x; space++) {
              printf(" ");
          }
           
          for (int hashtag = 0; hashtag < x; hashtag++) {
              printf("#");
          }

        printf("\n");
    }
    
    

}