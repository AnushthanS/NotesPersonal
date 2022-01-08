#data_type 
> *String in Java is immutable, which makes adding(or any other change) to it very inefficient.*
- Look at this piece of code ->
`String ans = "";`
`for(int i=0; i<26; i++){`
`char k= (char)('a'+i);`
`ans+=k;}`
`System.out.println(ans);`
- The code above should give the answer without any errors, but is **highly inefficient**. Since Strings are immutable, the compiler will literally *copy the old string, add the new character to it and then point the ans variable to it.*
- This will leave a bunch of old objects behind which will increase our space complexity to ***O(n^2).***
- In such situations, **StringBuilder** is used since it creates mutable objects similar to String and run the expressions required on the object without creating a bunch of garbage.
