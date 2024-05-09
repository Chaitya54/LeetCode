# Write your MySQL query statement below
select person_name
from (select person_name, turn, sum(weight) over(order by turn) as cum_weight
     from Queue) p1
where cum_weight <= 1000
order by turn desc
limit 1