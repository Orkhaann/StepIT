﻿USE [Library]

CREATE TRIGGER TASK1 
ON S_Cards
AFTER INSERT
AS	
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book
		FROM inserted AS i
	)

	IF NOT EXISTS (
		SELECT *
		FROM Books AS B
		WHERE B.Id = @book_id
		AND B.Quantity > 0
	)
	BEGIN
		PRINT 'THIS BOOK IS OVER!'
		ROLLBACK TRAN
	END
END

INSERT INTO S_Cards 
VALUES (14,3,14,'12/12/2001',NULL,2)

CREATE TRIGGER TASK11
ON T_Cards
AFTER INSERT
AS	
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book
		FROM inserted AS i
	)

	IF NOT EXISTS (
		SELECT *
		FROM Books AS B
		WHERE B.Id = @book_id
		AND B.Quantity > 0
	)
	BEGIN
		PRINT 'THIS BOOK IS OVER!'
		ROLLBACK TRAN
	END
END

INSERT INTO T_Cards 
VALUES (14,3,14,'12/12/2001',NULL,2)

CREATE TRIGGER TASK2
ON S_Cards
INSTEAD OF INSERT 
AS
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book 
		FROM inserted AS i
	)

			UPDATE Books
			SET Quantity = Quantity + 1
			WHERE Id = @book_id
			PRINT 'Success!'

END

INSERT INTO S_Cards 
VALUES (14,15,2,'12/12/2001',NULL,2)

CREATE TRIGGER TASK22
ON T_Cards
INSTEAD OF INSERT 
AS
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book 
		FROM inserted AS i
	)
			UPDATE Books
			SET Quantity = Quantity + 1
			WHERE Id = @book_id
			PRINT 'Success!'
END

CREATE TRIGGER TASK3
ON S_Cards
INSTEAD OF INSERT 
AS
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book 
		FROM inserted AS i
	)
	UPDATE Books
	SET Quantity = Quantity - 1
	WHERE Id = @book_id
	PRINT 'Success!'
END

INSERT INTO S_Cards 
VALUES (14,15,2,'12/12/2001',NULL,2)

CREATE TRIGGER TASK33
ON T_Cards
INSTEAD OF INSERT 
AS
BEGIN
	DECLARE @book_id AS INT = (
		SELECT i.Id_Book 
		FROM inserted AS i
	)
			UPDATE Books
			SET Quantity = Quantity - 1
			WHERE Id = @book_id
			PRINT 'Success!'
END

CREATE TRIGGER TASK4 
ON S_Cards
FOR INSERT 
AS
BEGIN
	DECLARE @student_count AS INT = 
	(
		SELECT COUNT(*) 
		FROM S_Cards AS SC
		WHERE SC.Id_Student = (
			SELECT i.Id_Student 
			FROM inserted AS i
		)
	)

	IF @student_count > 3 
		BEGIN
			PRINT 'U HAVE TAKED MORE THAN 3 BOOKS NOW U CAN NOT TAKE A NEW BOOK ! '
			ROLLBACK TRAN
		END
END

SELECT * FROM S_Cards

INSERT INTO S_Cards
VALUES (15,4,15,'12/12/2015',NULL,2)

CREATE TRIGGER TASK5
ON S_Cards
AFTER INSERT
AS 
BEGIN
	DECLARE @ay_ferqi AS INT 
	DECLARE @date_out AS DATE
	DECLARE @date_in AS DATE

	SELECT DATEDIFF(MONTH,'05/07/2000','04/12/2001')

	IF EXISTS (
		SELECT * 
		FROM S_Cards AS SC
		WHERE DATEDIFF(MONTH,SC.DateOut,SC.DateIn) > 2
	)
	BEGIN	
		PRINT 'YOU HAVE BEEN READING THE BOOK FOR MORE THAN 2 MONTHS, WE CANNOT GIVE YOU A BOOK!'
		ROLLBACK TRAN
	END
END

CREATE TRIGGER TASK6
ON Books
AFTER DELETE
AS
BEGIN
	CREATE TABLE LibDeleted
	(id INT,[Name]  NVARCHAR(100) ,Pages INT ,YearPress INT ,Id_Themes INT ,Id_Category INT,Id_Author INT ,Comment NVARCHAR(50) ,Quantity INT)

	INSERT INTO LibDeleted
	SELECT * FROM deleted
END

DELETE Books
WHERE Id = 17

SELECT * FROM Books
SELECT * FROM LibDeleted


