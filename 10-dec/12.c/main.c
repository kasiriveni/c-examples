// enum used in c because of this reason
#include <stdio.h>

enum suit {
    club = 0,
    diamonds = 2,
    hearts = 3,
    spades = 4
} card;

int main()
{
        card = club;
	printf("Size of enum variable = %d bytes", sizeof(card));
	return 0;
}
