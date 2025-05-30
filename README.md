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

**21. Linear Search: Array**

Initialize A Array with 100 elements `arr[100]`, Take A Input From The User For Any Number They Want To Find From 1 To 100 And Store It In `input`. Now Create A Linear Search Program That Finds The Indexing Of Given Input Number.

```
Output Preview:

Enter The Number You Want From Array: 5
Number Found At The Index: 4
```

**22. Linear Search: Find The Second Largest Element In The Same Array Used In `Q.21`.  `Extra`: Also Find The  `Minimum` And  `Maximum` In Array, To Make It More Interesting Just Randomize The Elements Of Array.**

```
Output:

Max: 100 , Min: 1
Second Max: 99
```

**23. Vector Implementation With Class And Object:**

[1. Vector Object](SolutionQ23.cpp)

**24. Insertion In Vectors: Write a program to insert 5 integers into a vector `using push_back()`. Display the contents of the vector after each insertion. Input 5 Elements Then Show The Output**

```
Expected Input/Output Example:
---Input---
Enter The Integers 1: 10
Enter The Integers 2: 20
Enter The Integers 3: 30
Enter The Integers 4: 40
Enter The Integers 5: 50
---Output---
After Inserting 10: 10
After Inserting 20: 10 20
After Inserting 30: 10 20 30
After Inserting 40: 10 20 30 40
After Inserting 50: 10 20 30 40 50
```

**25. Insertion In Vectors:**

Write a program to:

- Create a vector of integers with initial elements `{10, 20, 30, 40}`.
- Insert a value entered by the user at a specific position `(index)`.
- Display the vector before and after insertion.

```
Expected Input/Output:
---Input---
Enter a number to insert: 25  
Enter the index to insert at: 2
---Output---
Before insertion: 10 20 30 40  
After insertion: 10 20 25 30 40
```

**26. Insertion:** 

**Write a program to manage a dynamic list of names:**

- Ask the user how many names they want to enter.
- Insert each name into a vector using `emplace_back()`.
- Insert a new name at a specific position (e.g., index 2).
- Display the vector after all insertions.

```
Expected Input/Output:

How many names do you want to add? 3
Enter name 1 : Alice 
Enter name 2 : Bob
Enter name 3 : Charlie 
Before insertion: Alice Bob Charlie 
Enter a name to insert: Diana
Enter the index to insert Diana: 2

After insertion: Alice Bob Diana Charlie

```
**27. Basic Deletion: Write a program that takes `n` integers from the user, stores them in a `vector`, and then deletes the `last element` of the vector. After deletion, display the remaining elements in the vector.**

```
Expected Input/Output:

Enter The Number Of Elements You Want: 5
Enter The 1 Element: 1
Enter The 2 Element: 2
Enter The 3 Element: 3
Enter The 4 Element: 4
Enter The 5 Element: 5
After Deletion Of Last Element: 1 2 3 4
```

**28. Deletion: Write a program that initializes a `vector` with some integers (e.g., {10, 20, 30, 40, 50}), takes an `index` as input from the user, and deletes the element at that index. Display the vector before and after the deletion.**

```
Expected Input/Output:

Enter the index from were you want to remove: 2
Befor Deletion: 10 20 30 40 50
After Deletion: 10 20 40 50
```
**29. Deletion: Write a program that stores n names `(strings)` in a `vector`. Then, ask the user to `input` a name to delete from the vector. If the name exists, remove it and display the updated vector. If the name does not exist, display an appropriate message.**

```
Expected Input/Output:

Enter the number of elements: 5
Enter the names 1 : Harsh
Enter the names 2 : Yash
Enter the names 3 : Varun
Enter the names 4 : Riya
Enter the names 5 : Ganesh
Before Deletion: Harsh , Yash , Varun , Riya , Ganesh  
Enter the name you want to delete: Riya

After Deletion: Harsh , Yash , Varun , Ganesh 
```

**30. Write a program to search for all occurrences of a specific element in a vector of integers. Print the indices where the element is found. If the element does not exist, print "Element not found."**

