-----------------------------------------------
--1-

select *
from Employee
where duty = 'boss';

-----------------------------------------------
--2-

select *
from Employee,Branch
where branch_code = 2;

-----------------------------------------------
--3-

select idCus,nameCus
from Customer
where account_type = 'saving account';

-----------------------------------------------
--4-

select *
from Customer
where code = 1;

------------------------------------------------

--5-

select *
from CreditCard
where exDate > 14000601;

-------------------------------------------------

