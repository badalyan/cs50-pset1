#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void) {
    
    // Ask the user how much change there is
    float requestedChange;
    do {
        printf("Hey! How much do you owe in change? $");
        requestedChange = GetFloat(); 
    } while (requestedChange <= 0);
    
    
    
    // Make Calculation
    // Round the number to make sure there isn't any fancy business and convert to integer
    requestedChange = roundf(requestedChange * 100);
    int convertedChange = (int)requestedChange;
    
    // Create counter for total number of coins we'll show to user
    int totalCoins = 0;
    
    do {
        
        if (convertedChange >= 25) {
            totalCoins++;
            convertedChange = convertedChange - 25;
        } else if (convertedChange < 25 && convertedChange >= 10) {
            totalCoins++;
            convertedChange = convertedChange - 10;
        } else if (convertedChange < 10 && convertedChange >= 5) {
            totalCoins++;
            convertedChange = convertedChange - 5;
        } else {
            totalCoins++;
            convertedChange = convertedChange - 1;
        }
        
    } while (convertedChange > 0);
    
    
    // Print total coins for them
    printf("\n\nCool. Here's how many coins you'll need: %d\n", totalCoins);
    
    
    
}