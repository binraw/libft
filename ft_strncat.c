char    *ft_strncat(char *dest, char *src, unsigned n)
{
    int i;
    int j;
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while ((j < n) && (src[j] != '\0'))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
