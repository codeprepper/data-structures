Problem
-------
Implement atoi() in C/C++

Example
-------
    '123'   => 123
    '0123'  => 123  (leading 0 dropped)
    '0x123' => 0    (treated as string)
    'abc'   => 0    (string input)
    '-123' => -123  (handle negative numbers)
    '+123'  => 123  (handle + sign)
    '112233445566778899' => -1 (num too large)

Complexity
----------
- Time: O(N)
- Space: O(1)

Instructions
------------
1. Complete the required APIs in `question.c` to attempt this question.
2. Please don't edit the function prototype provided in `question.c`, your
 . solution might not compile if you do.
3. If you need hints to solve the problem, look at `hints.c` instead.
4. When you're done, compile your changes by running: `make all`
5. Test your code using: `./question < input.txt` or `./hints < input.txt`.
6. The solution is available in `answer.c` (compile using: `make answer`)
7. Get the expected output using: `./answer < input.txt`
8. Feel free to include any additional header files or define additional
  functions.

Help make CodePrepper better
----------------------------
If you have an alternative solution that uses a different approach or is more
optimal than the solution provided in `answer.c`, please email it to
<codeprepper@gmail.com>. If it compiles and passes our unit-tests, we will
feature it in `answer.c` and give you credit for it.
