# DAY 1: Calorie Counting - Initial Impressions

- Elves carry Calories
- Calories differ depending on the meal
- Find the Elf with the most calories

## Example

Input:
	1000
	2000
	3000

	4000

	5000
	6000

	7000
	8000
	9000

	10000

First Elf carries 6000 calories, second 4000, etc.
The fourth Elf carries the most

## Ideas

### Idea 1 (bad)
Can loop through, counting new lines characters to get number of elves
Create static array for all
Loop again, adding all values, for each elf
Keep track of the max

O(n) time, O(n) memory

### Idea 2 (better)
Have a variable holding the current max, and a variable for the max's index
Loop through, calculating the calorie count, replacing max and index values if max

O(n) time, O(1) memory

### Idea 3 (harder)
Use idea 2 but handle case where the sum might overflow the integer
Also inputs are likely strings, must be converted to int for calculations

## Big O Analysis
- You must visit each value -> O(n) time minimum
- You can keep track of the answer in two variables -> O(1) space 

## Memory Considerations
- Does the string fit in memory?
- How large are the values?
- How large can the sums of values?

## Solution
Variables: Input (string), indexOfMax (int), max (int), currentMax (int), current (int), currentVal (string), currentValInt (int)
Algo: Loop through string, add each value to currentVal string until reaching new line, convert currentVal to int, add it to current Max, repeat until finding consecutive new lines, then compare to max and replace values if it exceeds, wipe the current values and repeat, return max 

# Post-Solution Reflection
- Put the input into a separate file instead of keeping it in the code
- Reading the file line by line facilitated getting the string needed to convert to a number
- By using atoi on the line, if it was 0 it meant a new Elf was reached, otherwise keep adding to current elf's calories
- Comparing elf's final calories to max allowed keeping track of max value
- Complexity analysis
	Open a file, read it line by line with fgets()
	Keep a character array of 10 bytes that is overwritten by fgets()
	Keep a few integers for keeping track of values
	O(n) time, O(1) space 
