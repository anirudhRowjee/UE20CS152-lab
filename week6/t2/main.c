#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int priority;
    int data;
    struct node* next;
} node_t;

node_t* spawn_element()
{
    /*
     * function to create a new node and accept the priority value
     * as well as the Data value from the user
     */
    node_t* new_node = (node_t*)malloc(sizeof(node_t));

    printf("Enter the Data Value >> ");
    scanf("%d", &new_node->data);
    printf("Enter the Data Priority >> ");
    scanf("%d", &new_node->priority);
    new_node->next = NULL;
    return new_node;
}

// make the queue
node_t* initialize_pqueue()
{
    /*
     * function to initalize the priority queue with the first
     * element.
     */
    return spawn_element();
}


int main()
{
    int choice = 0;
    printf("Welcome To The Priority Queue Manager!\n");

    node_t* HEAD = NULL;
    node_t* temp = HEAD;

    while (choice != 4)
    {
        temp = HEAD;
        printf(
            "\nPick 1 to display, 2 to enqueue, 3 to dequeue, and 4 to exit.\n"
        );
        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
            {
                // function to print the priority queue

                if (temp == NULL)
                {
                    printf("The List is Empty!\n");
                    break;
                }

                printf("\nPriority Queue >> \n");
                while (temp != NULL)
                {
                    printf("D: %d | P: %d\n", temp->data, temp->priority);
                    temp = temp->next;
                }
                break;
            }

            case 2:
            {
                // insert based on highest priority first
                node_t* new_node;
                new_node = spawn_element();
                // basic null check - if head is null, just add the new element
                if (temp == NULL)
                {
                    HEAD = new_node;
                    break;
                }
                if (temp == HEAD)
                {
                    if (new_node->priority > temp->priority)
                    {
                        new_node->next = temp;
                        HEAD = new_node;
                        temp = HEAD;
                        break;
                    }
                    else {
                        // this loop will terminate on the last element
                        // if it hasn't been exited by then, we can assume
                        // the new node has the smallest value
                        while (temp->next != NULL)
                        {
                            // if this is true, we insert new_node before temp->next;
                            if (new_node->priority > temp->next->priority)
                            {
                                new_node->next = temp->next;
                                temp->next = new_node;
                                break;
                            }
                            else {
                                // check to see if we're at the last element - if so,
                                // we allocate the current element either befo
                                temp = temp->next;
                            }
                        }
                        // upon the exit without return, we will assign 
                        // new_node to temp->next
                        temp->next = new_node;
                    }
                }
                break;
            }

            case 3:
            {
                // function to remove the element at HEAD since we
                // inserted in sorted order based on priority
                if (temp == NULL)
                {
                    printf("Cannot Dequeue An Empty Priority Queue!\n");
                    break;
                }
                else {
                    node_t* runner = temp->next;
                    printf("Dequeueing (%d, %d)\n", temp->priority, temp->data);
                    free(temp);
                    // temp = NULL;
                    HEAD = runner;
                }
                break;
            }

            case 4:
            {
                // Function to cleanup the allocated memory
                if (HEAD == NULL)
                {
                    printf("The PQueue is Empty!\n");
                }
                node_t* runner = temp;
                while (temp != NULL)
                {
                    runner = temp->next;
                    free(temp);
                    temp = NULL;
                    temp = runner;
                }
                printf("Thank you for using the Linked List Manager!\n");
                break;
            }

            default:
                printf("Invalid Option!\n");
                break;
        }

    }

    return 0;
}
