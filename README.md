# Quiz System in C

A simple console-based general knowledge quiz written in C.

## Project Structure

- `GK Quiz in C -Codewithc.c`: Main program entry point
- `result.c`: Final score display logic
- `result.h`: Function declarations for result handling

## Features

- Ask multiple general knowledge questions
- Accept player name input
- Calculate score based on correct answers
- Show a final result summary

## How to Compile

Using GCC:

```bash
gcc "GK Quiz in C -Codewithc.c" result.c -o quiz.exe
```

## How to Run

```bash
./quiz.exe
```

On Windows Command Prompt:

```bash
quiz.exe
```

## Notes

- This project uses `system("cls")` and `conio.h`, so it is mainly intended for Windows environments.
- Each correct answer gives 10 points.

## Example Commit Flow

You can split your work into small commits, for example:

1. Fix basic input and text issues
2. Extract result logic into separate files
3. Split quiz logic into more modules
4. Add new gameplay features

## License

This project includes the repository `LICENSE` file.
