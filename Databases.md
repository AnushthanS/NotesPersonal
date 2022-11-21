

### User 

password
username
name
phone_number
primary key(username)

### Admin

username
password
primary key(username)

### Movie

movie_id
movie_name
rating
genre
language
theatre_id
foreign key (theatre_id)
primary key (movie_id)


### Theatre

theatre_id
location
screen
no_of_tickets
theatre_name
primary key(theatre_id, screen)
  
### Booking status

username
date
time_slot
movie_id
theatre_id

  
### Shows

movie_id
theatre_id
date
time
primary key comprising all