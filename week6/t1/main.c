#include <stdio.h>
#include "utils.h"

int main()
{

    int count;

    printf("Enter the number of players >> ");
    scanf("%d", &count);

    // allocate space for all the players
    // read the user data for the players
    cricket_t* player_array = generate_player_array(count);

    // sort the player array on the basis of 
    sort_player_array(count, player_array);

    // display the sorted player array
    display_player_array(count, player_array);

    // free the array of players
    free_player_array(player_array);
    return 0;
}
