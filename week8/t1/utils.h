
// define common result enum
typedef enum
{
    FOUND_AND_SATISFIED,
    FOUND,
    NOT_FOUND
} bs_result;

void binarysearch(
        int* numbers,
        int list_length,
        int target,
        int start,
        int end,
        bool (*test)(int test_arg)
);

// insertion sort
void sort(int* numbers, int list_length);

