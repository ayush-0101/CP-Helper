# Competitive-Programming-Helper-Project
A Competitive Programming Helper Project specifically for GEdit Text editor to automate and speed-up Running and Testing activities !!
## Why this project?
Competitive Programming is a sport where speed and efficiency both matter a lot.
It becomes very important to reduce as much time as possible in doing other activities other than the coding stuff.

_So what this project basically does is :_
* Automates running of source directly from GEdit (using any trigger key)
* Displays any Compilation errors or Warnings in the Editor itself
* Tests the running source with the testcases provided against the Expected output file
* Displays the Verdict viz. Passed, Wrong Answer or Presentation Error
* Shows the Expected Answer string at the line of Wrong Answer in case of Wrong Answer
* Provides an option of throwing the corresponding Failing Test Case in case of Wrong Answer
* Shows the Execution time of the ran source
## Installing
1. Clone or Download as a ZIP and start working inside the directory.
2. Copy the contents of the _C++ Build&Test.sh_.
3. Open GEdit (Install External Tools pugin if not) and create a new script for C++ and paste the contents inside it. Give a trigger key combination in 'Shortcut key'.
4. Try to make use of the pre-written block of code inside main() present by default in code.cpp file, as it contains code for reading/writing from/to files, calculating and displaying Execution time.
5. Now you are good to go using it !!
## Using
1. Copy the testcases of any problem into _testfile.txt_.
2. (Optional) You can generate your own testcases using _testgen.py_ file into _testfile.txt_.
3. Copy the Expected Output of the problem into _Eoutput.txt_.
4. Write your code in _code.cpp_.
5. Run and Test your code directly from GEdit by pressing the Shortcut key combination (set in GEdit External Tools).
6. Enjoy saving time !!
## About the Files
   * ### judge
     - This is the main File Comparison executable that is executed after a source is ran to test it.
   * ### judge.c
     - It contains the source code in C for the File Comparison utility.
   * ### C++ Build&Test.sh
     - It contains the shell script for the automated processes to run in backend.
   * ### time.txt
     - To store the Execution time of the ran source.
   * ### testfile.txt
     - To keep the testcases for the source.
   * ### Eoutput.txt
     - To keep the Expected outputs for the source.
   * ### Aoutput.txt
     - Gets updated with the output of the running source.
   * ### code.cpp
     - It contains the Template code for C++ by default and is for writing the source.
   * ### a.out
     - Executable of _code.cpp_. 
   * ### testgen.py
     - For generating manual testcases.
