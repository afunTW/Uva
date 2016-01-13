# 2 the 9s

A well-known trick to know if an integer N is a multiple of nine is to compute the sum __S__ of its digits. If __S__ is a multiple of nine, then so is __N__. This is a recursive test, and the depth of the recursion needed to obtain the answer on N is called the 9-degree of __N__.

Your job is, given a positive number of __N__, determine if it is a multiple of nine and, if it is, its 9-degree.

## Input

The input is a file such that each line contains a positive number. A line containing the number 0 is the end of the input. The given numbers can contain up to 1000 digits.

## Output

The output of the program shall indicate, for each input number, if it is a multiple of nine, and in case it is, the value of its nine-degree. See the sample output for an example of the expected formatting of the output.

## Sample Input

999999999999999999999

9

9999999999999999999999999999998

0

## Sample Output

999999999999999999999 is a multiple of 9 and has 9-degree 3.

9 is a multiple of 9 and has 9-degree 1.

9999999999999999999999999999998 is not a multiple of 9.
