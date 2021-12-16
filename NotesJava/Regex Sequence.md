## Regular Expression Escape Sequences

### Escape special characters using \
 . \ are both special characters
 Escape **special characters and any of the quantifiers below using \ **

&nbsp
&nbsp
### Important -- \1 will check for repetition
Eg - (\\w+)\\1 will repeatedly check for the word group it matched.

 &nbsp

. - Any Character Except New Line

\d - Digit (0-9)

\D - Not a Digit (0-9)

\w - Word Character (a-z, A-Z, 0-9, _)

\W - Not a Word Character

\s - Whitespace (space, tab, newline)

\S - Not Whitespace (space, tab, newline)  

&nbsp
&nbsp
&nbsp

\b - Word Boundary

\B - Not a Word Boundary

^ - Beginning of a String

$ - End of a String

&nbsp
&nbsp
&nbsp

[] - Matches Characters in brackets

[^ ] - Matches Characters NOT in brackets

| - Either Or

( ) - Group

&nbsp
&nbsp
&nbsp

Quantifiers:
***Default quantifier is 1***
(*)  -0 or More (no bracket here)

(+)  -1 or More (no bracket here)

? - 0 or One

{3} - Exact Number == **Check if it occurs 3 times**

{3,5} - Range of Numbers (Minimum, Maximum) == **Minimum of 3, Maximum of 5 occurences.**

&nbsp
&nbsp
&nbsp

#### Sample Regexs ####
[[Regex Examples]]
  

[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+