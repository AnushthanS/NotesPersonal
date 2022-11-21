
- Main file with menu
	- login gives user the access to their details(user file) and the access to booking interface(ticket_booking file)
	- switch case - menu for both possible cases
		- no arguments passed : input from user for login or register
		- arguments passed : direct files
	- command line arguments for user/admin choice and login/register
		- user/admin mode integer
		- register/login mode integer


- Package for login files
	- User and Admin Login files
- Package for booking files
	- Booking file
	- Ticket booking
		- will have a user token
		- give a booking to the user by adding to the user's array of bookings
- Admin file outside all packages
- Package for testing files
- Shows file as a Custom Data Type to be used in Composition in the Ticket Booking file, with a custom print ticket method.
