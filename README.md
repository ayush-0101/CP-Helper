# Competitive-Programming-Helper [![CodeFactor](https://www.codefactor.io/repository/github/iamayush18/competitive-programming-helper/badge)](https://www.codefactor.io/repository/github/iamayush18/competitive-programming-helper)
A Competitive-Programming Helper environment (specifically for GEdit Text editor) to automate and speed-up Running and Testing activities !
## About
This environment is for automated running and testing of code _directly from the text editor_.

_Use of this environment:_
* Automates running of source code directly from GEdit through a BASH script
* Tests automatically the running source with the testcases provided against the Expected output file
* Immediately displays the Verdict viz. Passed, Wrong Answer or Presentation Error in gnome-terminal
* In case of Wrong Answer, shows the Expected Answer against the Actual Answer along with line number of mismatch 
* Provides the option of throwing the corresponding Failing Test Case in case of Wrong Answer
* Shows the Execution time of the ran source
* [A representational screenshot](https://www.dropbox.com/s/g5yqmbucb4hguvg/testing.png?dl=0)
## Setting up
1. Clone or Download as a ZIP and start working inside the directory.
2. Copy the contents of the _C++ Build&Test.sh_, which is the BASH script for automation for a C++ code. (_Scripts for others will be added soon._)
3. Open GEdit (Install External Tools plugin if not) and create a new script for C++ and paste the contents inside it. Give a trigger key combination inside 'Shortcut key'.
4. Try to preserve the pre-written block of code inside main() present by default in code.cpp file, as it contains code for reading/writing from/to files, calculating and displaying Execution time.
5. Now it's ready for use !
## Using
1. Copy the testcases of any problem into _testfile.txt_. (You can generate your own testcases using a test generator file into _testfile.txt_.)
2. Copy the Expected Output of the problem into _Eoutput.txt_.
3. Write your code inside _code.cpp_.
4. Run and Test your code directly from GEdit by pressing the Shortcut key combination (set in GEdit External Tools).
5. (Optional) You can opt for displaying the corresponding failing test cases in case of a _Wrong Answer_.
## About some files used
   * ### _judge.c_
     - **It contains the source code in C for the File Comparison utility intended for automated Testing.**
   * ### _Aoutput.txt_
     - Gets updated with the output of the running source.
   * ### _debug.txt_
     - For debugging purposes.
   * ### _time.txt_
     - Stores the running time.
