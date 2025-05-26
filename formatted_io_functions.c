#include <stdio.h>

int main() {
    int num;
    float price;
    char name[50];
    char ch;

    // Using formatted output (printf)
    printf("Using printf():\n");
    printf("Hello, I am learning C programming!\n");

    // Using unformatted output (puts)
    puts("Using puts():");
    puts("This is an example of unformatted output.");

    // Using putchar()
    printf("Using putchar():\n");
    putchar('A');
    putchar('B');
    putchar('C');
    putchar('\n');

    // Using formatted input (scanf)
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating-point number: ");
    scanf("%f", &price);

    // Clearing the newline character left by scanf
    while (getchar() != '\n'); 

    // Using unformatted input (getchar)
    printf("Enter a single character: ");
    ch = getchar(); // Reads one character
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    // Using safer unformatted input (fgets)
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Reads a full line safely
    puts("You entered:");
    puts(name);

    // Display formatted results
    printf("\nFormatted Output:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", price);
    printf("Character: %c\n", ch);
    printf("Name: %s", name);

    return 0;
}