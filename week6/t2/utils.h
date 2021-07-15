
typedef struct node {
    int priority;
    int data;
    struct node* next;
} node_t;

node_t* initialize_pqueue();
void enqueue(node_t* pqueue_head);
void dequeue(node_t* pqueue_head);
void display(node_t* pqueue_head);
void cleanup(node_t* pqueue_head);
