select name, unique_id
from Employees 
LEFT JOIN EmployeeUNI
ON Employees.id = EmployeeUNI.id;
