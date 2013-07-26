Problem
-------
Convert an IP address in string format to a 4-byte integer.

Example
-------
    "192.168.1.101"   => 3232235877
    "255.255.255.255" => 4294967295
    "300.168.1.101"   => 0 (invalid)

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

Help up make CodePrepper better
-------------------------------
If you have an alternative solution that uses a different approach or is more
optimal than the solution provided in `answer.c`, please email it to
<codeprepper@gmail.com>. If it compiles and passes our unit-tests, we will
feature it in `answer.c` and give you credit for it.
