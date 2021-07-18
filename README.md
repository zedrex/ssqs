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
| 1   | Arrival    | 1.6          | 1               | 0             | 0          |
| 2   | Service    | 1.6          | 1               | 1             | 0          |
| 3   | Arrival    | 5.3          | 2               | 1             | 0          |
| 4   | Departure  | 6            | 1               | 0             | 1          |
| 5   | Service    | 6            | 2               | 1             | 0          |
| 6   | Arrival    | 6.4          | 3               | 1             | 0          |
| 7   | Arrival    | 7.9          | 4               | 1             | 1          |
| 8   | Departure  | 11.6         | 2               | 0             | 2          |
| 9   | Service    | 11.6         | 3               | 1             | 1          |
| 10  | Arrival    | 15.7         | 5               | 1             | 1          |
| 11  | Departure  | 16.9         | 3               | 0             | 2          |
| 12  | Service    | 16.9         | 4               | 1             | 1          |
| 13  | Departure  | 17.5         | 4               | 0             | 1          |
| 14  | Service    | 17.5         | 5               | 1             | 0          |
| 15  | Arrival    | 18           | 6               | 1             | 0          |
| 16  | Departure  | 23.4         | 5               | 0             | 1          |
| 17  | Service    | 23.4         | 6               | 1             | 0          |
| 18  | Arrival    | 25.4         | 7               | 1             | 0          |
| 19  | Arrival    | 26.6         | 8               | 1             | 1          |
| 20  | Departure  | 30.6         | 6               | 0             | 2          |
| 21  | Service    | 30.6         | 7               | 1             | 1          |
| 22  | Arrival    | 36           | 9               | 1             | 1          |
| 23  | Arrival    | 37.6         | 10              | 1             | 2          |
| 24  | Departure  | 39.2         | 7               | 0             | 3          |
| 25  | Service    | 39.2         | 8               | 1             | 2          |
| 26  | Departure  | 42.1         | 8               | 0             | 2          |
| 27  | Service    | 42.1         | 9               | 1             | 1          |
| 28  | Departure  | 47.1         | 9               | 0             | 1          |
| 29  | Service    | 47.1         | 10              | 1             | 0          |
| 30  | Departure  | 56           | 10              | 0             | 0          |

<hr>

### Raw CSV Data:
```csv
No.,Event Type,Current Time,Customer Serial,Server Status,Queue Size
1,Arrival,1.6,1,0,0
2,Service,1.6,1,1,0
3,Arrival,5.3,2,1,0
4,Departure,6,1,0,1
5,Service,6,2,1,0
6,Arrival,6.4,3,1,0
7,Arrival,7.9,4,1,1
8,Departure,11.6,2,0,2
9,Service,11.6,3,1,1
10,Arrival,15.7,5,1,1
11,Departure,16.9,3,0,2
12,Service,16.9,4,1,1
13,Departure,17.5,4,0,1
14,Service,17.5,5,1,0
15,Arrival,18,6,1,0
16,Departure,23.4,5,0,1
17,Service,23.4,6,1,0
18,Arrival,25.4,7,1,0
19,Arrival,26.6,8,1,1
20,Departure,30.6,6,0,2
21,Service,30.6,7,1,1
22,Arrival,36,9,1,1
23,Arrival,37.6,10,1,2
24,Departure,39.2,7,0,3
25,Service,39.2,8,1,2
26,Departure,42.1,8,0,2
27,Service,42.1,9,1,1
28,Departure,47.1,9,0,1
29,Service,47.1,10,1,0
30,Departure,56,10,0,0
```


# Todo:
- Create a proper exponential random number generator
- Add functionality to Log class to save all data and produce data insight