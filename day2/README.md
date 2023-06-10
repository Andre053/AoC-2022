# Day 2: Rock Paper Scissors
- Rock, paper, scissors rules
- Given the values that the opponent are playing
- Winning all is suspicious, need minimum wins to win
- Winner of tournament has highest score, sum of all rounds
- Round score is based on the shape you selected
	- 1 for rock, 2 for paper, 3 for scissors
	- Plus the outcome of the round: 0 for loss, 3 for draw, 6 if won
## Goal
- Calculate total score if following the strategy guide

## Ideas

### Idea 1
- Have a hashmap for scores or simply if statments
- Have an algo to calculate the score of each round
- If statements for possibilities

O(r) time, O(1) space
where r is number of rounds

## Big O Analysis
- Each line of the file contains a round which must be visited -> O(r) where r is rounds (or lines in file)
- Just need to calculate score of the round, then add to the total score -> O(1) space

## Memory Considerations
- Input is interacted through as a file, reading each line
- Sums of rounds should never exceed int
- Sum of all rounds could exceed size of int

# Post-Solution Reflection
## Issues
- Reading 4 bytes instead of 5 from each line caused issues, resulting in the first value being empty
	- Need to understand fgets better: n is the max number read, including null char, stops when newline, EOF, or n-1 are read
- Using an Enum probably was overkill, just using ints may have been clearer
- Last line of file results in a round for some reason, possible issue with input file (yes, additional new line at end of file caused issue)

# Day 2: Rock, Paper, Scissors - Part 2
- X, Y, Z now mean you need to lose, draw, or win, respectively
- Find total score

## Changes needed
- Choose the choice of b depending on X, Y, Z and a's choice of move

# Post-Solution Reflection
- Not an elegant expansion on the inital solution...
- Want to refactor
