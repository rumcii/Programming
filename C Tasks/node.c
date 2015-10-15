//Linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

void insertAfter(int);
void print();
void insertBefore(int);
void insertAnywhere(node* myNode, int, int);

struct Node* head;
struct Node* tail;

int main()
{
    head = NULL;
    tail = NULL;
    
    int i;
    int n;
    int x;
    
    printf("How many numbers: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &x);
        insertBefore(x);
        print();
    }
    
    printf("\n\n");
}

void insertAfter(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp -> data = n;
    temp -> next = NULL;    
    
    if (head == NULL) {
        head = temp;
    }
    else {
        tail -> next = temp;
    }
    tail = temp;
}

void print()
{
    struct Node* temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    
    printf("\n");
}

void insertBefore(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp -> data = n;
    temp -> next = NULL;
    
    if (head != NULL) {
        temp -> next = head;
    }
    
    head = temp;
}

void insertAnywhere(node *myNode, int n, int position)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp -> data = n;
    temp -> next = NULL;
    
    int i = 0;
    
    if (position > 0) {
        while (i <= position + 1) {
            myNode = myNode -> next;
            
            if (myNode == NULL && i < position) {
                printf("Linked list out of range.");
                break;
            }
        }
        temp -> next = myNode;
        
        while ((i = 0) <= position - 1) {
            myNode = myNode -> next;
        }
        
        myNode -> next = temp;
    }
    else {
        temp -> next = myNode;
    }
}
