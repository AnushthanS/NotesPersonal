create table Customer(
Cust_ID varchar(5) UNIQUE,
name varchar(30),
city varchar(15),
state varchar(15),
pincode int,
products varchar(40),
price int);

insert into Customer values( 'C109', 'John', 'Mumbai', 'Maharastra', 651127, 'football kit', 6255);

update Customer set price=

select products from Customer where products like '%D%';
select Cust_ID, name from Customer where city like '%Chennai%';
select * from Customer where Cust_ID='C104' or  Cust_ID='C108';
select products from Customer where price>2000 && price<=5000;


----

create database business;
use business;

create table employee(
emp_no int,
emp_name varchar(30),
doj Date,
ph_no bigint,
dept_name varchar(30),
designation varchar(30),
salary int
);

insert into employee values(4600,'John','2019-05-2',9426123323,'Sales','Sales Manager',45000);

insert into employee values(4601,'Nikhil','2019-04-3',9423123423,'HR','HR',47000);

insert into employee values(4602,'Raj','2019-04-4',9426113423,'Accounts','CA',42000);

update employee set salary=25000 where designation='typist';
'\N'



insert into Customers values( 2505, '1960-03-10', 'f', 'Kelvin', 'Hamburg', 'Germany');

insert into products values( 1, 1000, 'pen', 'yes', 100);
insert into products values( 2, 1100, 'toy', 'no', 10);
insert into products values( 3, 2505, 'pencil', 'yes', 30);
insert into products values( 4, 1205, 'duck', 'yes', 50);
insert into products values( 6, 200, 'hat', 'yes', 10);
insert into products values( 7, 2505, 'pot', 'no', 90);
insert into products values( 9, 1100, 'chalk', 'no', 10);

alter table products add constraint foreign key (ProductID) references customers(CustomerID);

select * from customers where City like 'a%' or City like 'b%' or City like 'c%' or City like 'd%' or City like 'e%' or City like 'f%';


----

create table employee(
 emp_id int AUTO_INCREMENT,
 emp_name varchar(30),
 emp_dept varchar(30),
 emp_age int,
 place varchar(30),
 income int,
 doj Date,
 PRIMARY KEY (emp_id));


 mysqlimport --ignore-lines=1 \
      --fields-terminated-by=, \
      --local -u root \
      -p lab4 \
      account_relation.csv


 load data infile "/Users/anushthan/Development/NotesPersonal/LabWork/DBMSLab/account.csv"  into table account fields terminated by ',';




2. select customer_name,borrower.loan_number,amount from borrower, loan where borrower.loan_number = loan.loan_number;

3. select customer_name,b.loan_number,amount from borrower b, loan l where b.loan_number = l.loan_number and l.branch_name= "Perryridge";

4. select branch_name from branch where assets > some(select assets from branch where branch_city = "Brooklyn");

5. select customer_name FROM loan l, borrower b where l.loan_number = b.loan_number && l.branch_name = "Perryridge" ORDER BY customer_name ASC;
6. select count(*) from customer;
7. select avg(balance) from account;

10. select avg(balance) from account where branch_name= "Perryridge";
9.  select sum(amount) from loan;

11. select branch_name, avg(balance) from account group by branch_name;

12. select branch_name, avg(balance) from account group by branch_name having avg(balance) > 1200;


select depositor.customer_name, avg(balance) 
from depositor, account, customer
 where depositor.account_number=account.account_number and depositor.customer_name=customer. customer_name and customer_city='Harrison' 
 group by depositor.customer_name 
 having count(distinct depositor.account_number)>=3;



****

Lab 6

select emp_name, doj from employee
where emp_dept = (select distinct emp_dept from employee 
where emp_name = "Mark") and emp_name != "Mark";

select emp_id, emp_name
from employee
where income > 
(select avg(income) from employee)
order by income desc;


create table Sailors(
sid int,
sname varchar(30),
rating int,
age real
);

create table Boats(
bid int,
bname varchar(30),
color varchar(10)
);

create table Reserves(
sid int,
bid int,
day date
);

