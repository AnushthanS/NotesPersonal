Continuing off of [[Regex in Java 1]], some quick points -->
1. Java uses  \ \ instead of \ for escape sequence in regex pattern.
2. ***()*** groups a String together. 
Eg- if [abc] is passed in a pattern, it will check for either a or b or c, even when they don't occur together. On the contrary, (abc) will check for the String abc.
3. Using **(s1|s2)** with () checks for either of the 2 Strings. 
4. [This Matcher Regex tutorial is helpful](http://tutorials.jenkov.com/java-regex/matcher.html).
5. [This Pattern Cheat Sheet is helpful](https://www.jrebel.com/blog/java-regular-expressions-cheat-sheet).
6. [This grouping tutorial is helpful](https://docs.oracle.com/javase/tutorial/essential/regex/groups.html), for this extremely important beginner [problem](https://www.hackerrank.com/challenges/duplicate-word/problem).
>Solution -->
![[DuplicateRegex.java]]