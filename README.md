## Number Guessing Game

This C program implements a number guessing game between two players. Player 1 selects a number between 1 and 1000, and Player 2 has up to 10 attempts to guess it.

### Program Overview:

#### Macros:
- `max_guesses`: Defines the maximum number of guesses allowed by Player 2 (set to 10).

#### Game Flow:

1. Player 1 inputs a number between 1 and 1000.
2. Player 2 attempts to guess the number within the given range.
3. Player 2's guesses are checked and compared to Player 1's number.
4. Hints (too high, too low) are provided based on Player 2's guesses.
5. The game ends if Player 2 correctly guesses the number or reaches the maximum number of guesses allowed.

### Code Details:

- **Input Validation**:
  - Player 1's input is checked to ensure it falls within the defined range.
  - Player 2's guesses are validated to be within the specified range.

- **Game Logic**:
  - Player 2 receives feedback ('Too high' or 'Too low') based on their guesses compared to Player 1's number.
  - The game ends when Player 2 correctly guesses the number or exhausts all 10 attempts.

### Example Output:

```
Player 1, enter a number between 1 and 1000:
[Player 1 inputs a number]

Player 2, you have X guesses remaining.
Enter your guess:
[Player 2 inputs a guess]

[Game continues with feedback and attempts until Player 2 wins or reaches the maximum number of guesses.]

[Game outcome is displayed: Either "Player 2 wins" or "Player 1 wins."]
```
