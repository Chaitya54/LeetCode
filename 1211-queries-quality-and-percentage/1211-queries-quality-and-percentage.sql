# Write your MySQL query statement below
select a.query_name, round(avg(a.rating/a.position),2) as quality, round((count(case when a.rating < 3 then 1 end)/count(a.rating) * 100),2) as poor_query_percentage
from queries as a
group by a.query_name
having a.query_name is not null;