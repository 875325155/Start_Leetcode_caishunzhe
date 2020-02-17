# Write your MySQL query statement below
SELECT DISTINCT Email   
FROM  Person A,Person B
WHERE A.Email=B.Email AND A.Id!=B.Id;