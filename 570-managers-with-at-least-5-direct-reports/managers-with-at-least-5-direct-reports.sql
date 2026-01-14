-- Write your PostgreSQL query statement below
select name from (
select max(e2.managerId ) , e1.name from Employee  e1,Employee e2 where
e1.id = e2.managerId 
group by e2.managerId, e1.name 
having count (*) >=5)