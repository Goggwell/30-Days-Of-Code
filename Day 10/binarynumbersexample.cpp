/*
== TERMS AND CONVERSIONS ==
- Radix (Base) -
The number of digits used to represent a number in a positional system.
    - The decimal number system is base-10 (0, 1, 2, 3, 4, 5, 6, 7, 8 ,9)
    - The binary number system is base-2 (0, 1)

To specify a number's radix, number n having radix r should be written as:
(n)ᵣ

- Binary to Decimal Conversion -
A binary number having k digits in the form of dₖ₋₁dₖ₋₂...d₂d₁dₒ can be converted by: 
    - summing the result for each dᵢ x 2ⁱ where 0 <= i <= k-1
        - i = k-1 being the most significant bit
        - i = 0 being the least significant bit

EXAMPLE:
(1011)₂ -> (?)₁ₒ is evaluated as (1 x 2³) + (0 x 2²) + (1 x 2¹) + (1 x 2⁰)
    - (8) + (0) + (2) + (1) = (11)₁ₒ

- Decimal to Binary Conversion -
Repeatedly divide your base-10 number, n, by 2.
    - The dividend at each step i should be the result of the integer division at each step i - 1
    - The remainder at each step is a single digit of the binary equivalent of n
    - If you read the remainders from last to first, you have the entire binary number

EXAMPLE:
(4)₁ₒ -> (?)₂ is evaluated as:
    - 4 / 2 = 2 remainder 0
    - 2 / 2 = 1 remainder 0
    - 1 / 2 = 0 remainder 1
    - Gives us the value of (100)₂

EXAMPLE (PSEUDOCODE EXPRESSION):

    while(n > 0):
        remainder = n % 2;
        n = n / 2;
        Insert remainder to front of list or push onto stack
    
    Print list or stack
*/