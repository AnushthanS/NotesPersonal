# Inner Class ->

>**Really helpful [geeksforgeeks](https://www.geeksforgeeks.org/inner-class-java/) article.**

- An advanced topic of Object Oriented Programming, it is a **class declared inside another class or interface to use its private methods.**
- Mainly introduced to make code more realistic and more readable resulting in optimized code modules.

There are basically *four types* of inner classes:
1. ***Nested Inner***
2. ***Method Local Inner***
3. ***Static Nested***
4. ***Anonymous Inner***
****
### 1. **Nested Inner Class ->**
- It can access any private instance variable of the outer class. 
- Like class, an interface can also be nested and can have access specifiers.
- Like any other instance variable, it can have any access modifier.
- *We cannot have a static method in a nested inner class because an inner class is implicitly associated with an object of its outer class so it cannot define any static methods for itself.*

&nbsp

### 2. **Method Local Inner Class ->**
- Class is declared *inside a method of an outer class*.
- It was not possible to to access any non-final local variable of the outer class till JDK 1.7

&nbsp

### 3. **Static Nested Classes ->**
- Static nested classes are technically not inner classes, they are like a static member of the outer class.

&nbsp
### 4. **Anonymous Inner Classes ->**
>**Already discussed in [[Comparator]].**

 Anonymous inner classes are declared without any name at all. They are creatred in two ways ::
 1. *As a subclass of the specified type.*
 2. *As an implementer of the specified interface.*