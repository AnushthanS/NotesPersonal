> https://btholt.github.io/complete-intro-to-web-dev-v3/
- IDs are more specific than classes, which are in turn more specific than tags.
	- All the more reason to avoid using ids. Use classes and tags to cascade css.

- Avoid css cascading as much as possible. Although css is a highly flexible stylesheet, it will more often than not become a headache if the cascading fails and we have to delete stuff to make the css file itself shorter for potentially faster site access times

 ### pseudoclasses 
	 like `hover` or `first-child`/`last-child` are extremely useful.

- https://css-tricks.com/pseudo-class-selectors/ 
- https://css-tricks.com/snippets/css/complete-guide-grid/


/* border box model: https://css-tricks.com/box-sizing/ */
html {
    box-sizing: border-box;
}
*,
*::before,
*::after {
    box-sizing: inherit;
}