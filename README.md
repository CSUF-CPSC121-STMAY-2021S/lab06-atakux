# Laboratory Exercise

## Laboratory Objectives
1. Explore and use various tools such as: GitHub, VirtualBox, Tuffix, Linux Terminal, and Atom.
1. Write and compile C++ code using:
     1. loops
     1. arrays
     1. class constructor, destructor, member functions
     1. object composition
     1. specification file, implementaiton file 
1. Run and test executable files.

## Getting Started
1. Open the Terminal program in Tuffix.
1. Change the present working directory to the `Documents` directory by typing the following command at the command prompt:

    ```
    cd Documents
    ```

1. Make a copy of this Github repository on your computer using the `git` and `clone` commands that you will input to the terminal. The commands take a URL as a parameter to specify where it can get a copy of the repository. You can find the URL by clicking on the green *Clone or download* button at the top right part of this page. Copy the URL and replace the example text shown below. Note that `username` should be replaced with your own Github username. When you hit <kbd>Enter</kbd> it will ask you to provide your Github username and password. Once done, you will have a copy of the repository on your computer.
    ```
    git clone https://github.com/CSUF-CPSC121-STMAY-2021S/lab06-username.git
    ```
1. Navigate into the new directory using the command line. Note that `username` should be replaced with your own Github username.  As a shortcut, you can type the first few letters of the folder name and press <kbd>Tab</kbd> so that it auto completes the folder name for you.

     ```
     cd lab06-username
     ```
     
## Instructions
1. Title Comment Block
     1. Create your source code file named `main.cpp`, and at the very top of the source code use three one line comments to document your name, date, and the exercise, using the following format:
          <pre>Name: <i>Stephen May</i><br>Date: 01/01/2021<br>Exercise: Lab06 Solution</pre>
1. Write a C++ program that performs as a Tuffy Titan Height Calculator which prompts the user for the name of a person and his/her height in feet and inches, where the name can contain spaces. Your program should allow a maximum of 5 inputs and should finish the input cycle when the user types xxx when prompted for the name. Your program should store each user input data into an array of Person objects, where each contains a Height object, for later processing. Once the user types xxx, your program should read from the array of Person objects and print out a report listing the name, feet, inches, centimeters, and meters of each person, where the centimeters and meters are calculated based on the user input. Your program should use the prompt and output formats exactly as provided in the samples output below.

1. Your Height class should meet the following requirements:
     1. Declare a `Height` class in a specification file named `height.hpp`.
     1. Define all member functions that are not inline member functions in an implementation file named `height.cpp`.
     1. Declare private member variables to hold the feet and inches.
     1. Declare a constructor member function that assigns the value `22` to both the feet and inches member variables.
     1. Declare a destructor member function that prints out to the standard out the string `<DEBUG:Height destructor called>`.
     1. Declare public setter/getter member functions named `setFeet` and `getFeet` for the feet member variable.
     1. Declare public setter/getter member functions named `setInches` and `getInches` for the inches member variable.
     1. Declare a public member function named `getCentimeters` to calculate and return the height in centimeters.
     1. Declare a public member function named `getMeters` to calculate and return the height in meters.
 
 1. Your Person class should meet the following requirements:
     1. Declare a `Person` class in a specification file named `person.hpp`.
     1. Define all member functions that are not inline member functions in an implementation file named `person.cpp`.
     1. Declare private member variables to hold the name and Height object of a person.
     1. Declare a constructor member function that assigns the value `CSUF` to the name member variable.
     1. Declare a destructor member function that prints out to the standard out the string `<DEBUG:Person destructor called>`.
     1. Declare public setter/getter member functions named `setName` and `getName` for the name member variable.
     1. Declare a public member function named `setFeet` that calls the Height class setFeet member function.
     1. Declare a public member function named `setInches` that calls the Height class setInches member function.
     1. Declare a public member function named `getFeet` that calls the Height class getFeet member function.
     1. Declare a public member function named `getInches` that calls the Height class getInches member function.
     1. Declare a public member function named `getCentimeters` that calls the Height class getCentimeters member function.
     1. Declare a public member function named `getMeters` that calls the Height class getMeters member function.

