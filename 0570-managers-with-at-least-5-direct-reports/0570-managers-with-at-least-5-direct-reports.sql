# Write your MySQL query statement below
select a.name
from employee as a
join employee as b
on a.id = b.managerId
group by a.id
having count(b.managerId) >= 5;