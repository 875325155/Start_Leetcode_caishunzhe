# Write your MySQL query statement below
SELECT  MIN(ABS(A.x-B.x))shortest
FROM point A,point B
WHERE A.x !=B.x;