# Write your MySQL query statement below
with RankedDates as(
    select *, row_number() over(partition by a.customer_id order by a.order_date) as rn
    from delivery as a
)
select coalesce(round((count(case when b.order_date = b.customer_pref_delivery_date then 1 end) / count(b.customer_id)) * 100 ,2), 0) as immediate_percentage
from RankedDates as b
where b.rn = 1