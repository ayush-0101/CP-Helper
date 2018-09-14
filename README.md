# Competitive-Programming-Helper-Project
A Competitive Programming Helper Project specifically for GEdit Text editor to automate and speed-up Running and Testing activities !!
## About the Project
Competitive Programming is a sport where speed matters a lot.
So it becomes very important to reduce as much time as possible in doing other activities other than the coding stuff.

_So what this project basically does is :_
* Automates running of source code directly from GEdit through a BASH script
* Displays any Compilation errors or Warnings in the Editor itself
* Tests automatically the running source with the testcases provided against the Expected output file
* Immediately displays the Verdict viz. Passed, Wrong Answer or Presentation Error in gnome-terminal
* In case of Wrong Answer, shows the Expected Answer string against the Actual Answer string along with line number of mismatch 
* Provides the option of throwing the corresponding Failing Test Case in case of Wrong Answer
* Shows the Execution time of the ran source
* [A representational screenshot] (https://www.dropbox.com/s/g5yqmbucb4hguvg/testing.png?dl=0)
## Installing
1. Clone or Download as a ZIP and start working inside the directory.
2. Copy the contents of the _C++ Build&Test.sh_, which is the BASH script for automation.
3. Open GEdit (Install External Tools pugin if not) and create a new script for C++ and paste the contents inside it. Give a trigger key combination inside 'Shortcut key'.
4. Try to preserve the pre-written block of code inside main() present by default in code.cpp file, as it contains code for reading/writing from/to files, calculating and displaying Execution time.
5. Now you are good to go using it !!
## Using
1. Copy the testcases of any problem into _testfile.txt_.
2. (Optional) You can generate your own testcases using _testgen.py_ file into _testfile.txt_.
3. Copy the Expected Output of the problem into _Eoutput.txt_.
4. Write your code inside _code.cpp_.
5. Run and Test your code directly from GEdit by pressing the Shortcut key combination (set in GEdit External Tools).
6. A gnome-terminal opens up automatically and displays the results in a beautiful and user-friendly way.
7. (Optional) You can opt for displaying the corresponding failing test cases in case of a WA.
## About the Files
   * ### _judge.c_
     - **It is the main file of the project and contains the source code in C for the File Comparison utility intended for Automated Testing. (Open for contributions)**
   * ### _C++ Build&Test.sh_
     - **It contains the BASH script for the automated processes to run in backend. (Open for contributions)**
   * ### _judge_
     - This is the executable from _judge.c_ for direct execution through BASH script.
   * ### _time.txt_
     - To store the Execution time of the ran source.
   * ### _testfile.txt_
     - To keep the testcases for the source.
   * ### _Eoutput.txt_
     - To keep the Expected outputs for the source.
   * ### _Aoutput.txt_
     - Gets updated with the output of the running source.
   * ### _code.cpp_
     - It contains the Template code for C++ by default and is for writing the source.
   * ### _a.out_
     - Executable of _code.cpp_. 
   * ### _testgen.py_
     - For generating manual testcases.
