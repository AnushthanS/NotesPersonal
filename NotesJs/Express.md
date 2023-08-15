- `listen(port)` starts the server, listen being an express function
- this will create a server, but to actually respond to any request, use a `get` function
	- will respond to a `get` request

```ad-example
app.get('/', (req, res) => {

res.send('Hello World');

});

```

- The `'/'` is the page location the client has required, which by default will be the home directory