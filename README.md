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
Inter Arrival Time Mean: 10  
Service Time Mean: 9
Total Number of Customers: 10
```

<hr>

## Check Simulation Data (Output)
The program produces `src/statistics.csv`, `src/event.csv` and `src/customer.csv` on a successful run. For the above input, sample output is:

### Tabular Output:
#### `src/statistics.csv`
| Total Customers | Total Simulation Time | Average Inter Arrival Time | Average Service Time | Average Queue Delay | Average Queue Length | Server Utilization |
| --------------- | --------------------- | -------------------------- | -------------------- | ------------------- | -------------------- | ------------------ |
| 10.000000       | 136.249576            | 10.610842                  | 8.748052             | 6.792108            | 0.498505             | 64.206084%         |



<hr>

#### `src/event.csv`
| Type      | Start Time | Customer | Server Status | Queue Size | Customer In System |
| --------- | ---------- | -------- | ------------- | ---------- | ------------------ |
| Arrival   | 4.174802   | 1        | Idle          | 0          | 0                  |
| Service   | 4.174802   | 1        | Busy          | 0          | 1                  |
| Departure | 11.730683  | 1        | Idle          | 0          | 0                  |
| Arrival   | 29.289969  | 2        | Idle          | 0          | 0                  |
| Service   | 29.289969  | 2        | Busy          | 0          | 1                  |
| Arrival   | 29.466160  | 3        | Busy          | 1          | 2                  |
| Departure | 29.940840  | 2        | Idle          | 1          | 1                  |
| Service   | 29.940840  | 3        | Busy          | 0          | 1                  |
| Departure | 32.003091  | 3        | Idle          | 0          | 0                  |
| Arrival   | 37.272871  | 4        | Idle          | 0          | 0                  |
| Service   | 37.272871  | 4        | Busy          | 0          | 1                  |
| Arrival   | 39.214842  | 5        | Busy          | 1          | 2                  |
| Departure | 50.451970  | 4        | Idle          | 1          | 1                  |
| Service   | 50.451970  | 5        | Busy          | 0          | 1                  |
| Arrival   | 50.981055  | 6        | Busy          | 1          | 2                  |
| Departure | 57.336250  | 5        | Idle          | 1          | 1                  |
| Service   | 57.336250  | 6        | Busy          | 0          | 1                  |
| Departure | 60.942991  | 6        | Idle          | 0          | 0                  |
| Arrival   | 81.014231  | 7        | Idle          | 0          | 0                  |
| Service   | 81.014231  | 7        | Busy          | 0          | 1                  |
| Departure | 84.940370  | 7        | Idle          | 0          | 0                  |
| Arrival   | 86.634322  | 8        | Idle          | 0          | 0                  |
| Service   | 86.634322  | 8        | Busy          | 0          | 1                  |
| Arrival   | 88.795877  | 9        | Busy          | 1          | 2                  |
| Arrival   | 106.108419 | 10       | Busy          | 2          | 3                  |
| Departure | 122.141359 | 8        | Idle          | 2          | 2                  |
| Service   | 122.141359 | 9        | Busy          | 1          | 2                  |
| Departure | 122.617015 | 9        | Idle          | 1          | 1                  |
| Service   | 122.617015 | 10       | Busy          | 0          | 1                  |
| Departure | 136.249576 | 10       | Idle          | 0          | 0                  |



<hr>

#### `src/customer.csv`
| Customer | Arrival Interval | Arrival Time | Service Start Time | Departure Time | Queue Delay Duration | Service Duration | Sojourn Time |
| -------- | ---------------- | ------------ | ------------------ | -------------- | -------------------- | ---------------- | ------------ |
| 1        | 4.174802         | 4.174802     | 4.174802           | 11.730683      | 0.000000             | 7.555881         | 7.555881     |
| 2        | 25.115166        | 29.289969    | 29.289969          | 29.940840      | 0.000000             | 0.650872         | 0.650872     |
| 3        | 0.176192         | 29.466160    | 29.940840          | 32.003091      | 0.474680             | 2.062251         | 2.536931     |
| 4        | 7.806711         | 37.272871    | 37.272871          | 50.451970      | 0.000000             | 13.179099        | 13.179099    |
| 5        | 1.941971         | 39.214842    | 50.451970          | 57.336250      | 11.237128            | 6.884281         | 18.121408    |
| 6        | 11.766213        | 50.981055    | 57.336250          | 60.942991      | 6.355195             | 3.606741         | 9.961936     |
| 7        | 30.033176        | 81.014231    | 81.014231          | 84.940370      | 0.000000             | 3.926139         | 3.926139     |
| 8        | 5.620091         | 86.634322    | 86.634322          | 122.141359     | 0.000000             | 35.507037        | 35.507037    |
| 9        | 2.161555         | 88.795877    | 122.141359         | 122.617015     | 33.345482            | 0.475656         | 33.821138    |
| 10       | 17.312542        | 106.108419   | 122.617015         | 136.249576     | 16.508596            | 13.632561        | 30.141157    |



<hr>



### Raw CSV Data:
#### `src/statistics.csv`
```csv
Total Customers,Total Simulation Time,Average Inter Arrival Time,Average Service Time,Average Queue Delay,Average Queue Length,Server Utilization
10.000000,136.249576,10.610842,8.748052,6.792108,0.498505,64.206084%
```
<hr>

#### `src/event.csv`
```csv
Type,Start Time,Customer,Server Status,Queue Size,Customer In System
Arrival,4.174802,1,Idle,0,0
Service,4.174802,1,Busy,0,1
Departure,11.730683,1,Idle,0,0
Arrival,29.289969,2,Idle,0,0
Service,29.289969,2,Busy,0,1
Arrival,29.466160,3,Busy,1,2
Departure,29.940840,2,Idle,1,1
Service,29.940840,3,Busy,0,1
Departure,32.003091,3,Idle,0,0
Arrival,37.272871,4,Idle,0,0
Service,37.272871,4,Busy,0,1
Arrival,39.214842,5,Busy,1,2
Departure,50.451970,4,Idle,1,1
Service,50.451970,5,Busy,0,1
Arrival,50.981055,6,Busy,1,2
Departure,57.336250,5,Idle,1,1
Service,57.336250,6,Busy,0,1
Departure,60.942991,6,Idle,0,0
Arrival,81.014231,7,Idle,0,0
Service,81.014231,7,Busy,0,1
Departure,84.940370,7,Idle,0,0
Arrival,86.634322,8,Idle,0,0
Service,86.634322,8,Busy,0,1
Arrival,88.795877,9,Busy,1,2
Arrival,106.108419,10,Busy,2,3
Departure,122.141359,8,Idle,2,2
Service,122.141359,9,Busy,1,2
Departure,122.617015,9,Idle,1,1
Service,122.617015,10,Busy,0,1
Departure,136.249576,10,Idle,0,0

```
<hr>

#### `src/customer.csv`
```csv
Customer,Arrival Interval,Arrival Time,Service Start Time,Departure Time,Queue Delay Duration,Service Duration,Sojourn Time
1,4.174802,4.174802,4.174802,11.730683,0.000000,7.555881,7.555881
2,25.115166,29.289969,29.289969,29.940840,0.000000,0.650872,0.650872
3,0.176192,29.466160,29.940840,32.003091,0.474680,2.062251,2.536931
4,7.806711,37.272871,37.272871,50.451970,0.000000,13.179099,13.179099
5,1.941971,39.214842,50.451970,57.336250,11.237128,6.884281,18.121408
6,11.766213,50.981055,57.336250,60.942991,6.355195,3.606741,9.961936
7,30.033176,81.014231,81.014231,84.940370,0.000000,3.926139,3.926139
8,5.620091,86.634322,86.634322,122.141359,0.000000,35.507037,35.507037
9,2.161555,88.795877,122.141359,122.617015,33.345482,0.475656,33.821138
10,17.312542,106.108419,122.617015,136.249576,16.508596,13.632561,30.141157
```
