#include <stdio.h>
#include <cs50.h>

int main(void) {

    // Ask user how long they took a shower and store into INT type
    printf("How many minutes was your shower? ");
    int minutes = GetInt();

    // Make calculation; 1 minute equals 12 bottles of water
    int bottles = minutes * 12;

    // Print number of bottles
    printf("You've used %d bottles of water \n", bottles);


}
