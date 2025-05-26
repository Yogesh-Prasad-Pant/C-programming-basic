// Input function : Those function which are used to provide or place data to primary memory or give data to a computer is calld input functon 
//Output function : Those function which are used to display or receive data from primary memeory or computer are called output function
//Unformatted functions: Those function which do not useses any format specfier or directly input and give output are called unformatted functionss
//for example of unformatted input function : 
//getch() get a character from keyboard but don not echo
//getchar() Reads a single character from standard input (waits for Enter)
//gets() gets the number of characters or string from key board until space or special character is entered.
//getche() get character from keyboard and echo (display in screen when enterered)
//Example of unformatted output functions
// putch()
//putchar()
//puts()
#include <stdio.h>
#include <conio.h> // Required for getch() and getche()

int main() {
    char ch1, ch2, str[100];

    printf("Press any key (getch): ");
    ch1 = getch();  // Reads a character without echoing it to the console
    printf("\nYou pressed: %c\n", ch1);

    printf("Press any key (getche): ");
    ch2 = getche(); // Reads a character and displays it immediately
    printf("\nYou pressed: %c\n", ch2);

    printf("\nEnter a string using gets(): ");
    gets(str); // Reads a string from input (dangerous due to buffer overflow risk)
    printf("You entered: %s\n", str);

    printf("\nPress any key to continue (getchar): ");
ch1 = getchar(); // Reads a single character from standard input (waits for Enter)
printf("\n   the value of ch1 %c \n",ch1);

// unformatted output function 
puts(str);
putchar(ch1);
printf("\n");
putch(ch2);
    return 0;
}
