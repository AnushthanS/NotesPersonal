## This is mostly like Java or C formatting
#format
Discussed for [[NotesGo/N4]]
### General 
- %v = value in default format
- %T = data type of value
- % % = literal percent

### Boolean
- %t = true or false

### Integer
- %b = base 2 ** binary**
- %o = base 8  **octal**
- %d = base 10 (any number really, no chage) **decimal**
- %x = base 16 **hexadecimal**

### Floating Points
- %e = scientific notation
- %f or %F = decimal no exponent
- %g = for large exponents

### Strings
-  %s = default
-  %q = double quoted strings

### Width and Precision 
**Works exactly like every other language. Check -->**
![[FormatsImp.java]]
- {argument index}, {flag}, {width}, {.precision} format in this order.
- %f is default width, default precision.
- %9f will have 9 width, default precision -- right justification which is the default. It pads the left side with spaces.
- %.2f will have the default width, 2 digit precision.
- flags like **- , ( + space** all work as they do.