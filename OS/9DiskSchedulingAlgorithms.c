#include <stdio.h>
#include <stdlib.h>

void SCAN(int request[], int n, int head, int disk_size, int direction) {
    int total_seek_time = 0;
    int i;

    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (request[j] > request[j + 1]) {
                int temp = request[j];
                request[j] = request[j + 1];
                request[j + 1] = temp;
            }
        }
    }

    printf("Order of request servicing: ");

    int index;
    for (index = 0; index < n; index++) {
        if (request[index] >= head) break;
    }

    if (direction == 1) { // Moving up
        for (i = index; i < n; i++) {
            printf("%d -> ", request[i]);
            total_seek_time += abs(request[i] - head);
            head = request[i];
        }

        if (head != disk_size - 1) {
            total_seek_time += abs((disk_size - 1) - head);
            head = disk_size - 1;
            printf("%d -> ", head);
        }

        for (i = index - 1; i >= 0; i--) {
            printf("%d -> ", request[i]);
            total_seek_time += abs(request[i] - head);
            head = request[i];
        }
    } else { 
        for (i = index - 1; i >= 0; i--) {
            printf("%d -> ", request[i]);
            total_seek_time += abs(request[i] - head);
            head = request[i];
        }

        if (head != 0) {
            total_seek_time += head;
            head = 0;
            printf("0 -> ");
        }

        for (i = index; i < n; i++) {
            printf("%d -> ", request[i]);
            total_seek_time += abs(request[i] - head);
            head = request[i];
        }
    }

    printf("\nTotal seek time: %d\n", total_seek_time);
}

int main() {
    int n, head, disk_size, direction;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int request[n];
    printf("Enter the disk requests: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &request[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    printf("Enter the disk size: ");
    scanf("%d", &disk_size);

    printf("Enter the head movement direction (1 for up, 0 for down): ");
    scanf("%d", &direction);

    SCAN(request, n, head, disk_size, direction);
    return 0;
}
