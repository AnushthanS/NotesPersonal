#data_type 
## Arrays ->
---- 
1. In C, array boundaries are not checked. Basically there is no IndexOutOfBounds exception like Java.

2. There is no function to fill arrays, everything is stripped down. 
3. Upon initialization of the first element, rest of the elements of an array are automatically allotted zero value(at least that is the case for numerical arrays)
```ad-example
To fill any array at initialization, use something like this
arr[10] = {0};
The above code has initialized an array of size 10 and filled it with zeroes.
```

4. On declaration of multidimensional arrays, the number of columns have to be specified compulsarily.

&nbsp

