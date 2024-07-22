select name from customer
where 
 id NOT IN
  (
    select id 
    from customer 
    where referee_id = 2
  )