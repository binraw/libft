int ft_strncmp(char *str1, char *str2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
    {
        if (str1[i] > str2[i])
        {
            return (1);
        }
        else if (str1[i] < str2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);
        
}