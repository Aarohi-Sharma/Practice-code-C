#include <stdio.h>

struct Process {
    int process_id;
    int priority;
    int burst_time;
};

void priorityScheduling(struct Process processes[], int n) {
    int total_time = 0;
    int waiting_time[n], turnaround_time[n];
    waiting_time[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting_time[i] = processes[i - 1].burst_time + waiting_time[i - 1];
        total_time += waiting_time[i];
    }
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = processes[i].burst_time + waiting_time[i];
    }
    double avg_waiting_time = (double)total_time / n;
    double avg_turnaround_time = (double)(total_time + turnaround_time[n - 1]) / n;
    printf ("Process\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].process_id, processes[i].priority,
               processes[i].burst_time, waiting_time[i], turnaround_time[i]);
    }
    printf("Average Waiting Time: %.2lf\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2lf\n", avg_turnaround_time);
}

int main() 
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process processes[n];
    for (int i = 0; i < n; i++) {
        processes[i].process_id = i + 1;
        printf("Enter the priority for process %d: ", i + 1);
        scanf("%d", &processes[i].priority);
        printf("Enter the burst time for process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    priorityScheduling(processes, n);
    return 0;
}
