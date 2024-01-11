#include "dec2bin.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* dec2bin(int decimal){
char *binary = (char *) malloc(32);

if(!binary){
printf("Memory allocation failed\n");
exit(1);
}

int index = 0;
while(decimal >0){
binary[index++] = (decimal % 2 ) + '0';
decimal /= 2;
}

if (index == 0){
binary[index++] = '0';
}

binary[index] = '\0';

int start = 0;
int end = index -1;

while (start < end ){
char temp = binary[start];
binary[start] = binary[end];
binary[end] = temp;
start++;
end--;
}
return binary;
}

