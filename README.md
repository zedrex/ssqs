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
| 1   | Arrival    | 8.3          | 1               | 0             | 0          |
| 2   | Service    | 8.3          | 1               | 1             | 0          |
| 3   | Arrival    | 10.5         | 2               | 1             | 1          |
| 4   | Departure  | 15.8         | 1               | 0             | 1          |
| 5   | Service    | 15.8         | 2               | 1             | 0          |
| 6   | Arrival    | 17.6         | 3               | 1             | 1          |
| 7   | Departure  | 21.4         | 2               | 0             | 1          |
| 8   | Service    | 21.4         | 3               | 1             | 0          |
| 9   | Arrival    | 23.3         | 4               | 1             | 1          |
| 10  | Departure  | 26.1         | 3               | 0             | 1          |
| 11  | Service    | 26.1         | 4               | 1             | 0          |
| 12  | Departure  | 31.4         | 4               | 0             | 0          |
| 13  | Arrival    | 32.3         | 5               | 0             | 0          |
| 14  | Service    | 32.3         | 5               | 1             | 0          |
| 15  | Arrival    | 35.3         | 6               | 1             | 1          |
| 16  | Departure  | 38.5         | 5               | 0             | 1          |
| 17  | Service    | 38.5         | 6               | 1             | 0          |
| 18  | Arrival    | 39.2         | 7               | 1             | 1          |
| 19  | Departure  | 42.9         | 6               | 0             | 1          |
| 20  | Service    | 42.9         | 7               | 1             | 0          |
| 21  | Arrival    | 46.4         | 8               | 1             | 1          |
| 22  | Arrival    | 49.2         | 9               | 1             | 2          |
| 23  | Departure  | 50.4         | 7               | 0             | 2          |
| 24  | Service    | 50.4         | 8               | 1             | 1          |
| 25  | Departure  | 51.4         | 8               | 0             | 1          |
| 26  | Service    | 51.4         | 9               | 1             | 0          |
| 27  | Arrival    | 57.3         | 10              | 1             | 1          |
| 28  | Departure  | 59.9         | 9               | 0             | 1          |
| 29  | Service    | 59.9         | 10              | 1             | 0          |
| 30  | Departure  | 68.4         | 10              | 0             | 0          |

<hr>

### Raw CSV Data:
```csv
No.,Event Type,Current Time,Customer Serial,Server Status,Queue Size
1,Arrival,8.3,1,0,0
2,Service,8.3,1,1,0
3,Arrival,10.5,2,1,1
4,Departure,15.8,1,0,1
5,Service,15.8,2,1,0
6,Arrival,17.6,3,1,1
7,Departure,21.4,2,0,1
8,Service,21.4,3,1,0
9,Arrival,23.3,4,1,1
10,Departure,26.1,3,0,1
11,Service,26.1,4,1,0
12,Departure,31.4,4,0,0
13,Arrival,32.3,5,0,0
14,Service,32.3,5,1,0
15,Arrival,35.3,6,1,1
16,Departure,38.5,5,0,1
17,Service,38.5,6,1,0
18,Arrival,39.2,7,1,1
19,Departure,42.9,6,0,1
20,Service,42.9,7,1,0
21,Arrival,46.4,8,1,1
22,Arrival,49.2,9,1,2
23,Departure,50.4,7,0,2
24,Service,50.4,8,1,1
25,Departure,51.4,8,0,1
26,Service,51.4,9,1,0
27,Arrival,57.3,10,1,1
28,Departure,59.9,9,0,1
29,Service,59.9,10,1,0
30,Departure,68.4,10,0,0
```


# Todo:
- Create a proper exponential random number generator
- Add functionality to Log class to save all data and produce data insight