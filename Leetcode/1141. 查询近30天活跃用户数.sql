# Write your MySQL query statement below
SELECT activity_date day,COUNT(DISTINCT user_id) active_users 
FROM Activity
WHERE activity_date>=2019-6-27 AND activity_date<=2019-6-27
GROUP BY day;