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
Input data after running `main`:

Sample Input
```text
Inter Arrival Time Mean: 4
Service Time Mean: 6
Total Number of Customers: 10
```

<hr>

## Check Simulation Data (Output)
The program produces `src/statistics.csv`, `src/event.csv` and `src/customer.csv` on a successful run. For the above input, sample output is:

### Tabular Output:
#### `src/statistics.csv`
| Total Customers | Total Simulation Time | Average Inter Arrival Time | Average Service Time | Average Queue Delay | Average Queue Length | Server Utilization |
| --------------- | --------------------- | -------------------------- | -------------------- | ------------------- | -------------------- | ------------------ |
| 10.000000       | 104.499340            | 4.854019                   | 9.154132             | 23.162624           | 2.216533             | 87.599907%         |


<hr>

#### `src/event.csv`
| Type      | Start Time | Customer | Server Status | Queue Size |
| --------- | ---------- | -------- | ------------- | ---------- |
| Arrival   | 12.958016  | 1        | Idle          | 0          |
| Service   | 12.958016  | 1        | Busy          | 0          |
| Arrival   | 13.423813  | 2        | Busy          | 1          |
| Arrival   | 21.207898  | 3        | Busy          | 2          |
| Departure | 27.192960  | 1        | Idle          | 2          |
| Service   | 27.192960  | 2        | Busy          | 1          |
| Arrival   | 34.042522  | 4        | Busy          | 2          |
| Arrival   | 36.666250  | 5        | Busy          | 3          |
| Arrival   | 39.621414  | 6        | Busy          | 4          |
| Arrival   | 39.806383  | 7        | Busy          | 5          |
| Departure | 41.712128  | 2        | Idle          | 5          |
| Service   | 41.712128  | 3        | Busy          | 4          |
| Arrival   | 41.877507  | 8        | Busy          | 5          |
| Arrival   | 43.990001  | 9        | Busy          | 6          |
| Arrival   | 48.540185  | 10       | Busy          | 7          |
| Departure | 56.111086  | 3        | Idle          | 7          |
| Service   | 56.111086  | 4        | Busy          | 6          |
| Departure | 57.794390  | 4        | Idle          | 6          |
| Service   | 57.794390  | 5        | Busy          | 5          |
| Departure | 58.596279  | 5        | Idle          | 5          |
| Service   | 58.596279  | 6        | Busy          | 4          |
| Departure | 59.481223  | 6        | Idle          | 4          |
| Service   | 59.481223  | 7        | Busy          | 3          |
| Departure | 63.245329  | 7        | Idle          | 3          |
| Service   | 63.245329  | 8        | Busy          | 2          |
| Departure | 83.000098  | 8        | Idle          | 2          |
| Service   | 83.000098  | 9        | Busy          | 1          |
| Departure | 103.668718 | 9        | Idle          | 1          |
| Service   | 103.668718 | 10       | Busy          | 0          |
| Departure | 104.499340 | 10       | Idle          | 0          |


<hr>

#### `src/customer.csv`
| Serial | Arrival Time | Queue Time | Service Start Time | Service Duration | Departure Time |
| ------ | ------------ | ---------- | ------------------ | ---------------- | -------------- |
| 1      | 12.958016    | 0.000000   | 12.958016          | 14.234944        | 27.192960      |
| 2      | 13.423813    | 13.769146  | 27.192960          | 14.519168        | 41.712128      |
| 3      | 21.207898    | 20.504230  | 41.712128          | 14.398958        | 56.111086      |
| 4      | 34.042522    | 22.068564  | 56.111086          | 1.683304         | 57.794390      |
| 5      | 36.666250    | 21.128140  | 57.794390          | 0.801889         | 58.596279      |
| 6      | 39.621414    | 18.974865  | 58.596279          | 0.884944         | 59.481223      |
| 7      | 39.806383    | 19.674840  | 59.481223          | 3.764105         | 63.245329      |
| 8      | 41.877507    | 21.367822  | 63.245329          | 19.754770        | 83.000098      |
| 9      | 43.990001    | 39.010098  | 83.000098          | 20.668620        | 103.668718     |
| 10     | 48.540185    | 55.128533  | 103.668718         | 0.830622         | 104.499340     |


<hr>


### Raw CSV Data:
#### `src/statistics.csv`
```csv
Total Customers,Total Simulation Time,Average Inter Arrival Time,Average Service Time,Average Queue Delay,Average Queue Length,Server Utilization
10.000000,104.499340,4.854019,9.154132,23.162624,2.216533,87.599907%
```
<hr>

#### `src/event.csv`
```csv
Type,Start Time,Customer,Server Status,Queue Size
Arrival,12.958016,1,Idle,0
Service,12.958016,1,Busy,0
Arrival,13.423813,2,Busy,1
Arrival,21.207898,3,Busy,2
Departure,27.192960,1,Idle,2
Service,27.192960,2,Busy,1
Arrival,34.042522,4,Busy,2
Arrival,36.666250,5,Busy,3
Arrival,39.621414,6,Busy,4
Arrival,39.806383,7,Busy,5
Departure,41.712128,2,Idle,5
Service,41.712128,3,Busy,4
Arrival,41.877507,8,Busy,5
Arrival,43.990001,9,Busy,6
Arrival,48.540185,10,Busy,7
Departure,56.111086,3,Idle,7
Service,56.111086,4,Busy,6
Departure,57.794390,4,Idle,6
Service,57.794390,5,Busy,5
Departure,58.596279,5,Idle,5
Service,58.596279,6,Busy,4
Departure,59.481223,6,Idle,4
Service,59.481223,7,Busy,3
Departure,63.245329,7,Idle,3
Service,63.245329,8,Busy,2
Departure,83.000098,8,Idle,2
Service,83.000098,9,Busy,1
Departure,103.668718,9,Idle,1
Service,103.668718,10,Busy,0
Departure,104.499340,10,Idle,0
```
<hr>

#### `src/customer.csv`
```csv
Serial,Arrival Time,Queue Time,Service Start Time,Service Duration,Departure Time
1,12.958016,0.000000,12.958016,14.234944,27.192960
2,13.423813,13.769146,27.192960,14.519168,41.712128
3,21.207898,20.504230,41.712128,14.398958,56.111086
4,34.042522,22.068564,56.111086,1.683304,57.794390
5,36.666250,21.128140,57.794390,0.801889,58.596279
6,39.621414,18.974865,58.596279,0.884944,59.481223
7,39.806383,19.674840,59.481223,3.764105,63.245329
8,41.877507,21.367822,63.245329,19.754770,83.000098
9,43.990001,39.010098,83.000098,20.668620,103.668718
10,48.540185,55.128533,103.668718,0.830622,104.499340
```