**`Example Input:
numbers = {10, 20, 30, 20, 40, 20}
search = 20`**

```
Expected Output:

Found The Element 20 At Index: 1
Found The Element 20 At Index: 3
Found The Element 20 At Index: 5
This Are The Indexs: 5 3 1
Element Not Found.
```

**31. Bubble Sorting Algorithm:**

**Problem: Write a program that takes an array of integers as input and sorts it in ascending order using the Bubble Sort algorithm. Then, print the sorted array..**

```
Input/Output:

Enter The Numbers Of Element: 5
Enter The Elements: 2
Enter The Elements: 5
Enter The Elements: 1
Enter The Elements: 6
Enter The Elements: 3 
2 5 1 6 3
Sorted Array:
1 2 3 5 6
```

**32. Problem: Given an array of integers and a value K, use the Bubble Sort algorithm to sort the array and extract the largest K elements. Return these elements in descending order.**

```
Input/Output:

Enter The Numbers Of 'K' Element You Want: 3
Enter The Number Of Element In Array: 5
Enter The Elements: 2
Enter The Elements: 5
Enter The Elements: 2
Enter The Elements: 6
Enter The Elements: 3
2 5 2 6 3
Largest 3 K Elements:
6 5 3
Full Sorted Array:
6 5 3 2 2
```

**33. Write a Selection Sort based program to:**

1. Take an array of n integers as input.
2. Sort the array in ascending order using the Selection Sort algorithm.
3. Print the sorted array.

```
Input/Output:

Enter The Number Of Element In Array: 10
Enter The Elements: 3
Enter The Elements: 12
Enter The Elements: 54
Enter The Elements: 56
Enter The Elements: 3
Enter The Elements: 4
Enter The Elements: 67
Enter The Elements: 2
Enter The Elements: 4
Enter The Elements: 4
3 12 54 56 3 4 67 2 4 4
Sorted Array:
2 3 3 4 4 4 12 54 56 67
```
**34. Modify the Selection Sort algorithm to:**

1. Sort the array in descending order.
2. Print the array after every iteration, showing the current state of the array.

```
Input/Output:

Enter The Number Of Element In Array: 5
Enter The Elements: 3
Enter The Elements: 2
Enter The Elements: 5
Enter The Elements: 2
Enter The Elements: 6

Original Array: 3 2 5 2 6

Array Pass 1: 6 2 3 2 5
Array Pass 2: 6 5 2 2 3
Array Pass 3: 6 5 3 2 2
Array Pass 4: 6 5 3 2 2

Sorted Array:
6 5 3 2 2
```

**35. Write a program to:**
1. Sort an array in ascending order using Selection Sort.
2. Extract the smallest k elements from the sorted array.
3. Print both the k smallest elements and the fully sorted array.

```
Input/Output:

Enter The Number Of Element In Array: 5
Enter The Elements: 3
Enter The Elements: 1
Enter The Elements: 5
Enter The Elements: 7
Enter The Elements: 3
Enter The Value Of K Elements: 3
Original Array: 3 1 5 7 3
K Smallest Elements From Array: 1 3 3
Sorted Array: 1 3 3 5 7
```
**36. Insertion Sort: Find the K largest elements from the array: `{8, 3, 1, 7, 4, 2, 9}`**
```
Input/Output:

Original Array: 8 3 1 7 4 2 9 
K Largest 3 elements are: 7 8 9
Sorted Array: 1 2 3 4 7 8 9
```

**37. Using Merge Sort, Sort This Given Array Of Integers: `{23, 5, 6, 23,55, 77, 545, 56}`**
```
Input/Output:

Original Array: 23 5 6 23 55 77 545 56 
Sorted Array: 5 6 23 23 55 56 77 545 
```

**38. Binary Search: Find an element in a sorted array.**
- **You are given a sorted array `arr[] = {1, 3, 5, 7, 9, 11}` and a target value `7`. Implement a binary search to determine if the target is present in the array. If found, return its index; otherwise, `return -1`.**
```
Output:

Element found at index 3
```
