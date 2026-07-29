# Write your MySQL query statement below
select b.product_name,a.year,a.price
from Sales as a
join product as b
on a.product_id=b.product_id;