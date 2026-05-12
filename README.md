# Simple Interest Calculator

A command-line tool written in C that calculates simple interest and the final amount based on user input. Supports time input in days, months, or years.

---

## What it does

You give it a principal amount, a rate of interest, and a time period. It converts the time to years internally and spits out the interest earned and the total amount.

Formula used:

```
Interest = (Principal * Rate * Time) / 100
Amount   = Principal + Interest
```

Time conversions:
- Days   -> divided by 365
- Months -> divided by 12
- Years  -> used as-is

---

## How to compile and run

Make sure you have GCC installed. Then:

```bash
gcc simple_interest.c -o simple_interest
./simple_interest
```

On Windows with MinGW:

```bash
gcc simple_interest.c -o simple_interest.exe
simple_interest.exe
```

---

## Usage

When you run it, you'll get a menu:

```
Choose the Following if you want to proceed:
1 -> If you want to give the Answer in Days
2 -> If you want to give the Answer in Months
3 -> If you want to give the Answer in Years
Choose Time Format:
```

Pick your time format, then enter the principal, rate of interest (without the % sign), and the time. The program outputs the interest and the final amount.

### Example

```
Choose Time Format: 2
Enter the Principle: 10000
Enter the Rate of Interest: (Without % Sign): 5
Enter the Time (Months): 18
Final Amount (along with Interest): 10750.000000
Interest: 750.000000
```

---

## Notes

- Rate of interest should be entered as a plain number. For example, enter `5` for 5%, not `0.05`.
- The program only handles simple interest, not compound interest.
- Input validation is minimal. If you enter something outside 1-3 for the menu, it will print an error and exit. Negative values or non-numeric input aren't handled.
- `double` is used for all financial values to keep decimal precision reasonable.

---

## File structure

```
.
└── simple_interest.c    # the whole program, single file
```

---

## Possible improvements

- Add input validation so bad input doesn't silently break things
- Loop back to the menu instead of exiting on invalid input
- Support compound interest as a second mode
- Format the output to 2 decimal places instead of 6
- Add a currency symbol option

---

## Built with

- C (C99 standard)
- Standard library only: `stdio.h`

---

Written as a beginner C project to practice conditionals, user input, and basic arithmetic in C.
