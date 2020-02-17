# Write your MySQL query statement below
SELECT DISTINCT customer_id 
FROM Customer,Product 
GROUP BY customer_id
HAVING COUNT(DISTINCT Customer.product_key)=
(SELECT COUNT(*) FROM Product);
