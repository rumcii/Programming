//Recursion

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void Print(struct Node*);
void ReversePrint(struct Node*);
void ReverseList(struct Node*);
void InsertAthead(int);
void Insert(struct Node*, int); 

struct Node* head;

main()
{
    head = NULL;
    
    int i;
    int count;
    int n;
    
    struct Node myNode = head;
    
    printf("Enter counter: ");
    scanf("%d", &count);
    
    for (i = 0; i < count; i++) {
        printf("Enter number: ");
        scanf("%d", &n);
        
        Insert(&myNode, n);
    }
    
    Print(&myNode);
    printf("\n");
}

void Print(struct Node* temp)
{
    if (temp == NULL) {
        return;
    }
    printf("%d ", temp -> data);
    Print(temp -> next);
}

void ReversePrint(struct Node* temp)
{
    if (temp == NULL) {
        return;
    }
    
    ReversePrint(temp -> next);
    printf("%d ", temp -> data);
    
}

void ReverseList(struct Node* temp)
{
    if (temp == NULL) {
        head = temp;
        return;
    }
    
    ReverseList(temp -> next);
    struct Node* temp2 = temp -> next;
    temp2 -> next = temp;
    temp -> next = NULL;
}

void Insert(struct Node* temp, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1 -> data = n;
    temp1 -> next = NULL;
    
    if (temp == NULL) {
        temp = temp1;
        return;
    }
    
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    
    temp -> next = temp1;
}
