
// header file for Player Operations

// define the shared structures
typedef struct cricket {
    char name[30];
    char team_name[30];
    float batting_average;
} cricket_t;


// load the players into an array and return the pointer to the array
cricket_t* generate_player_array(int count);

// free the array generate
int free_player_array(cricket_t* player_array);

// sort the array
void sort_player_array(int count, cricket_t* player_array);

// display the array
void display_player_array(int count, cricket_t* player_array);
