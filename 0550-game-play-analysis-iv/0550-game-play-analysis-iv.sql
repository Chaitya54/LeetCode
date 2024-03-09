# Write your MySQL query statement below
select round( count(distinct a.player_id) / (select count(distinct player_id) from activity) , 2) as fraction
from activity as a
where (a.player_id, date_sub(a.event_date, interval 1 day)) in
(select b.player_id, min(b.event_date)
from activity as b
group by b.player_id)