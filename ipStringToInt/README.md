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
Time: O(N)
Space: O(1)

Instructions
------------
* Complete the required APIs in `question.c` to attempt this question. Don't
  edit the function prototype, your solution might not compile if you do.
* If you need some hints, look at `hints.c` instead.
* When you're done, compile your changes by running: `make question`
* Test your code using: `./question < input.txt`
* The solution is available in `answer.c` (compile using: `make answer`)
* Get the expected output using: `./answer < input.txt`
* Feel free to include any additional header files or define additional
  functions.
