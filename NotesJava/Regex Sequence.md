## Regular Expression Escape Sequences

### Escape special characters using \
 . \ are both special characters
 Escape special characters using \

. \ are both special characters

&nbsp
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
(*)  -0 or More (no bracket here)

(+)  -1 or More (no bracket here)

? - 0 or One

{3} - Exact Number

{3,4} - Range of Numbers (Minimum, Maximum)

&nbsp
&nbsp
&nbsp

#### Sample Regexs ####

  

[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+