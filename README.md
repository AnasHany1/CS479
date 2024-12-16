# CS479
Application description:
Sample input:
CoursesExams=[101,28/4/2016,A;201,3/5/2016,A;110,5/5/2016,C;103,5/5/2016,A;120,6/5/2016,D;132,7/5/2016,B]
Students=[191001,201,101,110,479;191002,201,110,103,202,420;191003,110,120,132;191006,103,132]

Our project’s function is to, firstly, take the user’s input in the same form as the sample input then creates 2 500x500 2D arrays. After the array is created, the code takes both inputs from the user and splits each of them on braces, commas, and semi colons. Then after the data is split, each of CoursesExams and Students is put into a different 2D array, each of the split items is put into its own cell, with each column being the data between 2 semi colons or between braces and a semicolon, hence making the extraction of data easier. After the code completes the distribution the user enters a function from below.

Functions:
number_Students: This function sees the number of X positions in the students array and prints 			    the last X position, hence printing the amount of students.

number_halls: This function is a counter that counts all the halls in the 2D array and checks for 	  		duplicates

student_min_id: This function checks for IDs smaller than 1910999 and if one is found it				  replaces it.

List_Student_Courses_Less: This function starts a nested for loop that counts the number of rows of each students and if the number of rows is less than the number given+1, because of the students ids on top, it increases the counter by one.

course_students: This function scans the columns for the given course and if found it the code prints the student’s ID.

Quit: This function quits the program.
 
