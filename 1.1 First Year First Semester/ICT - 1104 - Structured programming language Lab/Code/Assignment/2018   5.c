/// 2018   5d

#include<stdio.h>

enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
}card;

int main(void)
{
    card = diamonds;
    printf("value = %d size of enum variable = %d bytes",card,sizeof(card));

    return 0;
}
