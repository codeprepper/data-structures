Problem
-------
Compress a given string by replacing consecutive repeating characters
with the character followed by its frequency. If the resulting string
is longer than the original, return the original string itself.

Example
-------
- aaabbbc => a3b3c1
- aaaaaa  => a6
- aabbcc  => aabbcc (a2b2c2 is not shorter)

Complexity
----------
- Time: O(N)
- Space: O(N)

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

Help up make CodePrepper better
-------------------------------
If you have an alternative solution that uses a different approach or is more
optimal than the solution provided in `answer.c`, please email it to
<codeprepper@gmail.com>. If it compiles and passes our unit-tests, we will
feature it in `answer.c` and give you credit for it.
