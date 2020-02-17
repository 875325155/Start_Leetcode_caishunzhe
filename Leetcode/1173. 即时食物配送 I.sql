# Write your MySQL query statement belows
SELECT round((SELECT COUNT(*) FROM Delivery WHERE order_date=customer_pref_delivery_date )*100/COUNT(*),2) immediate_percentage 
FROM Delivery;
