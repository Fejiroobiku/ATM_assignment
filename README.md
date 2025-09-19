Simple ATM (C)


A modular C program that simulates a basic ATM for a single user.

Features
Check Balance – view current account balance
Deposit – add a positive amount
Withdraw – subtract a positive amount (only if sufficient funds)
Exit – quit gracefully
Validation – amounts must be positive; withdrawals can’t exceed balance
Robust I/O – safe line-based input parsing and integer (cents) money math

## 🎯 Assessment Objectives
This project meets the following objectives:
- **Apply the use of variables, control structures, and functions**  
- **Understand modular program design**  
- **Implement input/output operations**  
- **Practice conditional logic and loops**

 How to Run the Program

 Compile the Program
 
On Linux / macOS:
gcc atm.c -o atm
./atm

On Windows (with MinGW):

gcc atm.c -o atm.exe
atm.exe



Example Run
===== Welcome to ATM Simulation =====

Please choose an option:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1

Your current balance is: 1000.00
