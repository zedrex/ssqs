# Single Server Queuing System (C++ Simulation)


# Usage
## Compile and Run:
```bash
git clone https://www.github.com/zedrex/ssqs.git
cd ssqs
cd src
make
./main
```
<hr>


## Set Simulation Parameters (Input)
In `src/input.in`, enter inter-arrival time mean, service time mean and customer limit (separated by space or newline):
```text
5 4 10
```

<hr>

## Check Simulation Data (Output)
The program produces `src/output.csv` on a successful run. For the above `input.in`, the output is:

### Tabular Output:
| No. | Event Type | Current Time | Customer Serial | Server Status | Queue Size |
| --- | ---------- | ------------ | --------------- | ------------- | ---------- |
| 1   | Arrival    | 1.97944      | 1               | Idle          | 0          |
| 2   | Service    | 1.97944      | 1               | Busy          | 0          |
| 3   | Departure  | 4.1649       | 1               | Idle          | 0          |
| 4   | Arrival    | 5.0042       | 2               | Idle          | 0          |
| 5   | Service    | 5.0042       | 2               | Busy          | 0          |
| 6   | Departure  | 5.90715      | 2               | Idle          | 0          |
| 7   | Arrival    | 14.8094      | 3               | Idle          | 0          |
| 8   | Service    | 14.8094      | 3               | Busy          | 0          |
| 9   | Departure  | 15.2707      | 3               | Idle          | 0          |
| 10  | Arrival    | 42.7834      | 4               | Idle          | 0          |
| 11  | Service    | 42.7834      | 4               | Busy          | 0          |
| 12  | Arrival    | 43.2376      | 5               | Busy          | 1          |
| 13  | Departure  | 43.6709      | 4               | Idle          | 1          |
| 14  | Service    | 43.6709      | 5               | Busy          | 0          |
| 15  | Departure  | 46.8539      | 5               | Idle          | 0          |
| 16  | Arrival    | 47.3823      | 6               | Idle          | 0          |
| 17  | Service    | 47.3823      | 6               | Busy          | 0          |
| 18  | Departure  | 49.7028      | 6               | Idle          | 0          |
| 19  | Arrival    | 56.6407      | 7               | Idle          | 0          |
| 20  | Service    | 56.6407      | 7               | Busy          | 0          |
| 21  | Arrival    | 57.9584      | 8               | Busy          | 1          |
| 22  | Departure  | 59.9565      | 7               | Idle          | 1          |
| 23  | Service    | 59.9565      | 8               | Busy          | 0          |
| 24  | Departure  | 66.8152      | 8               | Idle          | 0          |
| 25  | Arrival    | 72.7181      | 9               | Idle          | 0          |
| 26  | Service    | 72.7181      | 9               | Busy          | 0          |
| 27  | Departure  | 75.107       | 9               | Idle          | 0          |
| 28  | Arrival    | 75.2946      | 10              | Idle          | 0          |
| 29  | Service    | 75.2946      | 10              | Busy          | 0          |
| 30  | Departure  | 76.8139      | 10              | Idle          | 0          |

<hr>

### Raw CSV Data:
```csv
No.,Event Type,Current Time,Customer Serial,Server Status,Queue Size
1,Arrival,1.97944,1,Idle,0
2,Service,1.97944,1,Busy,0
3,Departure,4.1649,1,Idle,0
4,Arrival,5.0042,2,Idle,0
5,Service,5.0042,2,Busy,0
6,Departure,5.90715,2,Idle,0
7,Arrival,14.8094,3,Idle,0
8,Service,14.8094,3,Busy,0
9,Departure,15.2707,3,Idle,0
10,Arrival,42.7834,4,Idle,0
11,Service,42.7834,4,Busy,0
12,Arrival,43.2376,5,Busy,1
13,Departure,43.6709,4,Idle,1
14,Service,43.6709,5,Busy,0
15,Departure,46.8539,5,Idle,0
16,Arrival,47.3823,6,Idle,0
17,Service,47.3823,6,Busy,0
18,Departure,49.7028,6,Idle,0
19,Arrival,56.6407,7,Idle,0
20,Service,56.6407,7,Busy,0
21,Arrival,57.9584,8,Busy,1
22,Departure,59.9565,7,Idle,1
23,Service,59.9565,8,Busy,0
24,Departure,66.8152,8,Idle,0
25,Arrival,72.7181,9,Idle,0
26,Service,72.7181,9,Busy,0
27,Departure,75.107,9,Idle,0
28,Arrival,75.2946,10,Idle,0
29,Service,75.2946,10,Busy,0
30,Departure,76.8139,10,Idle,0
```


# Todo:
- Add functionality to Log class to save all data and produce data insight