# Write your MySQL query statement below
select a.user_id, COALESCE(ROUND(count(b.action) / (select count(c.action) from Confirmations c where a.user_id = c.user_id),2), 0) as confirmation_rate
from signups as a
left join confirmations as b
on a.user_id = b.user_id and b.action = 'confirmed'
group by a.user_id;