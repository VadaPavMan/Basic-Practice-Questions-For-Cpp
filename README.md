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

**5. Multiple Inheritance**

Problem:

Create two base classes:
- **Person** with a name attribute and a method displayName().
- **Work** with an occupation attribute and a method displayOccupation().

Create a derived class **Employee** that inherits from both Person and Work. The Employee class should display the name and occupation of the person.

OutPut:
```
Enter the name here: Vadapavman
Enter the occupation here: Berozgar 
Your Name is: Vadapavman
Your Occupation: Berozgar
```
**6. Multiple Inheritance: Handling Overlapping Methods**

Problem:

Create two base classes:

- ClassA with a method display() that prints "This is ClassA".
- ClassB with a method display() that prints "This is ClassB".
- Create a derived class ClassC that inherits from both ClassA and ClassB.
- In ClassC, override the display() method to call both ClassA and ClassB's display() methods.

OutPut:
```
This is the Class A.
This is the Class B.
```

**7. MultiLevel Inheritance: Adding Levels of Attributes**

Problem:

- Create a base class Animal with a method eat() that prints "This animal eats food."
- Create a derived class Mammal that inherits from Animal and adds a method walk() that prints "This mammal can walk."
- Create another derived class Dog that inherits from Mammal and adds a method bark() that prints "The dog barks."

OutPut:
```
Hello World!
The dog barks.
This Mammal can walk.
This animal eats food.
```
**8. Multilevel Inheritance: Passing Data Through Levels**

Problem:

- Create a base class Shape with protected attributes width and height, and a method setDimensions() to set their values.
- Create a derived class Rectangle that inherits from Shape and adds a method calculateArea() to calculate the area of the rectangle.
- Create another derived class Cuboid that inherits from Rectangle and adds a method calculateVolume() by multiplying the area with the depth (provided as input).

OutPut:
```
Enter the depth: 32.1
This is the area:985.66
Volume of cuboid: 31639.7
```

**9. Multilevel Inheritance: Real-Life Application**

Problem: 

- Create a base class Person with attributes name and age, and a method displayPersonInfo().
- Create a derived class Student that inherits from Person and adds an attribute rollNumber and a method displayStudentInfo().
- Create another derived class GraduateStudent that inherits from Student and adds an attribute specialization and a method displayGraduateInfo() to display all details, including specialization.

Output:
```
Name: Vadapavman
Age: 69
Roll Number: 57
Graduated from: BCA
```

**10. Simple Constructor Based Program**

- Create class with the attributes name, age and gpa.
- Now create the constructor to display the attributes before the modification.
- Now in main function, create the name1, age1, and gpa1, Take input from the user for all.
- In final, create the object named student and pass the all 3 variables.

Output: 
```
Enter the name: Vadapvman
Enter the age: 21
Enter the GPA: 8.9
Before the change: Name - Vadapvman
Age - 21
GPA - 8.9

This is the constructor dont know how to use it lol
Now Enter the Name here: Vadapavmandied
Enter the Age: 23
Enter the GPA: 4.2
Name: Vadapavmandied
Age: 23
GPA: 4.2
```
