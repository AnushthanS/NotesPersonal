 # 1
- Java has its own Regex API to make it easier for pattern searching -- java.util.regex.*;
- Important Classes are **Matcher** and **Pattern**.


- While [[Regex Sequence]] tells the major quantifiers and sequences, some java specific are also listed in [Pattern](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/util/regex/Pattern.html) Class Documentation (extremely helpful).
- The matching operations similar to our examples in [[Regex Examples]] are performed using the [Matcher](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/util/regex/Matcher.html) Class.
- [geeksforgeeks for java regex](https://www.geeksforgeeks.org/regular-expressions-in-java/) is helpful as usual.

&nbsp
&nbsp
&nbsp

### Pattern Class -
*java.util.regex.Pattern;*
There are no public constructors for Pattern class, we use a *compile(Regex_Pattern)* method to change the string passed into a Pattern object, which is then matched with.

### Matcher Class -
*java.util.regex.Matcher;*
Matcher class only works on Pattern type objects. Pass a string into the *matcher(String)* object like : 
`Pattern p = Pattern.compile(String Regex_Pattern);`
`Matcher m = p.matcher(String Test_String);`
Use m.find() to check for the occurence of passed pattern in a test string.

>These examples are helpful - 
![[HRFirstPatternMatching.java]]![[HRSecondPatternMatching.java]]
