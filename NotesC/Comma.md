## Consider the following code statements
```
int i = 1,2,3;
int j = (1,2,3);
```
-  **i = 1**, **j = 3**
-  *comma has left to right associativity.*
-  for i, there is no expression {no brackets}, it will simply select the first value;
-  for j, all terms are considered independent expressions: **(j=1, j=2, j=3)**. Such expressions are evaluated from left to right considering two expressions at a time, selecting the right expression, and then take another group.
-  Therefore, for j, first **(j = 1 , j = 2)** will be considered which will return **j = 2**, then **(j = 2, j = 3)** will be considered which will return **j = 3**. 