## Fast Output
- For multiple test cases requiring multiple answers to be placed on the output stream, it can take a large amount of the program's run time.
- Instead of choosing to print the answer, use *StringBuilder* to append the answer to an object and finally print the *StringBuilder* object.

## Fast Input
> A gist of the following [geeksforgeeks](https://www.geeksforgeeks.org/fast-io-in-java-in-competitive-programming/) post.
> 
![[FastReader.java]]

- *Scanner* is the slowest input method, partially due to its small buffer but mainly because of **parsing as taking input**.
- **BufferedReader** is really fast but a private FastReader class may be better(attached above).
