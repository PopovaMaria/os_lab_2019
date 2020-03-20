#include "revert_string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RevertString(char *str)
{
    int length=strlen(str);
    char temp = 0;
for (int i = 0; i < length/2; ++i) 
{
       temp = str[i];
       str[i] = str[length -1 - i];
       str[length -1 - i] = temp;
}
}
