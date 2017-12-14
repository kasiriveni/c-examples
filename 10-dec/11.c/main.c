// program on enumeration type
#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main()
{
    enum week today;
    today = sunday;
    printf("Day %d",today+1);
    return 0;
}
