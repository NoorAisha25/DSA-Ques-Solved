CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
   DECLARE offset INT;
   SET offset = N - 1;
  RETURN (
      SELECT DISTINCT salary
      FROM Employee
      ORDER BY salary DESC
      LIMIT offset, 1
  );
END

