# Write your MySQL query statement below
select b.student_id, b.student_name, a.subject_name,count(c.subject_name) as attended_exams
from subjects as a
cross join students as b
left join examinations as c
on b.student_id = c.student_id and a.subject_name = c.subject_name
group by b.student_id,a.subject_name
order by b.student_id;
