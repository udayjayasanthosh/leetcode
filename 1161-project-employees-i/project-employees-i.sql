select Project.project_id,Round(avg(Employee.experience_years),2) as average_years from Project
join Employee on Project.employee_id=Employee.employee_id
group by Project.project_id;