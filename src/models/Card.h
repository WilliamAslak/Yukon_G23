// card.h
#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Card {
    char *rank;
    char *suit;
    struct Card *next;
} Card;

Card* add_card(Card* head, const char *rank, const char *suit);

#endif