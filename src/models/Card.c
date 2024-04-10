// card.c
#include "card.h"

Card* add_card(Card* head, const char *rank, const char *suit) {
    Card* new_card = (Card*)malloc(sizeof(Card));
    if (!new_card) {
        fprintf(stderr, "Failed to allocate memory.\n");
        return head;
    }

    new_card->rank = strdup(rank);  // strdup allocates space and copies the string
    new_card->suit = strdup(suit);
    new_card->next = NULL;

    if (head == NULL) {
        head = new_card;
    } else {
        Card* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_card;
    }
    return head;
}

