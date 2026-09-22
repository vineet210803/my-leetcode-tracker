# Write your MySQL query statement below

select distinct MAX(salary) as SecondHighestSalary
from employee
where salary < (select MAX(salary)
from employee
)
