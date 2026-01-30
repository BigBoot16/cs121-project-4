# cs121-project-4

```
include iostream and random libraries

create function prototypes
advance(horse number, horses array)
printLane(horse number, horses array)
bool isWinner(horse number, horses array)
```

## main function algorithm

```
initialize horses array with 5 values at 0
initialize keepGoing bool

while keepGoing is true:
  for i from 0-4:
    advance horse i
    print lane for horse i
    if keepGoing is true:
      check if current horse won with isWinner
  print string: "Press ENTER for next round:"
  recieve input from user with cin
  cin.ignore to discard any values that were input
```

## advance function algorithm

```
take the horse number and reference to horses array as input parameters
  initialize random device rd
  set random range dist as 0 to 1

  initialize coin variable using a random value of dist
  if the value of coin is 1:
    increase the value of the current horse in the array by 1
```

## printLane function algorithm

```
take the horse number and reference to horses array as input parameters
  initialize string nums "01234"
  initialize string lane "..............."
  set the character in the lane string corresponding to the current horse's position to the current horse's number in the nums string
  print the lane with cout
```

## isWinner function algorithm

```
take the horse number and reference to horses array as input parameters
  if the current horse in the for loop is at position 15:
    print winning message, ex: "Horse number 3 is the winner!"
    return false into keepGoing variable
  else:
    return true into keepGoing variable
```
