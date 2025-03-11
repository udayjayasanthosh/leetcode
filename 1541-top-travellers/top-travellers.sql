SELECT Users.name, COALESCE(SUM(Rides.distance), 0) AS travelled_distance
FROM Users
left join Rides ON Users.id = Rides.user_id
GROUP BY Users.id
order by travelled_distance desc , Users.name;
