#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"



// load the players into an array and return the pointer to the array
cricket_t* generate_player_array(int count)
{
    cricket_t* cricketer_array = (cricket_t*)malloc(sizeof(cricket_t)*count);

    for (int i = 0; i < count; i++)
    {
        printf("Player %d >> \n", i+1);
        printf("Player Name >> ");
        scanf("%s", cricketer_array[i].name);
        printf("Player Team Name >> ");
        scanf("%s", cricketer_array[i].team_name);
        printf("Player Batting Average >> ");
        scanf("%f", &cricketer_array[i].batting_average);
    }

    return cricketer_array;
}

// free the array generate
int free_player_array(cricket_t* player_array)
{
    free(player_array);
    player_array = NULL;
    return 0;
}

// sort the array
void sort_player_array(int count, cricket_t* player_array)
{
    // implement bubble sort based on strcmp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (
                strcmp(
                    player_array[j].team_name, 
                    player_array[j+1].team_name
                ) >= 1
            )
            {
                cricket_t temp;
                temp = player_array[j];
                player_array[j] = player_array[j+1];
                player_array[j+1] = temp;
            }
        }
    }
}

// display the array
void display_player_array(int count, cricket_t* player_array)
{
    printf("\n----- PLAYERS -----\n");
    for (int i = 0; i < count; i++)
    {
        printf(
                "%s | %s | %f\n",
                player_array[i].name,
                player_array[i].team_name,
                player_array[i].batting_average
                );
    }
    printf("-------------------\n");
}
