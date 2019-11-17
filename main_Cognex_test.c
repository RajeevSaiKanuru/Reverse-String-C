/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

char *Reverse(char *pString)
{
    if (NULL == pString)
     return NULL;
     
    char *pStart = pString;
    char *pEnd = pStart + strlen(pString) - 1;
    
    while (pEnd>pStart)
    {
        char temp = *pStart;
        *pStart= *pEnd;
        *pEnd = temp;
        
        pStart ++;
        pEnd --;
        
    }
    
    return pString;
}
    
int main()
{
    char str[100] = "ABCD";
    printf("Initial: %s\n", str);
    printf("Final: %s\n", Reverse(str));
    if(!strcmp(str, "DCBA"))
    printf("Hello World");

    return 0;

}