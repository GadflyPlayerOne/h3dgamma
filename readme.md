<!-- @format -->

# H3D Interview Question

### Zach DeGeorge

### November 4, 2022

## Results

Here is the output from the program.

```
as3ics@iMac [23:39:37] [~/Workspace/h3d] [main *]
-> % make
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o main.o main.cpp
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o data.o data.cpp
g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o complexData.o complexData.cpp
g++ -fsanitize=address -o main main.o data.o complexData.o

as3ics@iMac [23:39:39] [~/Workspace/h3d] [main *]
-> % ./main
hello world.
DataVector initialized
DataVector initialized
DataVector initialized
ComplexVector initialized
ComplexVector initialized

0 -- Int
Add called -- 1667795981
Insert called -- 23
-- Debug Insert --
23
Delaying for 1325 ms...

1 -- Int
Add called -- 1667795982
Insert called -- 51
-- Debug Insert --
23
51
Delaying for 1325 ms...

2 -- Int
Add called -- 1667795984
Insert called -- 20
-- Debug Insert --
23
51
20
Delaying for 1325 ms...

3 -- Int
Add called -- 1667795985
Insert called -- 36
-- Debug Insert --
23
51
20
36
Delaying for 1325 ms...

4 -- Int
Add called -- 1667795986
Insert called -- 51
-- Debug Insert --
23
51
20
36
51
Delaying for 1325 ms...
Get called -- 1667795983
Get Value -- 35.500000

5 -- Float
Add called -- 1667795988
Insert called -- 106
-- Debug Insert --
106
Delaying for 1325 ms...

6 -- Float
Add called -- 1667795989
Insert called -- 96
-- Debug Insert --
106
96
Delaying for 1325 ms...

7 -- Float
Add called -- 1667795990
Insert called -- 74
-- Debug Insert --
106
96
74
Delaying for 1325 ms...

8 -- Float
Add called -- 1667795992
Insert called -- 59
-- Debug Insert --
106
96
74
59
Delaying for 1325 ms...

9 -- Float
Add called -- 1667795993
Insert called -- 170
-- Debug Insert --
106
96
74
59
170
Delaying for 1325 ms...
Get called -- 1667795989
Get Value -- 96.551720

10 -- Int+Timestamp
Add called -- 52
Insert called -- 52
-- Debug Insert --
52
Delaying for 1325 ms...

11 -- Int+Timestamp
Add called -- 72
Insert called -- 72
-- Debug Insert --
52
72
Delaying for 1325 ms...

12 -- Int+Timestamp
Add called -- 61
Insert called -- 61
-- Debug Insert --
52
61
72
Delaying for 1325 ms...

13 -- Int+Timestamp
Add called -- 33
Insert called -- 33
-- Debug Insert --
33
52
61
72
Delaying for 1325 ms...

14 -- Int+Timestamp
Add called -- 67
Insert called -- 67
-- Debug Insert --
33
52
61
67
72
Delaying for 1325 ms...
Get called -- 150

15 -- Complex
Complex Add called -- 1667796001
Complex Data -- 71.739128 18.181818 192.857147
Insert called -- 71.739128 18.181818 192.857147
-- Debug Insert --
71 18 192
Delaying for 1325 ms...

16 -- Complex
Complex Add called -- 1667796002
Complex Data -- 494.736877 22.000000 62.162163
Insert called -- 494.736877 22.000000 62.162163
71 18 192
494 22 62
Delaying for 1325 ms...

17 -- Complex
Complex Add called -- 1667796004
Complex Data -- 30.769232 36.956520 108.219185
Insert called -- 30.769232 36.956520 108.219185
71 18 192
494 22 62
30 36 108
Delaying for 1325 ms...

18 -- Complex
Complex Add called -- 1667796005
Complex Data -- 3.030303 8.139535 106.153847
Insert called -- 3.030303 8.139535 106.153847
71 18 192
494 22 62
30 36 108
3 8 106
Delaying for 1325 ms...

19 -- Complex
Complex Add called -- 1667796006
Complex Data -- 101.562500 nan 88.888893
Insert called -- 101.562500 nan 88.888893
71 18 192
494 22 62
30 36 108
3 8 106
101 0 88
Delaying for 1325 ms...
Complex Get called -- 1667796003
Complex Get Value -- 262.753055 29.478260 85.190674

20 -- Complex * 2
Complex Add called -- 1667796008
Complex Data -- 61.702126 96.385544 126.315781 77.611938 44.927536 35.714287
Insert called -- 61.702126 96.385544 126.315781 77.611938 44.927536 35.714287
-- Debug Insert --
61 96 126 77 44 35
Delaying for 1325 ms...

21 -- Complex * 2
Complex Add called -- 1667796009
Complex Data -- 3.076923 260.000000 5.797101 69.642860 152.941177 95.945946
Insert called -- 3.076923 260.000000 5.797101 69.642860 152.941177 95.945946
61 96 126 77 44 35
3 260 5 69 152 95
Delaying for 1325 ms...

22 -- Complex * 2
Complex Add called -- 1667796010
Complex Data -- 117.567566 57.142860 62.500000 18.309858 39.393940 12.195122
Insert called -- 117.567566 57.142860 62.500000 18.309858 39.393940 12.195122
61 96 126 77 44 35
3 260 5 69 152 95
117 57 62 18 39 12
Delaying for 1325 ms...

23 -- Complex * 2
Complex Add called -- 1667796012
Complex Data -- 331.578949 222.222229 123.529411 27.906979 106.451622 62.650604
Insert called -- 331.578949 222.222229 123.529411 27.906979 106.451622 62.650604
61 96 126 77 44 35
3 260 5 69 152 95
117 57 62 18 39 12
331 222 123 27 106 62
Delaying for 1325 ms...

24 -- Complex * 2
Complex Add called -- 1667796013
Complex Data -- 94.594589 85.333336 65.656570 27.906979 681.818176 60.439564
Insert called -- 94.594589 85.333336 65.656570 27.906979 681.818176 60.439564
61 96 126 77 44 35
3 260 5 69 152 95
117 57 62 18 39 12
331 222 123 27 106 62
94 85 65 27 681 60
Delaying for 1325 ms...
Complex Get called -- 1667796009
Complex Get Value -- 3.076923 260.000000 5.797101 69.642860 152.941177 95.945946

as3ics@iMac [23:40:14] [~/Workspace/h3d] [main *]
```