insert into Reserves values(22, 101, "1998-10-10"); 
insert into Reserves values(22, 102, "1998-10-10");
insert into Reserves values(22, 103, "1998-10-8");
insert into Reserves values(22, 104, "1998-10-7");

insert into Reserves values(31, 102, "1998-11-10");
insert into Reserves values(31, 103, "1998-11-6");
insert into Reserves values(31, 104, "1998-11-12");
insert into Reserves values(64, 101, "1998-9-5");

insert into Reserves values(64, 102, "1998-9-8");
insert into Reserves values(74, 103, "1998-9-8");


insert into Sailors values(22, "Dustin", 7, 45); 
insert into Sailors values(29, "Brutus", 1, 33);
insert into Sailors values(31, "Lubber", 8, 33.5);
insert into Sailors values(32, "Andy", 8, 25.5);

insert into Sailors values(58, "Rusty", 10, 35);
insert into Sailors values(64, "Horatio", 7, 35);
insert into Sailors values(71, "Zorba", 10, 16);
insert into Sailors values(74, "Horatio", 9, 40);

insert into Sailors values(85, "Art", 3, 25.5);
insert into Sailors values(95, "Bob", 3, 63.5);


select emp_name,emp_dept,doj from employee 
where emp_id in (select emp_id from employee where place = "india");

select * from sailors
where sid in
(select sid from reserves where bid = 101);

select bname from boats
where bid in (
select bid from reserves
where sid in
(select distinct sid from sailors
where sname = "Bob")
);

select sname from sailors
where sid in (
select sid from reserves 
where bid in
(select bid from boats
where color = 'red')
) order by age;


select distinct sid from reserves where bid in (select bid from boats where color="red" or color="green");


select count(sname) from sailors 
where sname in (select distinct sname from sailors);

9
select rating, age from (select rating, avg(age) as age from sailors group by rating) as t group by rating;

10
select age from 
(select avg(age) as age from sailors 
group by rating 
having count(*) >= 2) as ans;


5
select sid,sname from sailors 
where sid in 
(select sid from reserves r1 
where sid in 
(select sid from reserves r2 
where r1.day = r2.day and r1.bid != r2.bid));


insert into customer values ("Adams", "Spring", "Pittsfield");

insert into customer values ("Brooks", "Senator", "Brooklyn");
insert into customer values ("Curry", "North", "Rye");

insert into customer values ("Glenn", "Sand Hill", "Woodside");
insert into customer values ("Green", "Walnut", "Stamford");

insert into customer values ("Hayes", "Main", "Harrison");
insert into customer values ("Johnson", "Alma", "Palo Alto");

insert into customer values ("Jones", "Main", "Harrison");
insert into customer values ("Lindsay", "Park", "Pittsfield");
insert into customer values ("Smith", "North", "Rye");


insert into customer values ("Turner", "Putnam", "Stamford");
insert into customer values ("Williams", "Nassau", "Princeton");


Practice Questions assignment

select branch_name from account natural join depositor
where account.account_number in
(select account_number from depositor
where customer_name in
(select customer_name from customer
where customer_city = "Pittsfield"));

select customer_name, balance from account
natural join depositor 
where account.account_number = depositor.account_number 
and account.balance >= 700;

select sum(amount) as total from loan
where loan_number in 
(select loan_number from borrower
where customer_name = "Smith");


select branch_city, count(branch_city) from branch 
group by branch_city having count(branch_city) > 1;


select customer_name, branch_name, branch_city 
from depositor natural join account natural join branch where branch_city   in 
(select branch_city from branch group by branch_city having count(branch_city) > 1);

select customer_city, amount from customer left join borrower 
on customer.customer_name = borrower.customer_name 
left join loan on loan.loan_number = borrower.loan_number;


select customer_name, sum(balance) 
from customer  left  join depositor using(customer_name) 
left join account using(account_number) group by customer_name;



select customer_name,  sum(amount)from customer 
left join borrower using(customer_name) 
left join loan using (loan_number) group by customer_name;


create view view1 as 
select customer_name, account_number, loan_number from
(customer natural left outer join depositor) 
natural left outer join borrower
group by customer_name;

