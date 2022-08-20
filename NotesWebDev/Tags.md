>In conjunction with [[Attributes]] and [[Entities]]

&nbsp

1. `<!DOCTYPE html>` tag starts any html file by conventional standards
2. `<html>` `<html>` tags hold the content of the file between them
3. `<head>` `</head>` holds metadata of the web page.
4. `<body>` `</body>` holds all the code which makes the site visible over a web browser
5. `<title>` `</title>` comes under the `<head>` **(metadata)** section and is the title of the webpage. This will show up as the name of the tab of the browser.
6. Under body comes `<h1>` `</h1>` which denotes the B of any web page, should only be one in an entire body in most cases.
7. `<p>`  `</p>` is the **paragraph** tag, places a paragraph of text in the page.
8. `<hr>` is a **horizontal rule** (line).
9. `<br>` is a line break usually used between `<p>`.
10. `<em>` `</em>` is the **emphasis** tag, usually makes the text in between italics to emphasize the content enclosed. 
11. `<strong>` `</strong>` is a tag which usually makes the text **bold and thicker** to give the text enclosed a real **strong impression**
12. `<u>` `</u>` underlines the enclosed text
13. `<style>` `</style>` tag generally enclose a piece of **CSS** code.
14. `<meta>` store metadata with a range of attributes and don't have a closing tag
15. `<link>` is used to link files and such things with **href** **(hypertext referencing)** and a range of other attributes. Has no closing tag.
16. `<abbr>` `</abbr>` is another in-line tag which denotes **abbreviation**, used with the *title* attribute. Gives the full form of some chosen abbreviation when pointer hovers over the text enclosed. eg: 
	- `<abbr title="Mozilla Developer Network"> MDN </abbr>`
	- **Isn't that useful**
17. `<address>` `</address>` tag tells the browser that the text enclosed is an actual address. Gives some semantic meaning but isn't that useful in the larger picture.
18. `< !-- This is an html comment -- >` is the standart for writing a comment, but be aware that it can be seen in the chrome dev tools by the public too. So don't store any valueable information.
19. `<ol>` `</ol>` is the ordered list tag.
20. `<ul>` `</ul>` is the unordered list tag.
21. `<dl>` `</dl>` is the description list tag, used together with 
	1. `<dt>` `</dt>` this is the description term tag, like the main heading of some definition.
	2. `<dd>` `</dd>` is the description definition tag used just after `<dt>` to add definition to the main term.
22. `<li>` `</li>` is the list tag, enclose words to make a list of. Used within any ordered/unordered list tag.