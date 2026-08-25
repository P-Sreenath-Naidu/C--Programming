# Breakfast Hotel Billing System

## Project Overview

**Breakfast Hotel Billing System** is a menu-driven C programming project that simulates a simple hotel breakfast ordering and billing system.

The application allows users to select breakfast items and beverages (tea, coffee, milk), specify quantities, maintain a running bill, and complete payment using Cash, UPI, or Card.

---

## Project Objectives

- Build a practical menu-driven C application.
- Implement item selection and quantity-based billing.
- Maintain a running total across multiple orders.
- Provide separate menus for breakfast items and beverages.
- Implement payment handling using multiple payment methods.
- Prevent the user from exiting while an unpaid bill remains.
- Practise structured program flow and input handling.

---

## Features

### 1. Breakfast Menu

| Item   | Price |
|--------|------:|
| Idly   | ₹40   |
| Dosa   | ₹45   |
| Puri   | ₹50   |
| Upma   | ₹35   |
| Pongal | ₹30   |

The user selects an item and enters the quantity; the corresponding amount is added to the running total.

### 2. Tea & Coffee Menu

| Item   | Price |
|--------|------:|
| Tea    | ₹20   |
| Coffee | ₹25   |
| Milk   | ₹30   |

### 3. Billing

The program calculates the cost using:

```
Total = Price × Quantity
```

Multiple items can be added before payment, and the running total is displayed after each order.

### 4. Payment

The application supports the following payment methods:

- Cash
- UPI
- Card

Once payment is completed successfully, the final bill is displayed and the running total is reset.

### 5. Exit Protection

If the user attempts to exit while an unpaid bill exists, the program redirects them to the payment menu instead of allowing the program to close.

### 6. Invalid Input Handling

Invalid menu selections display a `"Wrong option"` message and return the user to the appropriate menu.

---

## Program Flow

```text
Start
  ↓
Main Menu
  ├── Breakfast Menu
  │     ├── Select Item
  │     ├── Enter Quantity
  │     └── Update Total
  │
  ├── Tea & Coffee
  │     ├── Select Item
  │     ├── Enter Quantity
  │     └── Update Total
  │
  ├── Payment
  │     ├── Cash
  │     ├── UPI
  │     └── Card
  │
  └── Exit
        ↓
   Check Pending Bill
        ↓
   Exit Program
```

---

## Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Operating System:** Linux / Ubuntu
- **Development Environment:** Terminal
- **Version Control:** Git / GitHub
---

## C Concepts Practised

This project demonstrates the following concepts:

- Variables and data types
- `printf()` and `scanf()`
- `if-else` statements
- `switch-case`
- Nested `switch-case`
- Labels and `goto`
- Arithmetic operations
- User input handling
- Menu-driven programming
- Program flow control
- Running-total calculation
- Basic error and invalid-option handling

---

## Source Code

The main source file is:

```text
Breakfast_Billing.c
```
---

## Compilation

Compile the program using GCC:

```bash
gcc Breakfast_Billing.c
```

This generates the default executable:

```text
a.out
```
Run the program:
```bash
./a.out
```
---
## Sample Menu
```text
....................................
       BREAKFAST HOTEL BILLING
....................................
1) Breakfast Menu
2) Tea & Coffee
3) Payment
4) Exit
....................................
Enter the option:
```
### Example Order

```text
Breakfast Menu

1) Idly   : Rs.40
2) Dosa   : Rs.45
3) Puri   : Rs.50
4) Upma   : Rs.35
5) Pongal : Rs.30
6) Back

Enter the sub option: 2
Enter the quantity: 2

Total price = 90
```
---
## Learning Outcomes

Through this project, I practised converting a real-world requirement into a working C program.

The project helped me understand:

- How menu-driven applications work.
- How to process repeated user choices.
- How to calculate and maintain a running bill.
- How nested menus can be implemented.
- How payment completion can control program flow.
- How basic C programming concepts can be combined into a practical application.

---

## Future Improvements

The project can be enhanced further by adding:

- Customer name and bill number
- Date and time on the bill
- Itemised final bill
- GST calculation
- Discount/coupon support
- Receipt generation
- Improved input validation
- Dedicated functions for each menu
- Structures for storing menu items
- File handling to save bills
- Dynamic menu/item management

---

## Author

**Sreenath**

Electrical & Electronics Engineering Student
Aspiring Embedded Systems Engineer

### Skills Being Developed

- C Programming
- Embedded C
- C++
- Data Structures
- Linux
- Microcontrollers
- Embedded Systems

---

## Project Status

**Completed**

This project forms part of my C programming practice and portfolio development for an Embedded Systems career.
