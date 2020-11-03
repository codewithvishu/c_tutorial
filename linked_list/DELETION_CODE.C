#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void show_list(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// delete the first node

struct Node *Delete_first(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// delete at the index

struct Node *DeleteAtIndex(struct Node *head , int index)
{
    struct Node * p = head;
    struct Node * q = p->next;
    int i = 0;
    while(i < index-1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

// delete the last node 

struct Node * DeleteAtLast(struct Node *head)
{
    struct Node * p = head;
    struct Node * q = p->next;
    int i = 0;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("LINKED LIST BEFORE DELETION : \n");
    show_list(head);

    // printf("LINKED LIST AFTER DELETING FIRST NODE : \n");
    // head = Delete_first(head);
    // head = Delete_first(head);
    // show_list(head);


    // printf("DELETE AT THE INDEX : \n");
    // head = DeleteAtIndex(head,2);
    // show_list(head);

    printf("DELETE THE LAST NODE : \n");
    head = DeleteAtLast(head);
    show_list(head);

    return 0;
}