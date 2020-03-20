#include "revert_string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RevertString(char *str)
{
    int length=strlen(str);
    char temp = 0;
//    char *temp_str = malloc(sizeof(char) * length + 1);
//    for(int i=length; i>=0; i--)
//	{temp=length - i;
//	temp_str[i]=str[temp];}
//    for(int i=0; i<=length; i++)
//	{str[i] = temp_str[i];}
//    free(temp_str);
for (int i = 0; i < length/2; ++i) 
{
       temp = str[i];
       str[i] = str[length -1 - i];
       str[length -1 - i] = temp;
}
//temp = str[length-1];
//str[length-1] = str[0];
//str[0]=temp;
}
