#include <stdio.h>
#include <stdlib.h>
#include "task_manager.h"
#include "elf_viewer.h"

int main() {
    int choice;
    while (1) {
        printf("1. Task Manager\n");
        printf("2. ELF Viewer\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                manage_tasks();
                break;
            case 2:
                view_elf();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
