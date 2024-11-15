# Practice Questions For Cpp
For all the basic core questions please check out this repo: [PQForC](https://github.com/VadaPavMan/Basic-Practice-Questions-for-C)

This repo is for all the C++ important concepts practice questions.

**1. Vector basic use case:**
Create a vector of an integer array, and define its size. then take numbers input from the user, store in array and display the numbers of array, define a function for display.

Output Example: 
```
Enter the size of vector: 5
Enter the number: 1
Enter the number: 2
Enter the number: 3
Enter the number: 4
Enter the number: 5
1 2 3 4 5
```

**2. Class and Object:**
Simple Class and object based practice question, Create a class **Student** with the following attributes:
- name (string)
- age (int)
- grade (char)
- totalmarks (int)

Add a method studentinfo that prints the details of the student with the grade and marks they obtained.

Create an object of the class and prompt the user to add the detail to get the grades and result. call the method **studentinfo** to display the student’s details.

Output Format:
```
Enter the number of students: 3
Enter the name of student: Harsh
Enter the age of student: 19
// Details of student with grades. //

The name of student is: Harsh
The age of student is: 19
Total marks obtained: 87
The grade of student is: A

Enter the name of student: Vikas
Enter the age of student: 17
// Details of student with grades. //

The name of student is: Vikas
The age of student is: 17
Total marks obtained: 85
The grade of student is: A

Enter the name of student: Kunal 
Enter the age of student: 19
// Details of student with grades. //

The name of student is: Kunal
The age of student is: 19
Total marks obtained: 69
The grade of student is: B
```
**3. Basic Single Inheritance:**
- Create a base class Person with attributes name and age.
- Derive a class Student from Person that adds roll_number and grade.
- Write a program to input and display the details of a student.
```
Enter the name of student: Vadapavman
Enter the age of Vadapavman: 21
Enter the roll number of Vadapavman: 69
Enter the grade Vadapavman got: A


Here's is the details of Vadapavman:
1. Name: Vadapavman
2. Age: 19
3. Roll Number: 69
4. Grade: A
```

**4. Another Single Inheritance**

- Create a base class Shape with a protected member area and a public method calculateArea().

- Derive a class Circle that calculates and displays the area of a circle.

- Use both protected and public access specifiers in your implementation.
