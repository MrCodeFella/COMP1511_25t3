// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

// struct node {
//     // The data stored in the node
//     int data;
//     // Pointer to the next node in the linked list
//     struct node *next;
// };

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// data = 5 head = NULL
struct node *insert_head(struct node *head, int data) {
    struct node *new_node = create_node(data);

    new_node->next = head;
    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    // TODO
    struct node *new_node = create_node(data);

    if (head == NULL) {
        // return insert_head(head, data);
        head = new_node;
        return head;
    }
    
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new_node;

    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // TODO
    struct node *curr = head;
    int count = 0;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }

    return count;
}
