select Employee.name,Bonus.bonus from Employee left join bonus on Employee.empId = Bonus.empId
where Bonus.bonus is null or Bonus.bonus < 1000;