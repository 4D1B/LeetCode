-- Write your PostgreSQL query statement below
select customer_number FROM (select customer_number  ,count(customer_number ) AS totalCount from Orders group by customer_number
order by totalCount DESC LIMIT 1)