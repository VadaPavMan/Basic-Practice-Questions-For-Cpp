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

**11. 2 Programs Of Scope Resultion In Class/Object**
- [1. In Object](Scope_resolution_in_object1.cpp)
- [2. Inheritance](Scope_resolution_inheritance.cpp)

**12. WAP to create a class ‘item’ having member elements as code and price and member
functions as getdata() and show(). Using concept of Pointer to objects disaplay the data for 3
products.**

**13. WAP using the concept of function Overloading to calculate area of a circle , triangle and
square. The common name to calculate the area of all the three shapes will be area().**

```
The area of circle: 91.6088
The area of triangle: 21.93
The area of square: 16
```
**14. (Basic) WAP to implement a class called BankAccount that has private member variables for
account number and balance. Include member functions to deposit and withdraw money from
the account.**

```
Enter The Account Number To Set: 6339565
Your Bank Account Number Is: 6339565
Enter The Amount To Deposit: 500
Enter The Amount To Withdraw: 14444  
Insufficient funds, Account Does Not Have The Sufficient Balance To Withdraw.
```

**15. Create a class Rectangle with private members length and width. Write a constructor that uses the this pointer to initialize the private members. Include a member function area() to calculate and return the area of the rectangle.**


**16. Create a class Person that contains private attributes name and age.
Write a constructor to initialize the attributes using the this pointer.
Add a member function isOlderThan(Person other) that compares the ages of the current object and the other object, and returns true if the current object is older. Use the this pointer in the implementation.**

---
### 🧑‍💻**Data Structure-Based Questions Starts From Here.**

**17. Create This Pattern:**

```
Take Number: 5

    1
   121
  12321
 1234321
123454321
```

**18. Combination Calculator: Write A Program To Find The nCr**

**Output:**
```
//Input: nCr(6,5);

Output:
Combination Calculation: 6
```

**19. Traversal And Finding The Minimum And Maximum Value In Array.**

```
output: 
1 2 3 4 5 
Max: 5
Min: 1
```

**20. Create a vector of integers and input n elements from the user. Display the elements using a loop.**

```
Enter The Size Of Vector: 5
Enter The Element: 1
Enter The Element: 2
Enter The Element: 3
Enter The Element: 4
Enter The Element: 5
1 2 3 4 5
```
