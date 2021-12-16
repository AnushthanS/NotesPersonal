Examples using [[Regex Sequence]].

### Q1-->Search for a mobile number. It should start with an 8 or 9 and have 10 total digits.
**[89] [0-9]{9} ** first digit is either 8 or 9 by the first set of brackets, the rest of the 9 digits can be any from 0-9, hence the {9} count.

&nbsp

### Q2-->First character uppercase, rest of the characters lowercase with only one digit allowed inbetween.
**[A-Z] [a-z]* [0-9] [a-z]\* **Default quantifier is 1, first character is uppercase, then followed by some lowercase letters where * signifies they may or may not be present there.
There will be only 1 digit and it will be followed by some more characters.

&nbsp

### Q3--> Check for an email id.
[A-Za-z0-9_\\.\\+\\-]+[@] [a-z]+[\\.][a-z]{2,3}
