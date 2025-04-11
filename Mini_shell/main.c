#include <stdio.h>
#include <stdlib.h>


int main() {
    char command[100];
    char exit[4];

    do
    {
        printf("Mini Shell > ");
        scanf("%s", command);
        
        if (command == "exit" || command == "Exit" || command == "EXIT") {
            printf("Saindo do Mini Shell...\n");
            exit[4] = command;
            break;
        } else if (command == "help" || command == "Help" || command == "HELP") {
            printf("Available commands:\n");
            
        } else {
            printf("Unknown command: %s\n", command);
        }

    } while (exit == "exit" || exit == "Exit" || exit == "EXIT");
     
    return 0;
}
