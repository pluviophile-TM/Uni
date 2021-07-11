
create function increase_salary() returns trigger as $increase_salary$
  begin
    if New.salary < 300 then
    UPDATE Employee SET salary  = salary*1.5
	 WHERE duty ='staff' and New.idEmp = idEmp;
   end if;
   return null;
   end;
$increase_salary$ LANGUAGE PlpgSQL;
CREATE TRIGGER increase_salary AFTER INSERT ON Employee FOR EACH ROW EXECUTE PROCEDURE increase_salary();
 delete from Employee;

  insert into Employee values('boss','200','1','1','09111533664');
 insert into Employee values('boss','200','2','2','09023564256');
 insert into Employee values('boss','200','3','3','09120365021');
 insert into Employee values('staff','80','4','1','09125053623');
 insert into Employee values('staff','70','5','2','09030254604');
 insert into Employee values('staff','60','6','3','09120920894');

select *
from Employee;