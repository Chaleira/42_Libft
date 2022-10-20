//#include <stdio.h>
char *ft_strcpy(char *src, char *dest)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
/*
int main()
{
    char src[] = "chupamos cabron pedejo hij de um pinche";
    char dest[1];
    ft_strcpy(src, dest);
    printf("%s\n", dest);
}
*/