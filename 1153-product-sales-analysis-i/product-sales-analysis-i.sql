# Write your MySQL query statement below
SELECT su.product_name,s.year,s.price
FROM  Sales s
LEFT JOIN Product su

ON su.product_id=s.product_id;
