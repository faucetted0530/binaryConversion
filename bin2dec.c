#include <string.h>
#include <stdio.h>
#include <math.h>
#include "bin2dec.h"


int bin2dec(const char *binary){
int decimal = 0;
int len = strlen(binary);

for(int i = 0; i < len; i++){
if (binary[i] == '1'){
decimal +=pow(2, len - 1 - i);
} else if (binary[i] != '0'){
printf ("Invalid binary input: %c\n", binary[i]);
return -1;
}
}
return decimal;
}
