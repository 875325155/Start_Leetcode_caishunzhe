# Write your MySQL query statement below
SELECT Product.product_id product_id,SUM(quantity) total_quantity 
FROM Sales,Product
WHERE Sales.product_id =Product.product_id 
GROUP BY product_id;