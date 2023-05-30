DELIMITER $$
CREATE PROCEDURE Employee_Work_Experience()
BEGIN
DECLARE v_finished INTEGER DEFAULT 0;
DECLARE v_first_name VARCHAR(20) DEFAULT "";
DECLARE v_last_name VARCHAR(25) DEFAULT "";
DECLARE v_exp INTEGER DEFAULT 0;
DECLARE v_exp_years VARCHAR(30) DEFAULT "";
DECLARE v_hire_date DATE;
DECLARE cu1 CURSOR FOR SELECT first_name, last_name, hire_date FROM
employees;
DECLARE CONTINUE HANDLER FOR NOT FOUND SET v_finished = 1;
OPEN cu1;
get_emp: LOOP
FETCH cu1 INTO v_first_name, v_last_name, v_hire_date;
IF v_finished = 1 THEN
LEAVE get_emp;
END IF;
SET v_exp = 2021 - YEAR(v_hire_date);
IF v_exp = 0 THEN
SET v_exp_years = 'Less than 1 year';
ELSEIF v_exp = 1 THEN
SET v_exp_years = '1 year';
ELSEIF v_exp = 2 THEN
SET v_exp_years = '2 years';
ELSEIF v_exp = 3 THEN
SET v_exp_years = '3 years';
ELSEIF v_exp = 4 THEN
SET v_exp_years = '4 years';
ELSEIF v_exp = 5 THEN
SET v_exp_years = '5 years';
ELSE
SET v_exp_years = 'Greater than 5 years';
END IF;
SELECT v_first_name AS first_name, v_last_name AS last_name, v_hire_date
AS hire_date, v_exp_years AS work_experience;
END LOOP get_emp;
CLOSE cu1;
END $$
DELIMITER ;