#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void InsertLast(int);
void InsertBefore(int);
void InsertAnywhere(int, int);
void Delete(int);
void Print();
void reverse();

Node* head;
Node* tail;

main()
{
    head = NULL;
    tail = NULL;
    
    int n;
    int count;
    
    printf("Enter number of input: ");
    scanf("%d", &count);
    
    printf("\n");
    
    while (count > 0) {
        printf("Enter number: ");
        scanf("%d", &n);
        
        InsertLast(n);
        
        count--;
    }
    
    printf("\n");
    
    InsertBefore(5);
    InsertAnywhere(4, 1);

    Print();
    
    Delete(1);
    
    Print();
    
    reverse();
    
    Print();
}

void InsertLast(int n)
{
    Node* temp = (Node*)malloc(sizeof(Node));

    temp -> data = n;
    temp -> next = NULL;

    if (head == NULL && tail == NULL) {
        head = tail = temp;
        return;
    }
    
    tail -> next = temp;
    tail = temp;
}

void Print()
{
    Node* temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void InsertBefore(int n)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    
    temp -> data = n;
    temp -> next = NULL;
    
    if(head == NULL) {
        head = temp;
        return;
    }
    
    temp -> next = head;
    head = temp;
}

void InsertAnywhere(int n, int position)
{
    int i;
    
    Node* temp1 = (Node*)malloc(sizeof(Node));
    Node* temp2 = head;
    
    temp1 -> data = n;
    temp1 -> next = NULL;
    
    if (n == 1) {
        temp1 -> next = head;
        head = temp1;
        return;
    }
    
    for (i = 1; i < position; i++) {
        temp2 = temp2 -> next;
    }
    
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}

void Delete(int position)
{
    Node* temp1 = head;
    
    int i;
    
    for (i = 0; i < position - 1; i++) {
        temp1 = temp1 -> next;
    }
    
    Node* temp2 = temp1 -> next;
    temp1 -> next = temp2 -> next;
    
    free(temp2);
}

void reverse()
{
    Node* current = head;
    Node* prev = NULL;
    Node* next;
    
    while (current != NULL) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
}
