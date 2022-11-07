<!-- @format -->

# H3D Interview Question

### Zach DeGeorge

### November 4, 2022

## Results

Here is the output from the program.

```
as3ics@iMac [23:50:00] [~/Workspace/h3d] [main *]
-> % make
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o main.o main.cpp
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o complexData.o complexData.cpp
g++ -fsanitize=address -o main main.o data.o complexData.o

as3ics@iMac [23:50:15] [~/Workspace/h3d] [main *]
-> % ./main
hello world.
DataVector initialized
DataVector initialized
DataVector initialized
ComplexVector initialized
ComplexVector initialized

0 -- Int
Add called -- 1667796617
Insert called -- 75
-- Debug Insert --
75
Delaying for 1325 ms...

1 -- Int
Add called -- 1667796619
Insert called -- 67
-- Debug Insert --
75
67
Delaying for 1325 ms...

2 -- Int
Add called -- 1667796620
Insert called -- 41
-- Debug Insert --
75
67
41
Delaying for 1325 ms...

3 -- Int
Add called -- 1667796621
Insert called -- 0
-- Debug Insert --
75
67
41
0
Delaying for 1325 ms...

4 -- Int
Add called -- 1667796623
Insert called -- 98
-- Debug Insert --
75
67
41
0
98
Delaying for 1325 ms...
Get called -- 1667796619
Get Value -- 67.000000

5 -- Float
Add called -- 1667796624
Insert called -- 184
-- Debug Insert --
184
Delaying for 1325 ms...

6 -- Float
Add called -- 1667796625
Insert called -- 73
-- Debug Insert --
184
73
Delaying for 1325 ms...

7 -- Float
Add called -- 1667796627
Insert called -- 161
-- Debug Insert --
184
73
161
Delaying for 1325 ms...

8 -- Float
Add called -- 1667796628
Insert called -- 9
-- Debug Insert --
184
73
161
9
Delaying for 1325 ms...

9 -- Float
Add called -- 1667796629
Insert called -- 71
-- Debug Insert --
184
73
161
9
71
Delaying for 1325 ms...
Get called -- 1667796626
Get Value -- 117.230530

10 -- Int+Timestamp
Add called -- 21
Insert called -- 21
-- Debug Insert --
21
Delaying for 1325 ms...

11 -- Int+Timestamp
Add called -- 75
Insert called -- 75
-- Debug Insert --
21
75
Delaying for 1325 ms...

12 -- Int+Timestamp
Add called -- 17
Insert called -- 17
-- Debug Insert --
17
21
75
Delaying for 1325 ms...

13 -- Int+Timestamp
Add called -- 5
Insert called -- 5
-- Debug Insert --
5
17
21
75
Delaying for 1325 ms...

14 -- Int+Timestamp
Add called -- 25
Insert called -- 25
-- Debug Insert --
5
17
21
25
75
Delaying for 1325 ms...
Get called -- 150

15 -- Complex
Complex Add called -- 1667796637
Complex Data -- 94.505493 10.843374 1.754386
Insert called -- 94.505493 10.843374 1.754386
-- Debug Insert --
94 10 1
Delaying for 1325 ms...

16 -- Complex
Complex Add called -- 1667796639
Complex Data -- 42.666668 66.666672 2.564103
Insert called -- 42.666668 66.666672 2.564103
94 10 1
42 66 2
Delaying for 1325 ms...

17 -- Complex
Complex Add called -- 1667796640
Complex Data -- 85.185188 2450.000000 273.333344
Insert called -- 85.185188 2450.000000 273.333344
94 10 1
42 66 2
85 2450 273
Delaying for 1325 ms...

18 -- Complex
Complex Add called -- 1667796641
Complex Data -- 925.000000 1333.333252 91.666672
Insert called -- 925.000000 1333.333252 91.666672
94 10 1
42 66 2
85 2450 273
925 1333 91
Delaying for 1325 ms...

19 -- Complex
Complex Add called -- 1667796643
Complex Data -- 304.545441 93.333336 178.571426
Insert called -- 304.545441 93.333336 178.571426
94 10 1
42 66 2
85 2450 273
925 1333 91
304 93 178
Delaying for 1325 ms...
Complex Get called -- 1667796639
Complex Get Value -- 42.666668 66.666672 2.564103

20 -- Complex * 2
Complex Add called -- 1667796644
Complex Data -- 414.285706 57.142860 380.000000 281.818176 107.692314 2400.000000
Insert called -- 414.285706 57.142860 380.000000 281.818176 107.692314 2400.000000
-- Debug Insert --
414 57 380 281 107 2400
Delaying for 1325 ms...

21 -- Complex * 2
Complex Add called -- 1667796645
Complex Data -- 8.571429 136.363632 106.451622 151.428574 60.606064 34.285717
Insert called -- 8.571429 136.363632 106.451622 151.428574 60.606064 34.285717
414 57 380 281 107 2400
8 136 106 151 60 34
Delaying for 1325 ms...

22 -- Complex * 2
Complex Add called -- 1667796647
Complex Data -- 676.923096 1166.666748 161.764709 32.631580 104.819275 42.622952
Insert called -- 676.923096 1166.666748 161.764709 32.631580 104.819275 42.622952
414 57 380 281 107 2400
8 136 106 151 60 34
676 1166 161 32 104 42
Delaying for 1325 ms...

23 -- Complex * 2
Complex Add called -- 1667796648
Complex Data -- 48.958336 266.666687 41.250000 246.153854 157.142853 95.714279
Insert called -- 48.958336 266.666687 41.250000 246.153854 157.142853 95.714279
414 57 380 281 107 2400
8 136 106 151 60 34
676 1166 161 32 104 42
48 266 41 246 157 95
Delaying for 1325 ms...

24 -- Complex * 2
Complex Add called -- 1667796649
Complex Data -- 2.000000 119.672134 40.816326 384.615387 481.250000 163.888885
Insert called -- 2.000000 119.672134 40.816326 384.615387 481.250000 163.888885
414 57 380 281 107 2400
8 136 106 151 60 34
676 1166 161 32 104 42
48 266 41 246 157 95
2 119 40 384 481 163
Delaying for 1325 ms...
Complex Get called -- 1667796646
Complex Get Value -- 342.747262 651.515190 134.108166 92.030077 82.712669 38.454334
Complex Get called -- 1667796646
Complex Get One Value -- 342
Complex Get called -- 1667796646
Complex Get One Value -- 651
Complex Get called -- 1667796646
Complex Get One Value -- 134
Complex Get called -- 1667796646
Complex Get One Value -- 92
Complex Get called -- 1667796646
Complex Get One Value -- 82
Complex Get called -- 1667796646
Complex Get One Value -- 38

as3ics@iMac [23:50:51] [~/Workspace/h3d] [main *]
```
