#include<iostream>
#include<string.h>
using namespace std;
int main ()
{   
    int i;
    char str[50];
    cout << "Enter string : ";
    gets(str);
    for (i = 0; str[i] !='\0'; i++)
    {
	    if (str[i] == ' ')
                str[i]='%';
    }			
    cout << "Resultant string : " << str;
    return 0; 
}
