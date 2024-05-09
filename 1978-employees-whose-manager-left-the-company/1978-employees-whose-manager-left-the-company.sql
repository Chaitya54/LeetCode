# Write your MySQL query statement below
select a.employee_id
from employees as a
where a.salary < 30000 and a.manager_id not in (select employee_id from employees)
order by a.employee_id