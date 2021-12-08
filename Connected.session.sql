CREATE TABLE dept(dept_id int not null auto_increment,
 dept_name varchar(20),
 dept_HOD varchar (20) not null,
 dept_stud_strength int,
 primary key(dept_id));


CREATE TABLE dept_faculty(fac_id int not null,
 fac_name varchar(20),
 dept_id int,
 fac_qual varchar(20),
 fac_contact bigint,
 foreign key (dept_id) references dept(dept_id));

 DESC dept_faculty
 