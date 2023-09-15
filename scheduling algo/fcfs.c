#include <stdio.h>
#include <stdlib.h>
struct Process {
    int pid;         
    int arrivalTime; 
    int burstTime;   
};
void findWaitingTime(struct Process processes[], int n, int waitingTime[]) {
    waitingTime[0] = 0;
    for (int i = 1; i < n; i++) {
        waitingTime[i] = waitingTime[i - 1] + processes[i - 1].burstTime;
    }
}
void findTurnaroundTime(struct Process processes[], int n, int waitingTime[], int turnaroundTime[]) {
    for (int i = 0; i < n; i++) {
        turnaroundTime[i] = waitingTime[i] + processes[i].burstTime;
    }
}
void findAverageTime(struct Process processes[], int n) {
    int waitingTime[n], turnaroundTime[n];
    findWaitingTime(processes, n, waitingTime);
    findTurnaroundTime(processes, n, waitingTime, turnaroundTime);
    float totalWaitingTime = 0, totalTurnaroundTime = 0;
    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }
    printf("Average Waiting Time: %.2f\n", totalWaitingTime / n);
    printf("Average Turnaround Time: %.2f\n", totalTurnaroundTime / n);
}
int main() {
    int n; 
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process processes[n];
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &processes[i].arrivalTime);
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &processes[i].burstTime);
        processes[i].pid = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].arrivalTime > processes[j + 1].arrivalTime) {
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    printf("\nProcess Execution Order:\n");
    printf("Process\tArrival Time\tBurst Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\n", processes[i].pid, processes[i].arrivalTime, processes[i].burstTime);
    }
    findAverageTime(processes, n);
    return 0;
}
