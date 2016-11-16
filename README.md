### TODO:
- ~~Ability to read from file~~
- Travserse through map
- Search for fastest path
- Print output
- Test (optional)

### Design:
_How should we represent the requirements in code?_

_a*, IDA*_ - graph algorithms

Weighted Graph 
- https://www.quora.com/How-can-I-implement-a-weighted-directed-graph-in-C++-or-Java-using-object-oriented-programming
- http://stackoverflow.com/a/20422530
- http://www-h.eng.cam.ac.uk/help/tpl/talks/C++graphs.html

### Requirements
- Tower     (End)
- Castle    (Start)
- Roads     (1 hour to cross)
- Fields    (2 hours to cross)
- Mountains (3 hours to cross)
- N number of lines (length of each proceding line(s))

### Project 3: Princess
This problem is an adaptation of one of the Digikey's DKC3 problems from 2011.

You are on an epic quest to save the Princess (and grab the treasure) who is locked in a tower (T). To get there, you will have to cross some combination of roads (R), which take one hour to cross; fields (F), which take 2 hours to cross; and moutanins (M), which take 3 hours to cross. Your program will have to determine the fastest route to the princess from your castle (C).

##### INPUT:
The test file will hold a square map as follows: The first line will contain an integer (N). The next N lines will contain a string of N characters: C, R, F, M, or T.

##### OUTPUT:
Your program should print the fastest route, and the time taken to to make your way from the castle to the Princess’s tower along the fastest route.

##### SAMPLE INPUT:
```
7
RTFMMMF  
FMFMMMM  
RRFFMRR  
FRFFFMR  
FRMMFFR  
FFMMMMR  
RRRCRRR  
```
##### SAMPLE OUTPUT:
```
West, west, north, north, north, north, north. 10 hours to reach the Princess.
```

### Authors:
> Victor Ogundipe,  
> Matthew Kluzak,  
> Levi Barker
