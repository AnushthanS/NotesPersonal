#data_type 
- Primitive data types: 
	- String - Concatenation in console.log works just like Java
	- number
	- boolean
	- undefined
	- null
	- symbol
- Reference data types:
	- object
	- arrays
	- functions


### Objects
- Are quite different from most programming languages, look similar to a **structure**
```
let person = {
	name: 'Anushthan',
	age: 20
};
```

- The code above defines an object in js, {} are termed object literals.
- Properties can be accessed and changed similar to a struct in C.
- `person.age = 21;` This is often called the **dot notation**.
- `person[20] = 21;` is called the **bracket notation**
- The dot notation is almost always preferred to bracket notation

### Arrays
- `[]` is called an array literal
- Similar to most other programing languages
- Since JavaScript is dynamic, an array can store data of any type, its size can be modified anywhere as well as the content in it can be changed at any time with no errors.