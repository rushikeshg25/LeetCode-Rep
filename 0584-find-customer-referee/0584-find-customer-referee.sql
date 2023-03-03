# Write your MySQL query statement below
SELECT name 
FROM Customer
where referee_id != 2 OR referee_id IS NULL;