1. Compile the file using the command below. The `-std` option tells the compiler that it will use C++ version 17 standards and the `-o main` option tells the compiler to place the executable code into a file called `main`.

    ```
    clang++ -std=c++17 main.cpp person.cpp height.cpp -o main
    ```
1. Run the program using the command below and repeat the steps above until you are satisfied your program output meets the above requirements.  I strongly suggest that you run your program using each of the sample outputs below and ensure that all blank lines and new lines are exactly as below.  Note that there are 2 blank lines between amount inserted and the dispensed or error output.

    ```
    ./main
    ```


1. Typical input and output:
     ```
     *** TUFFY TITAN HEIGHT CALCULATOR ***

     Enter first name (type xxx when finished): Tuffy Titan

     Enter feet: 7

     Enter inches: 6

     Enter first name (type xxx when finished): Buzz Lightyear

     Enter feet: 0

     Enter inches: 11

     Enter first name (type xxx when finished): Donald Duck

     Enter feet: 3

     Enter inches: 0

     Enter first name (type xxx when finished): xxx

     Name                 Feet Inches Centimeters Meters
     ==================== ==== ====== =========== ======
     Tuffy Titan             7      6       228.6  2.286
     Buzz Lightyear          0     11        27.9  0.279
     Donald Duck             3      0        91.4  0.914
     <DEBUG:Person destructor called>
     <DEBUG:Height destructor called>
     <DEBUG:Person destructor called>
     <DEBUG:Height destructor called>
     <DEBUG:Person destructor called>
     <DEBUG:Height destructor called>
     <DEBUG:Person destructor called>
     <DEBUG:Height destructor called>
     <DEBUG:Person destructor called>
     <DEBUG:Height destructor called>
     ```

1. Run the unit testing program to ensure that your program runs as expected using predefined user input.

    ```
    make test
    ```
    
    <i>Note: You will be prompted to install the cmake program the first time you run the make test command on the device you are working on.  Answer `Yes` to install the program, and you will need to enter the Tuffix superuser (sudo) password, which should be `student`. After you have installed the cmake program, run the `make test` command again.</i>
    
    The unit testing will output the results of a series of tests using specific input and expected output.  Any error will stop the unit testing and will provide information on where the expected output is different from the actual output.  You will need to edit your source code to fix the error, recompile your program, and run `make test` repeatedly until it passes all the test.

## Submission
Periodically throughout the exercise, and when you have completed the exercise, **submit the complete repository to Github**.

   <pre>git add .<br>git commit -m "<i>your comment</i>"<br>git push</pre>

In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

   <pre>git config --global user.email "<i>tuffy@csu.fullerton.edu</i>"<br>git config --global user.name "<i>Tuffy Titan</i>"<br>git commit -m "<i>your comment</i>"<br>git push</pre>

When you completed the final Github push, go back into github.com through the browser interface and ensure all your files have been correctly updated.  You should have the following files:
    <pre>main.cpp<br>main<br>person.hpp<br>person.cpp<br>height.hpp<br>height.cpp<br>unittest.xml (in the test folder)</pre>
    
## Grading
1. All points add up to a total of 100 points possible as detailed below.  Partial credit will be given where applicable.

| Points | Description |
| --- | --- |
|50|initial git clone of this repository to your Tuffix machine|
|5|main.cpp file submitted contains the main program structure and meets the program requirements|
|5|main executable file submitted runs without crashing|
|5|person.hpp file submitted contains the Person class declaration and meets the program requirements|
|5|person.cpp file submitted contains the Person class member functions and meets the program requirements|
|5|height.hpp file submitted contains the Height class declaration and meets the program requirements|
|5|height.cpp file submitted contains the Height class member functions and meets the program requirements|
|20|unit testing results submitted pass each test|
