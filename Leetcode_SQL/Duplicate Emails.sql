# Write your MySQL query statement below
select distinct p1.Email 
from person p1, person p2
where p1.Email=p2.Email and p1.Id!=p2.Id;