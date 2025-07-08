#include <stdio.h>

int head, a[20], i, distance, n, seektime;

int main() {
    // Input the initial head position
    printf("\nEnter Head position: ");
    scanf("%d", &head);

    // Input the number of disk requests
    printf("\nEnter number of disk requests: ");
    scanf("%d", &n);

    // Input the disk requests
    printf("\nEnter the disk requests: ");
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    // Set the first element as the head position
    a[0] = head;

    // Begin FCFS Disk Scheduling
    printf("\n\tFCFS DISK SCHEDULING\n\n");
    for (i = 0; i < n; i++) {
        distance = (a[i] > a[i + 1]) ? a[i] - a[i + 1] : a[i + 1] - a[i];
        printf("Head movement from %d to %d : %d\n", a[i], a[i + 1], distance);
        seektime += distance;
    }

    printf("\nTotal seek time is : %d\n", seektime);
    return 0;
}
