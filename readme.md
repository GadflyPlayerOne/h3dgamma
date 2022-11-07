<!-- @format -->

# H3D Interview Question

### Zach DeGeorge

### November 4, 2022

## Results

Here is the output from the program.

```
as3ics@iMac [23:24:58] [~/Workspace/h3d] [main *]
-> % make
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o main.o main.cpp
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o data.o data.cpp
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o complexData.o complexData.cpp
g++ -fsanitize=address -o main main.o data.o complexData.o

as3ics@iMac [23:24:59] [~/Workspace/h3d] [main *]
-> % ./main
hello world.
DataVector initialized
DataVector initialized
DataVector initialized
ComplexVector initialized
ComplexVector initialized

0 -- Int
Add called -- 1667795105
Insert called -- 91
-- Debug Insert --
91
Delaying for 1325 ms...

1 -- Int
Add called -- 1667795107
Insert called -- 32
-- Debug Insert --
91
32
Delaying for 1325 ms...

2 -- Int
Add called -- 1667795108
Insert called -- 86
-- Debug Insert --
91
32
86
Delaying for 1325 ms...

3 -- Int
Add called -- 1667795109
Insert called -- 22
-- Debug Insert --
91
32
86
22
Delaying for 1325 ms...

4 -- Int
Add called -- 1667795111
Insert called -- 20
-- Debug Insert --
91
32
86
22
20
Delaying for 1325 ms...
Get called -- 1667795107
Get Value -- 32.000000

5 -- Float
Add called -- 1667795112
Insert called -- 145
-- Debug Insert --
145
Delaying for 1325 ms...

6 -- Float
Add called -- 1667795113
Insert called -- 124
-- Debug Insert --
145
124
Delaying for 1325 ms...

7 -- Float
Add called -- 1667795115
Insert called -- 481
-- Debug Insert --
145
124
481
Delaying for 1325 ms...

8 -- Float
Add called -- 1667795116
Insert called -- 104
-- Debug Insert --
145
124
481
104
Delaying for 1325 ms...

9 -- Float
Add called -- 1667795117
Insert called -- 222
-- Debug Insert --
145
124
481
104
222
Delaying for 1325 ms...
Get called -- 1667795114
Get Value -- 302.909103

10 -- Int+Timestamp
Add called -- 32
Insert called -- 32
-- Debug Insert --
32
Delaying for 1325 ms...

11 -- Int+Timestamp
Add called -- 56
Insert called -- 56
-- Debug Insert --
32
56
Delaying for 1325 ms...

12 -- Int+Timestamp
Add called -- 86
Insert called -- 86
-- Debug Insert --
32
56
86
Delaying for 1325 ms...

13 -- Int+Timestamp
Add called -- 85
Insert called -- 85
-- Debug Insert --
32
56
85
86
Delaying for 1325 ms...

14 -- Int+Timestamp
Add called -- 28
Insert called -- 28
-- Debug Insert --
28
32
56
85
86
Delaying for 1325 ms...
Get called -- 150

15 -- Complex
Complex Add called -- 1667795125
Complex Data -- 7.291667, 278.571442, 469.999969
Insert called -- -- Debug Insert --
7 278 469
Delaying for 1325 ms...

16 -- Complex
Complex Add called -- 1667795127
Complex Data -- 350.000000, 6.250000, 17.543859
Insert called -- 7 278 469
350 6 17
Delaying for 1325 ms...

17 -- Complex
Complex Add called -- 1667795128
Complex Data -- 41.176472, 444.999969, 130.000000
Insert called -- 7 278 469
350 6 17
41 444 130
Delaying for 1325 ms...

18 -- Complex
Complex Add called -- 1667795129
Complex Data -- 220.930237, 82.716049, 202.040817
Insert called -- 7 278 469
350 6 17
41 444 130
220 82 202
Delaying for 1325 ms...

19 -- Complex
Complex Add called -- 1667795131
Complex Data -- 80.769226, 111.111115, 2033.333374
Insert called -- 7 278 469
350 6 17
41 444 130
220 82 202
80 111 2033
Delaying for 1325 ms...
Complex Get called -- 1667795127
Complex Get Value -- 350.000000 6.250000 17.543859

20 -- Complex * 2
Complex Add called -- 1667795132
Complex Data -- 158.333344, 72.727272, 11.392405
Insert called -- -- Debug Insert --
158 72 11 161 196 79
Delaying for 1325 ms...

21 -- Complex * 2
Complex Add called -- 1667795133
Complex Data -- 2200.000000, 950.000000, 14.285715
Insert called -- 158 72 11 161 196 79
2200 950 14 2266 72 257
Delaying for 1325 ms...

22 -- Complex * 2
Complex Add called -- 1667795135
Complex Data -- 141.025635, 206.521744, 162.295074
Insert called -- 158 72 11 161 196 79
2200 950 14 2266 72 257
141 206 162 49 68 50
Delaying for 1325 ms...

23 -- Complex * 2
Complex Add called -- 1667795136
Complex Data -- 163.333328, 53.703701, 104.615387
Insert called -- 158 72 11 161 196 79
2200 950 14 2266 72 257
141 206 162 49 68 50
163 53 104 435 64 30
Delaying for 1325 ms...

24 -- Complex * 2
Complex Add called -- 1667795137
Complex Data -- 194.736832, 34.246574, 2200.000000
Insert called -- 158 72 11 161 196 79
2200 950 14 2266 72 257
141 206 162 49 68 50
163 53 104 435 64 30
194 34 2200 40 3200 207
Delaying for 1325 ms...
Complex Get called -- 1667795134
Complex Get Value -- 1170.512817 578.260872 88.290395 1158.075520 70.390568 154.172489

as3ics@iMac [23:25:39] [~/Workspace/h3d] [main *]
-> %
```
