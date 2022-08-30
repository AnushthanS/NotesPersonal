## JavaScript is a Dynamic, interpreted language
- There is no need to declare a data type owing to its **dynamic nature**, unlike Java or C which are **static**.
- It is **interpreted**.
- `console.log('Hello World');` is the code for the **Hello World program**. It's as simple as it gets, there is a new *log* created in the javascript *console* and `Hello World` is the output shown.
- JavaScript is usually run in a web browser, since all browsers have a *JavaScript engine* built in to parse it. However, **node** can run JavaScript by itself on a system.
- To run JavaScript on a web browser, the console tag of the developer tools can be used for simple single line queries or use the `<script src="index.js" type="text/javascript"></script>` **line as written** to execute the index.js file in the browser console with the html file.
	- this `script` tag will be used near the end of the body closing tag to ensure that all the content of the webpage is properly displayed and then the browser starts to parse the javascript code.
- A variable is declared with **let** : `let variable = 10;` . This value can be changed anywhere in the whole code, and will undoubtedly give logical errors in the working of the code.
- This is a major disadvantage of dynamic languages. Therefore, it is advised that constant values are declared with **const**: `const c = 100;` 