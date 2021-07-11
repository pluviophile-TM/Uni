create table Bank
(branch_code int,
 nameBank varchar(20),
 date_of_established int,
 primary key (branch_code));
 
 insert into Bank values('1','babol','12560208');
 insert into Bank values('2','babolsar','13451116');
 insert into Bank values('3','sari','13780523');
 
-------------------------------------
create table Branch
(branch_code int,
 code int,
 address varchar(100),
 primary key (code),
 foreign key (branch_code) REFERENCES Bank(branch_code));
 
 insert into Branch values('1','1','babol shariati');
 insert into Branch values('2','2','babolsar nezam');
 insert into Branch values('3','3','sari meydan saat');
-------------------------------------


create table Employee
(duty varchar(20),
 salary int,
 idEmp int,
 code int,
 phoneNumber varchar(15),
 primary key (idEmp),
 foreign key (code) REFERENCES Branch(code));
 
 insert into Employee values('boss','200','1','1','09111533664');
 insert into Employee values('boss','200','2','2','09023564256');
 insert into Employee values('boss','200','3','3','09120365021');
 insert into Employee values('staff','80','4','1','09125053623');
 insert into Employee values('staff','70','5','2','09030254604');
 insert into Employee values('staff','60','6','3','09120920894');
 
-------------------------------------
create table Customer
(code int,
 idCus int,
 nameCus varchar(20),
 email varchar(100),
 phone int,
 adrress varchar(100),
 postCode int,
 account_type varchar(20),
 primary key (idCus),
 foreign key (code) REFERENCES Branch(code));
 
 insert into Customer values('3','1','ali alayee','alialayee@gmail.com','0912362514','sari emam','19196363','saving account');
 insert into Customer values('1','2','tahmine majidi','tahminemajidi@gmail.com','0912689514','babol shariati','12126598','NRI account');
 insert into Customer values('1','3','zara hassani','zarahassani@gmail.com','0912125514','sari saat','13134569','saving account');

-------------------------------------
create table Loan
(idCus int,
 amount int,
 percentLoan int,
 foreign key (idCus) REFERENCES Customer(idCus));
 
 insert into Loan values('2','120','7');
 insert into Loan values('3','250','10');
-------------------------------------
create table Account
(account_type varchar(20),
 percentAcc int,
 card_num varchar(50),
 idCus int,
 primary key (card_num),
 foreign key (idCus) REFERENCES Customer(idCus));
 
 insert into Account values('saving account','12','6037997578725393','1');
 insert into Account values('NRI account','10','6037997578724525','2');
 insert into Account values('Savings account','12','6037997579658493','3');
-------------------------------------
create table CreditCard
(card_num varchar(50),
 cv int,
 exDate int,
 foreign key (card_num) REFERENCES Account(card_num));
 
 insert into CreditCard values('6037997578725393','3656','14001025');
 insert into CreditCard values('6037997578724525','3445','14000912');
 insert into CreditCard values('6037997579658493','3395','14000502');
-------------------------------------