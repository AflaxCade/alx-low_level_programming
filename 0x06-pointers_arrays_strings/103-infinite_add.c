#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l1 = strlen(n1);
    int l2 = strlen(n2);
    int sum = 0;
    int carry = 0;

    if (l1 > size_r || l2 > size_r)
        return (0);

    for (i = l1 - 1, j = l2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        carry = sum / 10;
        sum %= 10;
        r[k] = sum + '0';
    }
    if (k > size_r)
        return (0);
    r[k] = '\0';
    for (i = 0, j = k - 1; i < j; i++, j--)
        swap_char(&r[i], &r[j]);
    return (r);
}