create view view1 as select customer_name,account_number,loan_number
from ((customer natural left join borrower)natural left outer join 
depositor)natural left outer join account;




create view view2 as 
select customer_name, customer_city from customer;
insert  into view2 values("Anushthan", "Agra");
desc view2;

create view view3 as 
select account_number, branch_name, max(balance) from account;
insert into view3("A1", "Pittsfield", 2000);
desc view3;

create view view4 as 
select account_number, branch_name, balance from account
group by balance;
insert into view4("A1", "Creekside", 100000);
desc view4;

create view view5 as select * from  customer,  account;
insert into view5 values("Anushthan", "BankA", "Agra", "A1", "Another Bank", 10000);
desc view5;







delimiter //
create procedure insertData()
begin
iinsert into customer values ("Adams", "Spring", "Pittsfield");
end;
delimiter ;

delimiter //;
create procedure insertData(IN account_number varchar(20), IN branch varchar(15), IN balance decimal(12, 2))
begin
    insert into account values (account_number, branch, balance);
end//;
call insertData("A-450", "Chinatown", "500");

delimiter //;
create procedure sumProduct(IN num1 int, IN num2 int, OUT sum int, OUT product int)
begin
    select num1 + num2 into sum;
    select num1 * num2 into product;
end//;
call sumProduct(10, 10, @sum, @product);

delimiter //;
create procedure displayAccount(IN bal decimal(12, 2))
begin
    select * from account where balance > bal;
end //;

ddelimiter //
create procedure displayCity(IN name varchar(20))
begin
declare i int;
set i = 0;
declare msg varchar(40);
set msg = "New entry inserted";
select count(*) into i from customer_relation where customer_name=name;
if i > 0 then 
select customer_city from customer_relation where customer_name=name;
else 
insert into customer_relation values(name, "Vadala", "Mumbai");
select msg;
end if;
end //



delimiter //;
create procedure checkLoan(in name varchar(20))
begin
declare loan varchar(30) default "entry for this customer found";
declare noLoan varchar(30) default "No loan entry for this customer";

declare c int default 0;
select count(loan_number) into c from borrower where customer_name = name;
if c>0 then select present;
else select absent;
end if;
end //;




delimiter //
create procedure display(in id int)
begin
    select emp_name, emp_dept, income from employee where emp_id = id;
end //
call display(2521);


delimiter //

create procedure deptIncome(IN name VARCHAR(30))
begin

select sum(income) from employee where emp_dept = name group by emp_dept;
end //

call dept_income("Finance");


delimiter //;
create procedure sq(INOUT num bigint)
begin
     select power(num, 2) as square;
end//;

set @num = 10;



delimiter //
create procedure display_details_employee(in dept_name varchar(20))
begin
    select emp_name, emp_dept, emp_age from dbmslab7.employee where emp_dept = dept_name;
end //
call displayEmployee("Management");




LAB 8



delimiter $$
create trigger before_workcenters_insert
before insert 
on WorkCenters for each row
begin
    delcare rowcount int;
    select count(*)
    into rowcount
    from WorkCenterStats;

    if rowcount > 0
    then
        update WorkCenterStats
        set totalCapacity = totalCapacity + new.capacity;
    else
        insert into WorkCenterStats(totalCapacity)
        values (new.capacity);
    end if;
end $$

insert into WorkCenters values(112, "A1", 7);
insert into members values(1, 'Anushthan', 'abc@xyz.com', NULL);





delimiter $$  
CREATE TRIGGER before_salaries_delete
BEFORE DELETE  
ON Salaries FOR EACH ROW  
BEGIN  
    INSERT INTO SalaryArchives(employeeNumber,validFrom,amount)
    VALUES(OLD.employeeNumber,OLD.validFrom,OLD.amount); 
END$$


delimiter $$
CREATE TRIGGER after_salaries_delete
AFTER DELETE
ON Salaries FOR EACH ROW
BEGIN
    UPDATE SalaryBudgets 
    SET total = total - old.salary;
END $$



# Lab 9
delimiter //
create function my_fun(value numeric(12,2))
returns int
deterministic
begin
declare r int;
select count(*) into r from account where
balance>value;
return (r);
end//

