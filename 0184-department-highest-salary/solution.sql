# Write your MySQL query statement below
select Department.name as Department,
       Employee.name as Employee,
       Employee.salary
from   Employee
join Department
on Employee.departmentId = Department.id
where (departmentId , salary) in(
    select departmentId , max(salary)
    from employee
    group by departmentId
);


