DECLARE 
   x number; 
BEGIN 
   x := 10;
   LOOP 
      dbms_output.put_line(x); 
      x := x + 10; 
      exit WHEN x > 50; -- WE CAN ALSO USE IF
   END LOOP; 
   dbms_output.put_line('After Exit x is: ' || x); 
END; 
/
-- @ \\Mac\Home\Desktop\PLSQL.sql