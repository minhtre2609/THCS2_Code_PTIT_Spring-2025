#include <stdio.h>
#include <math.h>
#include <string.h>

int roman_char (char r)
{
    switch (r)
    {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default : return 0;
    }
}

int roman_to_decimal(char roman[]) 
{
    int n = strlen(roman);
    int total = 0;
    
    for (int i = 0; i < n; i++) 
    {
        int current_value = roman_char(roman[i]);
        int next_value = (i + 1 < n) ? roman_char(roman[i + 1]) : 0;
        
        if (current_value < next_value) 
        {
            total -= current_value;
        } 
        else 
        {
            total += current_value;
        }
    }
    return total;
}

int main() {
    int t;
	scanf ("%d", &t);
																																	 
	while (t--)
	{
		char roman[20];
        scanf("%s", roman); 
        printf("%d\n", roman_to_decimal(roman));
	} 

    return 0;
}
