use [Employees]

------------------------------------------------------------------- 1 ---------------------------------------------------------------------

SELECT
    BusinessEntityID,
    firstname,
    lastname,
    CountryRegionName,
    city
FROM
    Employees
WHERE
    CountryRegionName = 'United States';

------------------------------------------------------------------- 2 ---------------------------------------------------------------------

SELECT
    JobTitle,
    COUNT(*) AS NumberOfEmployees
FROM
    Employees
GROUP BY
    JobTitle;

------------------------------------------------------------------- 3 ---------------------------------------------------------------------

SELECT
    FirstName,
    COUNT(*) AS NumberOfEmployees
FROM
    Employees
GROUP BY
    FirstName;

------------------------------------------------------------------- 4 ---------------------------------------------------------------------

SELECT TOP 1
    FirstName,
    COUNT(*) AS NameCount
FROM
    Employees
GROUP BY
    FirstName
ORDER BY
    NameCount DESC;

------------------------------------------------------------------- 5 ---------------------------------------------------------------------

SELECT TOP 1
    FirstName,
    COUNT(*) AS NameCount
FROM
    Employees
GROUP BY
    FirstName
ORDER BY
    NameCount ASC;

------------------------------------------------------------------- 6 ---------------------------------------------------------------------

SELECT TOP 5
    City,
    COUNT(*) AS TotalWorkers
FROM
    Employees
GROUP BY
    City
ORDER BY
    TotalWorkers DESC;

------------------------------------------------------------------- 7 ---------------------------------------------------------------------

SELECT TOP 5
    City,
    COUNT(DISTINCT JobTitle) AS UniqueSpecialtiesCount
FROM
    Employees
GROUP BY
    City
ORDER BY
    UniqueSpecialtiesCount DESC;

------------------------------------------------------------------- 8 ---------------------------------------------------------------------

SELECT
    FirstName,
    LastName,
    EmailAddress
FROM
    Employees
WHERE
    StartDate = '2012-01-01';

------------------------------------------------------------------- 9 ---------------------------------------------------------------------

SELECT
    YEAR(StartDate) AS EmploymentYear,
    COUNT(*) AS NumberOfEmployees
FROM
    Employees
GROUP BY
    YEAR(StartDate)
ORDER BY
    EmploymentYear;

------------------------------------------------------------------- 10 ---------------------------------------------------------------------

SELECT
    YEAR(StartDate) AS EmploymentYear,
    CountryRegionName,
    COUNT(*) AS NumberOfWorkers
FROM
    Employees
GROUP BY
    YEAR(StartDate),
    CountryRegionName
ORDER BY
    EmploymentYear, CountryRegionName;

------------------------------------------------------------------- 11 ---------------------------------------------------------------------

UPDATE Employees
SET Employees.EndDate = History.EndDate
FROM Employees
JOIN History ON Employees.BusinessEntityID = History.BusinessEntityID;

------------------------------------------------------------------- 12 ---------------------------------------------------------------------

SELECT
    YEAR(EndDate) AS LeavingYear,
    COUNT(*) AS NumberOfEmployeesLeft
FROM
    Employees
WHERE
    EndDate IS NOT NULL
GROUP BY
    YEAR(EndDate)
ORDER BY
    LeavingYear;

------------------------------------------------------------------- 13 ---------------------------------------------------------------------

SELECT
    COUNT(*) AS NumberOfEmployees
FROM
    Employees
WHERE
    DATEDIFF(MONTH, StartDate, EndDate) < 12
    OR EndDate IS NULL;