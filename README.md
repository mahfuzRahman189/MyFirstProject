# Calendar Generator

This is a simple C program that generates and displays a calendar for a given year. It's one of my very first projects developed during my first year of graduation.

## Features

* Displays the calendar for all 12 months of a user-specified year.
* Correctly accounts for leap years when calculating the number of days in February.
* Formats the calendar to show the days of the week.

## How it Works

The program prompts the user to enter a year. It then calculates the day of the week for the first day of that year. Using this information and the number of days in each month, it iteratively prints the calendar, month by month, ensuring the days align correctly under the corresponding weekdays.

## Getting Started

### Prerequisites

To compile and run this program, you will need a C compiler installed on your system (like GCC).

### Compiling and Running

1.  Save the code provided in the prompt as a `.c` file (e.g., `calendar.c`).
2.  Open a terminal or command prompt.
3.  Navigate to the directory where you saved the file.
4.  Compile the program using a C compiler. For example, with GCC:

    ```bash
    gcc calendar.c -o calendar
    ```

5.  Run the compiled program:

    ```bash
    ./calendar
    ```

6.  The program will ask you to enter a year. Type the year and press Enter.

    ```
    Enter year :
    ```

7.  The calendar for the specified year will be displayed in your terminal.

## Built With

* C Programming Language

## Acknowledgments

* This project was a learning experience during my first year of graduation.
