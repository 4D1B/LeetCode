-- Write your PostgreSQL query statement below
select class FROM (select class  , count(class     ) AS totalCount from Courses   group by class    
having count(*) >= 5
order by totalCount DESC
)