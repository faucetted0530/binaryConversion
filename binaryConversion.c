#include <stdio.h>
#include <stdlib.h>
#include "bin2dec.h"
#include "dec2bin.h"

int main(){
char choice;
do{
int option;
printf("Choose an option: \n:");
printf("1. Binary to decimal\n");
printf("2. Decimal to bianry\n");
printf("3. Quit\n");
scanf(" %d", &option);

if (option == 1){
char binary[32];
printf("Enter a binary number: ");
scanf("%s", binary);
int decimal = bin2dec(binary);
if (decimal != -1){
printf("Decimal: %d\n", decimal);
}
} else if (option == 2){
int decimal;
printf("Enter a decimal number: ");
scanf("%d", &decimal);
char *binary = dec2bin(decimal);
printf("binary: %s\n", binary);
free(binary);
} else if (option == 3) {
break;
}else {
printf("Invalid option\n");
}
printf("Do you want to continue (y/n)? ");\
scanf(" %c", &choice);
} while (choice == 'y' || choice == 'Y');
return 0;
}
