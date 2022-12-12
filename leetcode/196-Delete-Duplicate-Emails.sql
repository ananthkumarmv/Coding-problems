# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
Delete p1 from Person p1, Person p2 
where p2.email = p1.email and p2.id < p1.id;