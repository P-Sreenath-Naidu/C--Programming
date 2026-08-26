Two separate functions are implemented:

- **`my_Atoi()`** – Converts a numeric string into an integer.
- **`my_Atof()`** – Converts a numeric string into a floating-point value.

The programs demonstrate string traversal, pointer manipulation, ASCII character conversion, sign handling, integer arithmetic, and fractional calculation.

### Functions Implemented

| Function     | Purpose                              | Return Type |
|--------------|---------------------------------------|-------------|
| `my_Atoi()`  | String to integer conversion          | `int`       |
| `my_Atof()`  | String to floating-point conversion   | `double`    |

## 2. `my_Atoi()` Implementation

The `my_Atoi()` function converts a string containing an integer into an integer value.

### Conversion Logic

```c
a = a * 10 + *s - 48;
```
Since the ASCII value of `'0'` is `48`, subtracting 48 from a digit character converts it into its numerical value.
For example :

```
'5' - 48
= 53 - 48
= 5
```
## 3. `my_Atoi()` Working Example

**Input:** `123`

| Step        | Calculation           | Result |
|-------------|------------------------|--------|
| Initial     | `a = 0`                | 0      |
| 1st digit   | `a = 0 × 10 + 1`       | 1      |
| 2nd digit   | `a = 1 × 10 + 2`       | 12     |
| 3rd digit   | `a = 12 × 10 + 3`      | 123    |

**Output:**

```text
enter a string
123
123
```

---

## 4. Negative Number Handling

**Input:** `-456`

The program detects the `-` sign and sets `sign = -1`. The digits are then calculated as usual:

```
a = 0 × 10 + 4 = 4
a = 4 × 10 + 5 = 45
a = 45 × 10 + 6 = 456
```

The sign is applied at the end:

```
a × sign = 456 × (-1) = -456
```

**Output:**

```text
enter a string
-456
-456
```

## 5. Leading Space Handling

Leading spaces are skipped using:

```c
while (*s == ' ')
    s++;
```

**Input:** `   123`

The pointer moves past the spaces and reaches `123`, which is then converted normally.

**Output:**

```text
enter a string
   123
123
```

---

## 6. `my_Atof()` Implementation

The `my_Atof()` function extends the integer conversion concept to support floating-point numbers, processing the number in two parts:

```
Integer Part + Fractional Part
```

For example, `123.456` is processed as `123 + 0.456`.

The result is stored in a `double` variable, and a separate variable `A` is used for fractional-place calculation.
---

## 7. `my_Atof()` — Integer Part Calculation

**Input:** `123.456`

The integer part is processed first, using the same logic as `my_Atoi()`:

| Step        | Calculation           | Result |
|-------------|------------------------|--------|
| Initial     | `a = 0`                | 0      |
| 1st digit   | `a = 0 × 10 + 1`       | 1      |
| 2nd digit   | `a = 1 × 10 + 2`       | 12     |
| 3rd digit   | `a = 12 × 10 + 3`      | 123    |

**Integer part = 123**

## 8. `my_Atof()` — Fractional Calculation

Once the decimal point is detected in `123.456`, the fractional digits are processed as follows:

Starting with `A = 10`:

| Digit | Calculation      | Running Total |
|-------|-------------------|----------------|
| `4`   | `4 / 10 = 0.4`     | `123 + 0.4 = 123.4`     |
| `5`   | `5 / 100 = 0.05`   | `123.4 + 0.05 = 123.45` |
| `6`   | `6 / 1000 = 0.006` | `123.45 + 0.006 = 123.456` |

After each digit, `A` is updated with `A = A * 10`.

## 9. `my_Atof()` Output

For the input `123.456`, the result is printed using:

```c
printf("%.5f\n", my_Atof(s));
```

This produces an output containing five digits after the decimal point.

**Output:**

```text
enter a string
123.456
123.45600
```
## 10. Negative Floating-Point Calculation

**Input:** `-12.345`

The negative sign is identified first (`sign = -1`), then the integer and fractional parts are calculated:
```
Integer part: 12
3 / 10   = 0.3
4 / 100  = 0.04
5 / 1000 = 0.005

Total = 12 + 0.3 + 0.04 + 0.005 = 12.345
```
Applying the sign:

```
12.345 × (-1) = -12.345
```

**Output:**

```text
enter a string
-12.345
-12.34500
```
## 11. Sample Test Cases

### `my_Atoi()`

| Input     | Expected Output |
|-----------|------------------|
| `123`     | `123`            |
| `-456`    | `-456`           |
| `+789`    | `789`            |
| `   123`  | `123`            |

### `my_Atof()`

| Input       | Expected Output |
|-------------|------------------|
| `123.456`   | `123.45600`      |
| `-12.345`   | `-12.34500`      |
| `+45.67`    | `45.67000`       |
| `12.`       | `12.00000`       |

These examples demonstrate the intended conversion logic of the two programs.

## 12. Comparison: `my_Atoi()` vs `my_Atof()`

| Feature                 | `my_Atoi()` | `my_Atof()` |
|--------------------------|:-----------:|:-----------:|
| String traversal          | Yes         | Yes         |
| Leading spaces            | Yes         | Yes         |
| `+` sign                  | Yes         | Yes         |
| `-` sign                  | Yes         | Yes         |
| Integer conversion        | Yes         | Yes         |
| Decimal point              | No          | Yes         |
| Fractional calculation    | No          | Yes         |
| Return type                | `int`       | `double`    |

---

## 14. Project Files

```
├── Own_Atoi.c
├── Own_Atof.c
└── README.md
```
## Compilation

Each program can be compiled independently using GCC.

To compile and run `my_Atoi()`:

```bash
gcc Own_Atoi.c -o atoi_demo
./atoi_demo
```

To compile and run `my_Atof()`:

```bash
gcc Own_Atof.c -o atof_demo
./atof_demo
```

## Author

**Sreenath**
