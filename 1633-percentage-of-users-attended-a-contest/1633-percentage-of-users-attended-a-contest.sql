# Write your MySQL query statement below
select a.contest_id, round(count(a.contest_id) / (select count(c.user_id) from users as c) *100,2) as percentage
from users as b
right join register as a
on a.user_id = b.user_id
group by a.contest_id
order by percentage desc, a.contest_id asc;