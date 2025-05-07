#include<stdio.h>

int main() {
    int n, i, time_quantum, t = 0, remaining;
    int arrival_time[10], burst_time[10], remaining_time[10], waiting_time[10], turnaround_time[10], completed[10] = {0};
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);
    remaining = n;

    for(i=0; i<n; i++) {
        printf("Process %d - Arrival Time: ", i+1);
        scanf("%d", &arrival_time[i]);
        printf("Process %d - Burst Time: ", i+1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &time_quantum);

    printf("\nProcess\tBurst Time\tTurnaround Time\tWaiting Time\n");

    int flag = 0;
    while (remaining > 0) {
        flag = 0;
        for (i = 0; i < n; i++) {
            if (remaining_time[i] > 0 && arrival_time[i] <= t) {
                flag = 1;
                if (remaining_time[i] <= time_quantum) {
                    t += remaining_time[i];
                    remaining_time[i] = 0;
                    turnaround_time[i] = t - arrival_time[i];
                    waiting_time[i] = turnaround_time[i] - burst_time[i];
                    total_wt += waiting_time[i];
                    total_tat += turnaround_time[i];
                    remaining--;

                    printf("%d\t%d\t\t%d\t\t%d\n", i+1, burst_time[i], turnaround_time[i], waiting_time[i]);
                } else {
                    t += time_quantum;
                    remaining_time[i] -= time_quantum;
                }
            }
        }

        // If no process has arrived yet, move time forward
        if (flag == 0)
            t++;
    }

    printf("\nAverage Waiting Time = %.2f", total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);

    return 0;
}
