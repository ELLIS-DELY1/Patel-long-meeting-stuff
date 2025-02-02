#include <stdio.h>

int main() {
    char name[50];
    int day, month, year;
    
    // Asking for user's name
    printf("Enter your name: ");
    scanf("%49s", name);
    
    // Asking for user's birthdate
    printf("Enter your birthdate (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    // Displaying the collected information
    printf("\nHello, %s", name);
    printf("Your birthdate is: %02d-%02d-%d\n", day, month, year);
    
    return 0;
}
