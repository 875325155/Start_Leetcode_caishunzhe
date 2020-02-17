# Write your MySQL query statement below
SELECT employee_id, COUNT(team_id) team_size
FROM Employee 
GROUP BY team_id;