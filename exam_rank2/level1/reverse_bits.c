/*inverser l ordre des bits*/
#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    int     i = 0;
    int     reverse = 0;

    while( i < 8)
    {
        reverse = (reverse << 1) | (octet & 1);
        octet >>= 1;
        i++;
    }
    return (reverse);
}

int     main(void)
{
    unsigned char   octet = 0x41;
    unsigned char   reverse = reverse_bits(octet);

    printf("octet inverse : 0x%x\n", reverse);
    return(0);
}