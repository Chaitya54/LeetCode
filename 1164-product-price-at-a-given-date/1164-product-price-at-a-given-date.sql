# Write your MySQL query statement below
select p.product_id, 10 as price
from Products p
group by p.product_id
having min(p.change_date)>'2019-08-16'
union
select p.product_id, p.new_price as price
from Products p
where(p.product_id, p.change_date) in
(
    select p.product_id, max(p.change_date)
    from Products p
    where p.change_date<='2019-08-16'
    group by p.product_id
)
