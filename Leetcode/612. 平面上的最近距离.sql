# Write your MySQL query statement below
SELECT MIN(round(sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)),3)) shortest
FROM point_2d a,point_2d b
WHERE a.x!=b.x OR a.y!=b.y;
