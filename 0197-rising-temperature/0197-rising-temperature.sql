# Write your MySQL query statement below
select a.id 
from weather as a
join weather as b
on DATEDIFF(a.recordDate,b.recordDate)=1
where a.temperature>b.temperature;