1.  
```sh
jacky@MacBook-Pro-2 cpu-sched-mlfq % ./mlfq.py -j 2 -m 10 -M 0 -n 2 -q 3 -c
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 2
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is   3
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is   3
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime   8 - ioFreq   0
  Job  1: startTime   0 - runTime   4 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 7 (of 8) ]
[ time 1 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 6 (of 8) ]
[ time 2 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 5 (of 8) ]
[ time 3 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 3 (of 4) ]
[ time 4 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 2 (of 4) ]
[ time 5 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 1 (of 4) ]
[ time 6 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 4 (of 8) ]
[ time 7 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 3 (of 8) ]
[ time 8 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 2 (of 8) ]
[ time 9 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 0 (of 4) ]
[ time 10 ] FINISHED JOB 1
[ time 10 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 1 (of 8) ]
[ time 11 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 0 (of 8) ]
[ time 12 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround  12
  Job  1: startTime   0 - response   3 - turnaround  10

  Avg  1: startTime n/a - response 1.50 - turnaround 11.00
```  
2.  課本有範例了，不模擬了  
3.  
```sh
jacky@MacBook-Pro-2 cpu-sched-mlfq % ./mlfq.py -l 0,50,0:0,50,0:0,50,0 -q 10 -n 1 -c
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 1
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime  50 - ioFreq   0
  Job  1: startTime   0 - runTime  50 - ioFreq   0
  Job  2: startTime   0 - runTime  50 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] JOB BEGINS by JOB 2
[ time 0 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 1 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 2 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 3 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 4 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 5 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 50) ]
[ time 6 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 50) ]
[ time 7 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 50) ]
[ time 8 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 50) ]
[ time 9 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 50) ]
[ time 10 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 11 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 12 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 13 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 14 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 15 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 50) ]
[ time 16 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 50) ]
[ time 17 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 50) ]
[ time 18 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 50) ]
[ time 19 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 50) ]
[ time 20 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 21 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 22 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 23 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 24 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 25 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 50) ]
[ time 26 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 50) ]
[ time 27 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 50) ]
[ time 28 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 50) ]
[ time 29 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 50) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 50) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 50) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 50) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 50) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 50) ]
[ time 40 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 41 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 42 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 43 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 44 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 45 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 50) ]
[ time 46 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 50) ]
[ time 47 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 50) ]
[ time 48 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 50) ]
[ time 49 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 50) ]
[ time 50 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 51 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 52 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 53 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 54 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 55 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 50) ]
[ time 56 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 50) ]
[ time 57 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 50) ]
[ time 58 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 50) ]
[ time 59 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 50) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 50) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 50) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 50) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 50) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 50) ]
[ time 70 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 71 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 72 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 73 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 74 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 75 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 50) ]
[ time 76 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 50) ]
[ time 77 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 50) ]
[ time 78 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 50) ]
[ time 79 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 50) ]
[ time 80 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 81 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 82 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 83 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 84 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 85 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 50) ]
[ time 86 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 50) ]
[ time 87 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 50) ]
[ time 88 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 50) ]
[ time 89 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 50) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 92 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 50) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 50) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 50) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 50) ]
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 50) ]
[ time 100 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 101 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 102 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 103 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 104 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 105 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 50) ]
[ time 106 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 50) ]
[ time 107 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 50) ]
[ time 108 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 50) ]
[ time 109 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 50) ]
[ time 110 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 111 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 112 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 113 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 114 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 115 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 50) ]
[ time 116 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 50) ]
[ time 117 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 50) ]
[ time 118 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 50) ]
[ time 119 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 50) ]
[ time 120 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 50) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 50) ]
[ time 127 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 50) ]
[ time 128 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 50) ]
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 50) ]
[ time 130 ] FINISHED JOB 0
[ time 130 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 131 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 132 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 133 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 134 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 135 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 50) ]
[ time 136 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 50) ]
[ time 137 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 50) ]
[ time 138 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 50) ]
[ time 139 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 50) ]
[ time 140 ] FINISHED JOB 1
[ time 140 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 141 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 142 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 143 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 144 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 145 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 50) ]
[ time 146 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 50) ]
[ time 147 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 50) ]
[ time 148 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 50) ]
[ time 149 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 50) ]
[ time 150 ] FINISHED JOB 2

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 130
  Job  1: startTime   0 - response  10 - turnaround 140
  Job  2: startTime   0 - response  20 - turnaround 150

  Avg  2: startTime n/a - response 10.00 - turnaround 140.00
```  
4.  
`./mlfq.py -l 0,1000,0:300,1000,99 -q 100 -n 3 -i 1 -S -c`(結果過長)  
5.  
```sh
jacky@MacBook-Pro-2 cpu-sched-mlfq % ./mlfq.py -l 0,200,0:0,100,5:0,100,5 -q 10 -n 3 -i 5 -B 100 -c
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 100
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 200 - ioFreq   0
  Job  1: startTime   0 - runTime 100 - ioFreq   5
  Job  2: startTime   0 - runTime 100 - ioFreq   5


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] JOB BEGINS by JOB 2
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 199 (of 200) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 198 (of 200) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 197 (of 200) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 196 (of 200) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 195 (of 200) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 194 (of 200) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 193 (of 200) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 192 (of 200) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 191 (of 200) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 190 (of 200) ]
[ time 10 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 11 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 98 (of 100) ]
[ time 12 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 97 (of 100) ]
[ time 13 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 96 (of 100) ]
[ time 14 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 95 (of 100) ]
[ time 15 ] IO_START by JOB 1
IO DONE
[ time 15 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 16 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 98 (of 100) ]
[ time 17 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 97 (of 100) ]
[ time 18 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 96 (of 100) ]
[ time 19 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 95 (of 100) ]
[ time 20 ] IO_START by JOB 2
IO DONE
[ time 20 ] IO_DONE by JOB 1
[ time 20 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 94 (of 100) ]
[ time 21 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 93 (of 100) ]
[ time 22 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 92 (of 100) ]
[ time 23 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 91 (of 100) ]
[ time 24 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 90 (of 100) ]
[ time 25 ] IO_START by JOB 1
IO DONE
[ time 25 ] IO_DONE by JOB 2
[ time 25 ] Run JOB 2 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 94 (of 100) ]
[ time 26 ] Run JOB 2 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 93 (of 100) ]
[ time 27 ] Run JOB 2 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 92 (of 100) ]
[ time 28 ] Run JOB 2 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 91 (of 100) ]
[ time 29 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 90 (of 100) ]
[ time 30 ] IO_START by JOB 2
IO DONE
[ time 30 ] IO_DONE by JOB 1
[ time 30 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 189 (of 200) ]
[ time 31 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 188 (of 200) ]
[ time 32 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 187 (of 200) ]
[ time 33 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 186 (of 200) ]
[ time 34 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 185 (of 200) ]
[ time 35 ] IO_DONE by JOB 2
[ time 35 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 184 (of 200) ]
[ time 36 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 183 (of 200) ]
[ time 37 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 182 (of 200) ]
[ time 38 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 181 (of 200) ]
[ time 39 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 180 (of 200) ]
[ time 40 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 89 (of 100) ]
[ time 41 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 88 (of 100) ]
[ time 42 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 87 (of 100) ]
[ time 43 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 86 (of 100) ]
[ time 44 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 85 (of 100) ]
[ time 45 ] IO_START by JOB 1
IO DONE
[ time 45 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 89 (of 100) ]
[ time 46 ] Run JOB 2 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 88 (of 100) ]
[ time 47 ] Run JOB 2 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 87 (of 100) ]
[ time 48 ] Run JOB 2 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 86 (of 100) ]
[ time 49 ] Run JOB 2 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 85 (of 100) ]
[ time 50 ] IO_START by JOB 2
IO DONE
[ time 50 ] IO_DONE by JOB 1
[ time 50 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 84 (of 100) ]
[ time 51 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 83 (of 100) ]
[ time 52 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 82 (of 100) ]
[ time 53 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 81 (of 100) ]
[ time 54 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 80 (of 100) ]
[ time 55 ] IO_START by JOB 1
IO DONE
[ time 55 ] IO_DONE by JOB 2
[ time 55 ] Run JOB 2 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 84 (of 100) ]
[ time 56 ] Run JOB 2 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 83 (of 100) ]
[ time 57 ] Run JOB 2 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 82 (of 100) ]
[ time 58 ] Run JOB 2 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 81 (of 100) ]
[ time 59 ] Run JOB 2 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 80 (of 100) ]
[ time 60 ] IO_START by JOB 2
IO DONE
[ time 60 ] IO_DONE by JOB 1
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 179 (of 200) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 178 (of 200) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 177 (of 200) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 176 (of 200) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 175 (of 200) ]
[ time 65 ] IO_DONE by JOB 2
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 174 (of 200) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 173 (of 200) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 172 (of 200) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 171 (of 200) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 170 (of 200) ]
[ time 70 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 100) ]
[ time 71 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 100) ]
[ time 72 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 100) ]
[ time 73 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 100) ]
[ time 74 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 100) ]
[ time 75 ] IO_START by JOB 1
IO DONE
[ time 75 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 100) ]
[ time 76 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 100) ]
[ time 77 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 100) ]
[ time 78 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 100) ]
[ time 79 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 100) ]
[ time 80 ] IO_START by JOB 2
IO DONE
[ time 80 ] IO_DONE by JOB 1
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 169 (of 200) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 168 (of 200) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 167 (of 200) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 166 (of 200) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 165 (of 200) ]
[ time 85 ] IO_DONE by JOB 2
[ time 85 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 164 (of 200) ]
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 163 (of 200) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 162 (of 200) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 161 (of 200) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 160 (of 200) ]
[ time 90 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 100) ]
[ time 91 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 100) ]
[ time 92 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 100) ]
[ time 93 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 100) ]
[ time 94 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 100) ]
[ time 95 ] IO_START by JOB 1
IO DONE
[ time 95 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 100) ]
[ time 96 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 100) ]
[ time 97 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 100) ]
[ time 98 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 100) ]
[ time 99 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 100) ]
[ time 100 ] IO_START by JOB 2
IO DONE
[ time 100 ] BOOST ( every 100 )
[ time 100 ] IO_DONE by JOB 1
[ time 100 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 159 (of 200) ]
[ time 101 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 69 (of 100) ]
[ time 102 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 158 (of 200) ]
[ time 103 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 157 (of 200) ]
[ time 104 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 156 (of 200) ]
[ time 105 ] IO_DONE by JOB 2
[ time 105 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 69 (of 100) ]
[ time 106 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 155 (of 200) ]
[ time 107 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 154 (of 200) ]
[ time 108 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 153 (of 200) ]
[ time 109 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 152 (of 200) ]
[ time 110 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 151 (of 200) ]
[ time 111 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 150 (of 200) ]
[ time 112 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 149 (of 200) ]
[ time 113 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 68 (of 100) ]
[ time 114 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 67 (of 100) ]
[ time 115 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 66 (of 100) ]
[ time 116 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 65 (of 100) ]
[ time 117 ] IO_START by JOB 1
IO DONE
[ time 117 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 68 (of 100) ]
[ time 118 ] Run JOB 2 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 67 (of 100) ]
[ time 119 ] Run JOB 2 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 66 (of 100) ]
[ time 120 ] Run JOB 2 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 65 (of 100) ]
[ time 121 ] IO_START by JOB 2
IO DONE
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 148 (of 200) ]
[ time 122 ] IO_DONE by JOB 1
[ time 122 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 64 (of 100) ]
[ time 123 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 63 (of 100) ]
[ time 124 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 62 (of 100) ]
[ time 125 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 61 (of 100) ]
[ time 126 ] IO_DONE by JOB 2
[ time 126 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 60 (of 100) ]
[ time 127 ] IO_START by JOB 1
IO DONE
[ time 127 ] Run JOB 2 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 64 (of 100) ]
[ time 128 ] Run JOB 2 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 63 (of 100) ]
[ time 129 ] Run JOB 2 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 62 (of 100) ]
[ time 130 ] Run JOB 2 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 61 (of 100) ]
[ time 131 ] Run JOB 2 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 60 (of 100) ]
[ time 132 ] IO_START by JOB 2
IO DONE
[ time 132 ] IO_DONE by JOB 1
[ time 132 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 59 (of 100) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 147 (of 200) ]
[ time 134 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 146 (of 200) ]
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 145 (of 200) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 144 (of 200) ]
[ time 137 ] IO_DONE by JOB 2
[ time 137 ] Run JOB 2 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 59 (of 100) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 143 (of 200) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 142 (of 200) ]
[ time 140 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 141 (of 200) ]
[ time 141 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 140 (of 200) ]
[ time 142 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 139 (of 200) ]
[ time 143 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 58 (of 100) ]
[ time 144 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 57 (of 100) ]
[ time 145 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 56 (of 100) ]
[ time 146 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 55 (of 100) ]
[ time 147 ] IO_START by JOB 1
IO DONE
[ time 147 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 58 (of 100) ]
[ time 148 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 57 (of 100) ]
[ time 149 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 56 (of 100) ]
[ time 150 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 55 (of 100) ]
[ time 151 ] IO_START by JOB 2
IO DONE
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 138 (of 200) ]
[ time 152 ] IO_DONE by JOB 1
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 137 (of 200) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 136 (of 200) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 135 (of 200) ]
[ time 155 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 134 (of 200) ]
[ time 156 ] IO_DONE by JOB 2
[ time 156 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 133 (of 200) ]
[ time 157 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 132 (of 200) ]
[ time 158 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 131 (of 200) ]
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 130 (of 200) ]
[ time 160 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 129 (of 200) ]
[ time 161 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 54 (of 100) ]
[ time 162 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 53 (of 100) ]
[ time 163 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 52 (of 100) ]
[ time 164 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 51 (of 100) ]
[ time 165 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 50 (of 100) ]
[ time 166 ] IO_START by JOB 1
IO DONE
[ time 166 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 54 (of 100) ]
[ time 167 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 53 (of 100) ]
[ time 168 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 52 (of 100) ]
[ time 169 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 51 (of 100) ]
[ time 170 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 50 (of 100) ]
[ time 171 ] IO_START by JOB 2
IO DONE
[ time 171 ] IO_DONE by JOB 1
[ time 171 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 128 (of 200) ]
[ time 172 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 127 (of 200) ]
[ time 173 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 126 (of 200) ]
[ time 174 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 125 (of 200) ]
[ time 175 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 124 (of 200) ]
[ time 176 ] IO_DONE by JOB 2
[ time 176 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 123 (of 200) ]
[ time 177 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 122 (of 200) ]
[ time 178 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 121 (of 200) ]
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 120 (of 200) ]
[ time 180 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 119 (of 200) ]
[ time 181 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 49 (of 100) ]
[ time 182 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 49 (of 100) ]
[ time 183 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 118 (of 200) ]
[ time 184 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 117 (of 200) ]
[ time 185 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 116 (of 200) ]
[ time 186 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 115 (of 200) ]
[ time 187 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 114 (of 200) ]
[ time 188 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 113 (of 200) ]
[ time 189 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 112 (of 200) ]
[ time 190 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 111 (of 200) ]
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 110 (of 200) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 109 (of 200) ]
[ time 193 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 48 (of 100) ]
[ time 194 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 47 (of 100) ]
[ time 195 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 46 (of 100) ]
[ time 196 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 45 (of 100) ]
[ time 197 ] IO_START by JOB 1
IO DONE
[ time 197 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 48 (of 100) ]
[ time 198 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 47 (of 100) ]
[ time 199 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 46 (of 100) ]
[ time 200 ] BOOST ( every 100 )
[ time 200 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 45 (of 100) ]
[ time 201 ] IO_START by JOB 2
IO DONE
[ time 201 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 108 (of 200) ]
[ time 202 ] IO_DONE by JOB 1
[ time 202 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 44 (of 100) ]
[ time 203 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 107 (of 200) ]
[ time 204 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 106 (of 200) ]
[ time 205 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 105 (of 200) ]
[ time 206 ] IO_DONE by JOB 2
[ time 206 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 104 (of 200) ]
[ time 207 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 103 (of 200) ]
[ time 208 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 102 (of 200) ]
[ time 209 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 101 (of 200) ]
[ time 210 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 100 (of 200) ]
[ time 211 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 99 (of 200) ]
[ time 212 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 98 (of 200) ]
[ time 213 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 43 (of 100) ]
[ time 214 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 42 (of 100) ]
[ time 215 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 41 (of 100) ]
[ time 216 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 40 (of 100) ]
[ time 217 ] IO_START by JOB 1
IO DONE
[ time 217 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 44 (of 100) ]
[ time 218 ] Run JOB 2 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 43 (of 100) ]
[ time 219 ] Run JOB 2 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 42 (of 100) ]
[ time 220 ] Run JOB 2 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 41 (of 100) ]
[ time 221 ] Run JOB 2 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 40 (of 100) ]
[ time 222 ] IO_START by JOB 2
IO DONE
[ time 222 ] IO_DONE by JOB 1
[ time 222 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 39 (of 100) ]
[ time 223 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 38 (of 100) ]
[ time 224 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 37 (of 100) ]
[ time 225 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 36 (of 100) ]
[ time 226 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 35 (of 100) ]
[ time 227 ] IO_START by JOB 1
IO DONE
[ time 227 ] IO_DONE by JOB 2
[ time 227 ] Run JOB 2 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 39 (of 100) ]
[ time 228 ] Run JOB 2 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 38 (of 100) ]
[ time 229 ] Run JOB 2 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 37 (of 100) ]
[ time 230 ] Run JOB 2 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 36 (of 100) ]
[ time 231 ] Run JOB 2 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 35 (of 100) ]
[ time 232 ] IO_START by JOB 2
IO DONE
[ time 232 ] IO_DONE by JOB 1
[ time 232 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 34 (of 100) ]
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 97 (of 200) ]
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 96 (of 200) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 95 (of 200) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 94 (of 200) ]
[ time 237 ] IO_DONE by JOB 2
[ time 237 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 93 (of 200) ]
[ time 238 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 92 (of 200) ]
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 91 (of 200) ]
[ time 240 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 90 (of 200) ]
[ time 241 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 89 (of 200) ]
[ time 242 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 88 (of 200) ]
[ time 243 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 33 (of 100) ]
[ time 244 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 32 (of 100) ]
[ time 245 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 31 (of 100) ]
[ time 246 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 30 (of 100) ]
[ time 247 ] IO_START by JOB 1
IO DONE
[ time 247 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 34 (of 100) ]
[ time 248 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 33 (of 100) ]
[ time 249 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 32 (of 100) ]
[ time 250 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 31 (of 100) ]
[ time 251 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 30 (of 100) ]
[ time 252 ] IO_START by JOB 2
IO DONE
[ time 252 ] IO_DONE by JOB 1
[ time 252 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 87 (of 200) ]
[ time 253 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 86 (of 200) ]
[ time 254 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 85 (of 200) ]
[ time 255 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 84 (of 200) ]
[ time 256 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 83 (of 200) ]
[ time 257 ] IO_DONE by JOB 2
[ time 257 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 82 (of 200) ]
[ time 258 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 81 (of 200) ]
[ time 259 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 80 (of 200) ]
[ time 260 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 79 (of 200) ]
[ time 261 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 78 (of 200) ]
[ time 262 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 29 (of 100) ]
[ time 263 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 28 (of 100) ]
[ time 264 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 27 (of 100) ]
[ time 265 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 26 (of 100) ]
[ time 266 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 25 (of 100) ]
[ time 267 ] IO_START by JOB 1
IO DONE
[ time 267 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 29 (of 100) ]
[ time 268 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 28 (of 100) ]
[ time 269 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 27 (of 100) ]
[ time 270 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 26 (of 100) ]
[ time 271 ] Run JOB 2 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 25 (of 100) ]
[ time 272 ] IO_START by JOB 2
IO DONE
[ time 272 ] IO_DONE by JOB 1
[ time 272 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 77 (of 200) ]
[ time 273 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 76 (of 200) ]
[ time 274 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 75 (of 200) ]
[ time 275 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 74 (of 200) ]
[ time 276 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 73 (of 200) ]
[ time 277 ] IO_DONE by JOB 2
[ time 277 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 72 (of 200) ]
[ time 278 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 71 (of 200) ]
[ time 279 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 70 (of 200) ]
[ time 280 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 69 (of 200) ]
[ time 281 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 68 (of 200) ]
[ time 282 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 24 (of 100) ]
[ time 283 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 24 (of 100) ]
[ time 284 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 23 (of 100) ]
[ time 285 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 22 (of 100) ]
[ time 286 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 21 (of 100) ]
[ time 287 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 20 (of 100) ]
[ time 288 ] IO_START by JOB 2
IO DONE
[ time 288 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 67 (of 200) ]
[ time 289 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 66 (of 200) ]
[ time 290 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 65 (of 200) ]
[ time 291 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 64 (of 200) ]
[ time 292 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 63 (of 200) ]
[ time 293 ] IO_DONE by JOB 2
[ time 293 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 62 (of 200) ]
[ time 294 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 61 (of 200) ]
[ time 295 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 60 (of 200) ]
[ time 296 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 59 (of 200) ]
[ time 297 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 58 (of 200) ]
[ time 298 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 23 (of 100) ]
[ time 299 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 22 (of 100) ]
[ time 300 ] BOOST ( every 100 )
[ time 300 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 21 (of 100) ]
[ time 301 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 19 (of 100) ]
[ time 302 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 57 (of 200) ]
[ time 303 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 20 (of 100) ]
[ time 304 ] IO_START by JOB 1
IO DONE
[ time 304 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 100) ]
[ time 305 ] Run JOB 2 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 17 (of 100) ]
[ time 306 ] Run JOB 2 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 16 (of 100) ]
[ time 307 ] Run JOB 2 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 15 (of 100) ]
[ time 308 ] IO_START by JOB 2
IO DONE
[ time 308 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 56 (of 200) ]
[ time 309 ] IO_DONE by JOB 1
[ time 309 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 55 (of 200) ]
[ time 310 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 54 (of 200) ]
[ time 311 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 53 (of 200) ]
[ time 312 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 52 (of 200) ]
[ time 313 ] IO_DONE by JOB 2
[ time 313 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 51 (of 200) ]
[ time 314 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 50 (of 200) ]
[ time 315 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 49 (of 200) ]
[ time 316 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 48 (of 200) ]
[ time 317 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 47 (of 200) ]
[ time 318 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 19 (of 100) ]
[ time 319 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 18 (of 100) ]
[ time 320 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 17 (of 100) ]
[ time 321 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 16 (of 100) ]
[ time 322 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 15 (of 100) ]
[ time 323 ] IO_START by JOB 1
IO DONE
[ time 323 ] Run JOB 2 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 14 (of 100) ]
[ time 324 ] Run JOB 2 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 13 (of 100) ]
[ time 325 ] Run JOB 2 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 12 (of 100) ]
[ time 326 ] Run JOB 2 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 11 (of 100) ]
[ time 327 ] Run JOB 2 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 10 (of 100) ]
[ time 328 ] IO_START by JOB 2
IO DONE
[ time 328 ] IO_DONE by JOB 1
[ time 328 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 14 (of 100) ]
[ time 329 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 13 (of 100) ]
[ time 330 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 12 (of 100) ]
[ time 331 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 11 (of 100) ]
[ time 332 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 46 (of 200) ]
[ time 333 ] IO_DONE by JOB 2
[ time 333 ] Run JOB 2 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 9 (of 100) ]
[ time 334 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 45 (of 200) ]
[ time 335 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 44 (of 200) ]
[ time 336 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 43 (of 200) ]
[ time 337 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 42 (of 200) ]
[ time 338 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 41 (of 200) ]
[ time 339 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 40 (of 200) ]
[ time 340 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 39 (of 200) ]
[ time 341 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 38 (of 200) ]
[ time 342 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 37 (of 200) ]
[ time 343 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 10 (of 100) ]
[ time 344 ] IO_START by JOB 1
IO DONE
[ time 344 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 8 (of 100) ]
[ time 345 ] Run JOB 2 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 7 (of 100) ]
[ time 346 ] Run JOB 2 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 6 (of 100) ]
[ time 347 ] Run JOB 2 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 5 (of 100) ]
[ time 348 ] IO_START by JOB 2
IO DONE
[ time 348 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 36 (of 200) ]
[ time 349 ] IO_DONE by JOB 1
[ time 349 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 35 (of 200) ]
[ time 350 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 34 (of 200) ]
[ time 351 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 33 (of 200) ]
[ time 352 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 32 (of 200) ]
[ time 353 ] IO_DONE by JOB 2
[ time 353 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 31 (of 200) ]
[ time 354 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 30 (of 200) ]
[ time 355 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 29 (of 200) ]
[ time 356 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 28 (of 200) ]
[ time 357 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 27 (of 200) ]
[ time 358 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 9 (of 100) ]
[ time 359 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 8 (of 100) ]
[ time 360 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 7 (of 100) ]
[ time 361 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 6 (of 100) ]
[ time 362 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 5 (of 100) ]
[ time 363 ] IO_START by JOB 1
IO DONE
[ time 363 ] Run JOB 2 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 4 (of 100) ]
[ time 364 ] Run JOB 2 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 3 (of 100) ]
[ time 365 ] Run JOB 2 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 2 (of 100) ]
[ time 366 ] Run JOB 2 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 1 (of 100) ]
[ time 367 ] Run JOB 2 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 0 (of 100) ]
[ time 368 ] FINISHED JOB 2
[ time 368 ] IO_DONE by JOB 1
[ time 368 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 26 (of 200) ]
[ time 369 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 25 (of 200) ]
[ time 370 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 24 (of 200) ]
[ time 371 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 23 (of 200) ]
[ time 372 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 22 (of 200) ]
[ time 373 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 21 (of 200) ]
[ time 374 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 20 (of 200) ]
[ time 375 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 19 (of 200) ]
[ time 376 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 18 (of 200) ]
[ time 377 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 17 (of 200) ]
[ time 378 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 4 (of 100) ]
[ time 379 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 3 (of 100) ]
[ time 380 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 2 (of 100) ]
[ time 381 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 1 (of 100) ]
[ time 382 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 16 (of 200) ]
[ time 383 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 15 (of 200) ]
[ time 384 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 14 (of 200) ]
[ time 385 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 13 (of 200) ]
[ time 386 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 12 (of 200) ]
[ time 387 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 11 (of 200) ]
[ time 388 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 10 (of 200) ]
[ time 389 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 9 (of 200) ]
[ time 390 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 8 (of 200) ]
[ time 391 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 7 (of 200) ]
[ time 392 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 0 (of 100) ]
[ time 393 ] FINISHED JOB 1
[ time 393 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 6 (of 200) ]
[ time 394 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 5 (of 200) ]
[ time 395 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 4 (of 200) ]
[ time 396 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 3 (of 200) ]
[ time 397 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 2 (of 200) ]
[ time 398 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 1 (of 200) ]
[ time 399 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 0 (of 200) ]
[ time 400 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 400
  Job  1: startTime   0 - response  10 - turnaround 393
  Job  2: startTime   0 - response  15 - turnaround 368

  Avg  2: startTime n/a - response 8.33 - turnaround 387.00
```  
6.  
```sh
jacky@MacBook-Pro-2 cpu-sched-mlfq % ./mlfq.py -l 0,50,5:0,50,5:0,50,5 -q 10 -n 3 -i 5 -S -I -c
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO True
OPTIONS iobump True


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime  50 - ioFreq   5
  Job  1: startTime   0 - runTime  50 - ioFreq   5
  Job  2: startTime   0 - runTime  50 - ioFreq   5


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] JOB BEGINS by JOB 2
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 5 ] IO_START by JOB 0
IO DONE
[ time 5 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 6 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 7 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 8 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 9 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 10 ] IO_START by JOB 1
IO DONE
[ time 10 ] IO_DONE by JOB 0
[ time 10 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 11 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 43 (of 50) ]
[ time 12 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 42 (of 50) ]
[ time 13 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 41 (of 50) ]
[ time 14 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 40 (of 50) ]
[ time 15 ] IO_START by JOB 0
IO DONE
[ time 15 ] IO_DONE by JOB 1
[ time 15 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 16 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 43 (of 50) ]
[ time 17 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 42 (of 50) ]
[ time 18 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 41 (of 50) ]
[ time 19 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 40 (of 50) ]
[ time 20 ] IO_START by JOB 1
IO DONE
[ time 20 ] IO_DONE by JOB 0
[ time 20 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 21 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 22 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 23 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 24 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 25 ] IO_START by JOB 0
IO DONE
[ time 25 ] IO_DONE by JOB 1
[ time 25 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 26 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 27 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 28 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 29 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 30 ] IO_START by JOB 1
IO DONE
[ time 30 ] IO_DONE by JOB 0
[ time 30 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 31 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 33 (of 50) ]
[ time 32 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 32 (of 50) ]
[ time 33 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 31 (of 50) ]
[ time 34 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 30 (of 50) ]
[ time 35 ] IO_START by JOB 0
IO DONE
[ time 35 ] IO_DONE by JOB 1
[ time 35 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 36 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 33 (of 50) ]
[ time 37 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 32 (of 50) ]
[ time 38 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 31 (of 50) ]
[ time 39 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 30 (of 50) ]
[ time 40 ] IO_START by JOB 1
IO DONE
[ time 40 ] IO_DONE by JOB 0
[ time 40 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 41 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 42 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 43 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 44 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 45 ] IO_START by JOB 0
IO DONE
[ time 45 ] IO_DONE by JOB 1
[ time 45 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 46 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 47 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 48 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 49 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 50 ] IO_START by JOB 1
IO DONE
[ time 50 ] IO_DONE by JOB 0
[ time 50 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 51 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 23 (of 50) ]
[ time 52 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 22 (of 50) ]
[ time 53 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 21 (of 50) ]
[ time 54 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 20 (of 50) ]
[ time 55 ] IO_START by JOB 0
IO DONE
[ time 55 ] IO_DONE by JOB 1
[ time 55 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 56 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 23 (of 50) ]
[ time 57 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 22 (of 50) ]
[ time 58 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 21 (of 50) ]
[ time 59 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 20 (of 50) ]
[ time 60 ] IO_START by JOB 1
IO DONE
[ time 60 ] IO_DONE by JOB 0
[ time 60 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 61 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 62 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 63 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 64 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 65 ] IO_START by JOB 0
IO DONE
[ time 65 ] IO_DONE by JOB 1
[ time 65 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 66 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 67 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 68 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 69 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 70 ] IO_START by JOB 1
IO DONE
[ time 70 ] IO_DONE by JOB 0
[ time 70 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 71 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 13 (of 50) ]
[ time 72 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 12 (of 50) ]
[ time 73 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 11 (of 50) ]
[ time 74 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 10 (of 50) ]
[ time 75 ] IO_START by JOB 0
IO DONE
[ time 75 ] IO_DONE by JOB 1
[ time 75 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 76 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 13 (of 50) ]
[ time 77 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 12 (of 50) ]
[ time 78 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 11 (of 50) ]
[ time 79 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 10 (of 50) ]
[ time 80 ] IO_START by JOB 1
IO DONE
[ time 80 ] IO_DONE by JOB 0
[ time 80 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 81 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 82 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 83 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 84 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 85 ] IO_START by JOB 0
IO DONE
[ time 85 ] IO_DONE by JOB 1
[ time 85 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 86 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 87 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 88 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 89 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 90 ] IO_START by JOB 1
IO DONE
[ time 90 ] IO_DONE by JOB 0
[ time 90 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 91 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 3 (of 50) ]
[ time 92 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 2 (of 50) ]
[ time 93 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 1 (of 50) ]
[ time 94 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 0 (of 50) ]
[ time 95 ] FINISHED JOB 0
[ time 95 ] IO_DONE by JOB 1
[ time 95 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 96 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 3 (of 50) ]
[ time 97 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 2 (of 50) ]
[ time 98 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 1 (of 50) ]
[ time 99 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 0 (of 50) ]
[ time 100 ] FINISHED JOB 1
[ time 100 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 101 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 48 (of 50) ]
[ time 102 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 47 (of 50) ]
[ time 103 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 46 (of 50) ]
[ time 104 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 45 (of 50) ]
[ time 105 ] IO_START by JOB 2
IO DONE
[ time 105 ] IDLE
[ time 106 ] IDLE
[ time 107 ] IDLE
[ time 108 ] IDLE
[ time 109 ] IDLE
[ time 110 ] IO_DONE by JOB 2
[ time 110 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 111 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 43 (of 50) ]
[ time 112 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 42 (of 50) ]
[ time 113 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 41 (of 50) ]
[ time 114 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 40 (of 50) ]
[ time 115 ] IO_START by JOB 2
IO DONE
[ time 115 ] IDLE
[ time 116 ] IDLE
[ time 117 ] IDLE
[ time 118 ] IDLE
[ time 119 ] IDLE
[ time 120 ] IO_DONE by JOB 2
[ time 120 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 121 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 38 (of 50) ]
[ time 122 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 37 (of 50) ]
[ time 123 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 36 (of 50) ]
[ time 124 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 35 (of 50) ]
[ time 125 ] IO_START by JOB 2
IO DONE
[ time 125 ] IDLE
[ time 126 ] IDLE
[ time 127 ] IDLE
[ time 128 ] IDLE
[ time 129 ] IDLE
[ time 130 ] IO_DONE by JOB 2
[ time 130 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 131 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 33 (of 50) ]
[ time 132 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 32 (of 50) ]
[ time 133 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 31 (of 50) ]
[ time 134 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 30 (of 50) ]
[ time 135 ] IO_START by JOB 2
IO DONE
[ time 135 ] IDLE
[ time 136 ] IDLE
[ time 137 ] IDLE
[ time 138 ] IDLE
[ time 139 ] IDLE
[ time 140 ] IO_DONE by JOB 2
[ time 140 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 141 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 28 (of 50) ]
[ time 142 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 27 (of 50) ]
[ time 143 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 26 (of 50) ]
[ time 144 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 25 (of 50) ]
[ time 145 ] IO_START by JOB 2
IO DONE
[ time 145 ] IDLE
[ time 146 ] IDLE
[ time 147 ] IDLE
[ time 148 ] IDLE
[ time 149 ] IDLE
[ time 150 ] IO_DONE by JOB 2
[ time 150 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 151 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 23 (of 50) ]
[ time 152 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 22 (of 50) ]
[ time 153 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 21 (of 50) ]
[ time 154 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 20 (of 50) ]
[ time 155 ] IO_START by JOB 2
IO DONE
[ time 155 ] IDLE
[ time 156 ] IDLE
[ time 157 ] IDLE
[ time 158 ] IDLE
[ time 159 ] IDLE
[ time 160 ] IO_DONE by JOB 2
[ time 160 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 161 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 18 (of 50) ]
[ time 162 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 17 (of 50) ]
[ time 163 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 16 (of 50) ]
[ time 164 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 15 (of 50) ]
[ time 165 ] IO_START by JOB 2
IO DONE
[ time 165 ] IDLE
[ time 166 ] IDLE
[ time 167 ] IDLE
[ time 168 ] IDLE
[ time 169 ] IDLE
[ time 170 ] IO_DONE by JOB 2
[ time 170 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 171 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 13 (of 50) ]
[ time 172 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 12 (of 50) ]
[ time 173 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 11 (of 50) ]
[ time 174 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 10 (of 50) ]
[ time 175 ] IO_START by JOB 2
IO DONE
[ time 175 ] IDLE
[ time 176 ] IDLE
[ time 177 ] IDLE
[ time 178 ] IDLE
[ time 179 ] IDLE
[ time 180 ] IO_DONE by JOB 2
[ time 180 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 181 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 8 (of 50) ]
[ time 182 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 7 (of 50) ]
[ time 183 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 6 (of 50) ]
[ time 184 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 5 (of 50) ]
[ time 185 ] IO_START by JOB 2
IO DONE
[ time 185 ] IDLE
[ time 186 ] IDLE
[ time 187 ] IDLE
[ time 188 ] IDLE
[ time 189 ] IDLE
[ time 190 ] IO_DONE by JOB 2
[ time 190 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 191 ] Run JOB 2 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 3 (of 50) ]
[ time 192 ] Run JOB 2 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 2 (of 50) ]
[ time 193 ] Run JOB 2 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 1 (of 50) ]
[ time 194 ] Run JOB 2 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 0 (of 50) ]
[ time 195 ] FINISHED JOB 2

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround  95
  Job  1: startTime   0 - response   5 - turnaround 100
  Job  2: startTime   0 - response 100 - turnaround 195

  Avg  2: startTime n/a - response 35.00 - turnaround 130.00
```