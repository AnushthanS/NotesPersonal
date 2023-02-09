```ad-info
splice(pos_index, no_of_elements, new_elements.....)
```

- will splice out the specified number of elements, replace them with the new elements provided, starting from the specified index.
- returns an array containing deleted elements

```ad-example
splice(2, 3, 10, 20, 30);// for [1, 2, 3, 4, 5, 6], output will be [1, 2, 10, 20, 30, 6]
```


---

```ad-info
slice(start_index, end_index)
// end_index not included
```

- will return a new array with the specified elements
- original array will not be modified