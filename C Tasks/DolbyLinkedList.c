//DolbyLinkedList

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} dolby;

void InsertAthead(int);
void InsertAtTail(int);
void Print();
void ReversePrint();
struct Node* GetNewNode(int);

dolby* head;

main()
{
    head = NULL;
    
    int i;
    int count;
    int n;
    printf("Enter number of inputs: ");
    scanf("%d", &count);
    printf("\n");
    
    for (i = 0; i < count; i++) {
        printf("Enter number: ");
        scanf("%d", &n);
        InsertAtTail(n);
    }
    InsertAthead(0);
    
    Print();
    ReversePrint();
}

struct Node* GetNewNode(int n)
{
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode -> data = n;
    NewNode -> next = NULL;
    NewNode -> prev = NULL;
    
    return NewNode;
}

void InsertAthead(int n)
{
    dolby* NewNode = GetNewNode(n);
    
    if (head == NULL) {
        head = NewNode;
        return;
    }
    
    head -> prev = NewNode;
    NewNode -> next = head;
    head = NewNode;
}

void InsertAtTail(int n)
{
    dolby* NewNode = GetNewNode(n);
    dolby* temp = head;
    
    if (head == NULL) {
        head = NewNode;
        return;
    }
    
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    
    temp -> next = NewNode;
    NewNode -> prev = temp;
}

void Print()
{
    dolby* temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void ReversePrint()
{
    dolby* temp = head;
    
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    
    printf("Reverse: ");
    
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> prev;
    }
    printf("\n");
}
