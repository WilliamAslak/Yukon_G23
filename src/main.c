#include <stdio.h>

#include "logic/printer.h"
#include "models/Card.h"

int main() {
    Card* lists[7] = {NULL};

    lists[0] = add_card(lists[0], "A", "S");
    lists[1] = add_card(lists[1], "K", "H");
    lists[2] = add_card(lists[2], "T", "C");
    lists[2] = add_card(lists[2], "J", "C");
    lists[3] = add_card(lists[3], "3", "D");
    lists[3] = add_card(lists[3], "4", "D");
    lists[4] = add_card(lists[4], "7", "H");

    print_cards(lists, 7);

    return 0;



}
