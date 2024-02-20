# Write your MySQL query statement below
select a.project_id, round( sum(b.experience_years) / count(case when b.experience_years is not null then 1 end) , 2) as average_years
from project as a
left join employee as b
on a.employee_id = b.employee_id
group by a.project_id;