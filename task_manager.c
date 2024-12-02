#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "task_manager.h"

void list_tasks() {
    system("ps aux");
}

void kill_task() {
    pid_t pid;
    printf("Enter the PID of the task to kill: ");
    scanf("%d", &pid);
    if (kill(pid, SIGKILL) == 0) {
        printf("Task with PID %d killed successfully.\n", pid);
    } else {
        printf("Failed to kill task with PID %d.\n", pid);
    }
}

void manage_tasks() {
    int choice;
    while (1) {
        printf("1. List Tasks\n");
        printf("2. Kill Task\n");
        printf("3. Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                list_tasks();
                break;
            case 2:
                kill_task();
                break;
            case 3:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
