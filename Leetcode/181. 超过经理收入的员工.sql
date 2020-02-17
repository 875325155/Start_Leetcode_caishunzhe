# Write your MySQL query statement below
SELECT DISTINCT B.Name Employee 
FROM Employee A,Employee B
WHERE A.Id =B.ManagerId AND A.Salary<B.Salary; 
