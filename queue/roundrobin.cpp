#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Process
{
    int id;
    int burstTime;
    int remainingTime;
};

void roundRobin(vector<Process> &processes, int quantum)
{
    int time = 0;
    queue<Process> q;

    for (auto &process : processes)
    {
        q.push(process);
    }

    while (!q.empty())
    {
        Process current = q.front();
        q.pop();

        if (current.remainingTime > quantum)
        {
            time += quantum;
            current.remainingTime -= quantum;
            q.push(current);
        }
        else
        {
            time += current.remainingTime;
            current.remainingTime = 0;
            cout << "Process " << current.id << " finished at time " << time << endl;
        }
    }
}

int main()
{
    vector<Process> processes = {
        {1, 10, 10},
        {2, 5, 5},
        {3, 8, 8}};

    int quantum = 3;
    roundRobin(processes, quantum);

    return 0;
}