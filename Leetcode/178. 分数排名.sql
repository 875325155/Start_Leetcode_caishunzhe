# Write your MySQL query statement below
SELECT s1.Score, COUNT(DISTINCT s2.score) AS Rank 
FROM Scores s1,Scores.s2
WHERE s1.score<=s2.score
GROUP BY s1.Id
ORDER BY s1.Score DESC;