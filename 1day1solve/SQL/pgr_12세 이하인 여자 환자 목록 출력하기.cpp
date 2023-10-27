
SELECT PT_NAME, PT_NO, GEND_CD, AGE, ifnull(TLNO,'NONE') as TLNO
FROM PATIENT
where AGE<=12 and GEND_CD='W'
order by AGE DESC, PT_NAME
