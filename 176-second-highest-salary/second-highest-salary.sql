# Write your MySQL query statement below

-- select distinct MAX(salary) as SecondHighestSalary
-- from employee
-- where salary < (select MAX(salary)
-- from employee
-- )

-- SELECT (
--     SELECT DISTINCT salary
--     FROM Employee
--     ORDER BY salary DESC
--     LIMIT 1 OFFSET 1
-- ) AS SecondHighestSalary;


select(select distinct salary as SecondHighestSalary
from employee
order by salary DESC
limit 1 offset 1)as SecondHighestSalary
