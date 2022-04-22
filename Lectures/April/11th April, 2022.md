#Monday

- First day of second semester
- DSA section 4/ B2
- PS & SS section B
- CA section C


### 11 AM - #DSA
- Introduction to DSA (Introductory class).
- Data structure basically is how you store data in a computer.
- A specific format of storage and organisation of data for efficient storage + retrieval.
- Some real world examples of data structures(Dictionary, undo/back/, Google map, printer scheduling(print spooler)).
- Introduction to complexity  analysis, basic complexity graphs.
- Pretty much rushed through time complexity, at least the basics.

### 12 PM - #CA
- The need to study computer architecture, why its (kinda) necessary to write complex problems efficiently.
- We'll study assembly language in this course too.


### 2 PM - #CA lab
- A linux virtual machine required for future lab sessions, will have to check UTM and parallel if nothing works.
- Download and extract the given  drive folder
- Run these 2 commands in that folder: 
make btest
./btest

gcc -O -Wall -m32 -lm -o btest bits.c btest.c decl.c tests.c

```ad-note 
clang -O -Wall -mfp32 -lm -o btest bits.c btest.c decl.c tests.c
```

- Try to make a rosetta terminal and check btest
- Try UTM+QEMU if it doesn't work
- Final option will be parallels with 80$ license