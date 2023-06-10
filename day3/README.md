# Day 3: Rucksack Reorganization
- Each rucksack has two large compartments
- Items of a given type go into one of the compartments
- Failed for exactly one item per rucksack (greedy?)
- Find the item incorrectly organized
- Items are split in half within the rucksack 
- Items have prio, a-z, A-Z = 1-26, 27-52
## Goals
- Find the incorrectly organized item ASAP
- Sum the priorities of them all
 
## Ideas

### Idea 1
- Have a set of values within a rucksack 
- When discovered incorrect, you are done
- Loop through line once to get size, divide in half for compartment size
- Loop through first compartment, making the set, loop through second until a match found
- Convert the value into it's prio, add to total

O(l) time, O(u) space
where l is number of lines, u is unique characters in compartment 1

### Idea 2
- Precompute array of size 52, wipe each iteration
- Convert between ASCII and prio

## Big O Analysis
- Must at least visit about half of the characters on each line, as well as each line -> O(n) time if n is number of characters in file
- Must keep track of previously visited values -> O(n) space

## Memory Considerations
- Input interacted through as a file, each line read into string buffer, how big should it be...
- Total sum could exceed integer space


# Post-Solution Reflection
