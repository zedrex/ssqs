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
| 1   | Arrival    | 2.8          | 1               | Idle          | 0          |
| 2   | Service    | 2.8          | 1               | Busy          | 0          |
| 3   | Departure  | 3.8          | 1               | Idle          | 0          |
| 4   | Arrival    | 10           | 2               | Idle          | 0          |
| 5   | Service    | 10           | 2               | Busy          | 0          |
| 6   | Arrival    | 15.2         | 3               | Busy          | 1          |
| 7   | Departure  | 15.2         | 2               | Idle          | 1          |
| 8   | Service    | 15.2         | 3               | Busy          | 0          |
| 9   | Arrival    | 17.9         | 4               | Busy          | 1          |
| 10  | Arrival    | 21.3         | 5               | Busy          | 2          |
| 11  | Arrival    | 22.8         | 6               | Busy          | 3          |
| 12  | Departure  | 24.3         | 3               | Idle          | 3          |
| 13  | Service    | 24.3         | 4               | Busy          | 2          |
| 14  | Arrival    | 25.6         | 7               | Busy          | 3          |
| 15  | Departure  | 31.1         | 4               | Idle          | 3          |
| 16  | Service    | 31.1         | 5               | Busy          | 2          |
| 17  | Arrival    | 32.2         | 8               | Busy          | 3          |
| 18  | Arrival    | 37           | 9               | Busy          | 4          |
| 19  | Arrival    | 38.2         | 10              | Busy          | 5          |
| 20  | Departure  | 40.7         | 5               | Idle          | 5          |
| 21  | Service    | 40.7         | 6               | Busy          | 4          |
| 22  | Departure  | 43.1         | 6               | Idle          | 4          |
| 23  | Service    | 43.1         | 7               | Busy          | 3          |
| 24  | Departure  | 45.3         | 7               | Idle          | 3          |
| 25  | Service    | 45.3         | 8               | Busy          | 2          |
| 26  | Departure  | 49.5         | 8               | Idle          | 2          |
| 27  | Service    | 49.5         | 9               | Busy          | 1          |
| 28  | Departure  | 58.6         | 9               | Idle          | 1          |
| 29  | Service    | 58.6         | 10              | Busy          | 0          |
| 30  | Departure  | 59.3         | 10              | Idle          | 0          |

<hr>

### Raw CSV Data:
```csv
No.,Event Type,Current Time,Customer Serial,Server Status,Queue Size
1,Arrival,2.8,1,Idle,0
2,Service,2.8,1,Busy,0
3,Departure,3.8,1,Idle,0
4,Arrival,10,2,Idle,0
5,Service,10,2,Busy,0
6,Arrival,15.2,3,Busy,1
7,Departure,15.2,2,Idle,1
8,Service,15.2,3,Busy,0
9,Arrival,17.9,4,Busy,1
10,Arrival,21.3,5,Busy,2
11,Arrival,22.8,6,Busy,3
12,Departure,24.3,3,Idle,3
13,Service,24.3,4,Busy,2
14,Arrival,25.6,7,Busy,3
15,Departure,31.1,4,Idle,3
16,Service,31.1,5,Busy,2
17,Arrival,32.2,8,Busy,3
18,Arrival,37,9,Busy,4
19,Arrival,38.2,10,Busy,5
20,Departure,40.7,5,Idle,5
21,Service,40.7,6,Busy,4
22,Departure,43.1,6,Idle,4
23,Service,43.1,7,Busy,3
24,Departure,45.3,7,Idle,3
25,Service,45.3,8,Busy,2
26,Departure,49.5,8,Idle,2
27,Service,49.5,9,Busy,1
28,Departure,58.6,9,Idle,1
29,Service,58.6,10,Busy,0
30,Departure,59.3,10,Idle,0

```


# Todo:
- Create a proper exponential random number generator
- Add functionality to Log class to save all data and produce data insight