# Write your MySQL query statement below
select d.Name as Department, e.Name as Employee, e.Salary
from Employee e, Department d
where e.departmentId=d.Id
and 3> (select count(distinct e2.Salary) from Employee e2 where e2.salary>e.salary and e.departmentId=e2.departmentId);