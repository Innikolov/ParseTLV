#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct TLV {
//	char* Hexcode;
//	unsigned int T;
//	unsigned int L;
//	unsigned int V;
//};
//

char* removeSpace(char* str);
char* getline();


int main() 
{
    char* str = removeSpace(getline());
    unsigned int hex = atoi(str);  //Doesnt convert properly

    printf("Entered string is: %d", hex);

    return 0;
}

char* removeSpace(char* str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

char* getline() {

    char str[100], ch;
    int i;
    printf("Enter a string: ");
    i = 0;
    ch = getchar();

    while (ch != '\n')
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    return str;
}

//void tlv_parse(unsigned int tlv) 
//{
//	int i;
//	int count = 0;
//	int hex[50];
//	for (i = 0; i < sizeof(tlv); i++) {	
//
//		if (count == 1) 
//		{
//			hex[i - 1];
//		}
//
//		count++;
//	}
//}