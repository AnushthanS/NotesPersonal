> In conjunction with [[Tags]] and [[Entities]]


```ad-note
`id` should be avoided since it is unique for the whole html document. An `id` cannot be used again for the entire document. Use `class` instead. It can be reused and gives better functionality for css definitions.
``` 

- A common attribute used with html tag is *lang* used to set the language of the content of the web page `<html lang="en">`

&nbsp
- *style* attribute can be added to most text-based tags to get quick css formatting.

### Tag = `<meta>`
1. *charset*, usually using **UTF-8** `<meta charset="UTF-8">`
2. *name* for giving some information/definition, used together with *content* which stores the word content which the *name* heading stores. Eg:
	- `<meta name="author" content="Anushthan Saxena">`
	- `<meta name="description" content = "Learning HTML">`

### Tag = `<link>`
1. *rel* describes the realtionship of the link, can be something like 
	- `<link rel="icon" href="icon.png" type="image/x-icon">`
2. The above example also uses *href* **(hypertext referencing)** and *type* attributes

### Tag = `<abbr>`
- *title* is the text which should appear when hovering over the abbreviated word.

### Tag = `<a>`
- `href` and maybe `download`. `href` can have different kind of values: