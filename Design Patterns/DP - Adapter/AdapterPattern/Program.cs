using System;

interface IStudentTarget
{
    void Study();
}

class Student : IStudentTarget
{
    public void Study() => Console.WriteLine("Student is studying.");
}
class LegacyStudent
{
    public void BeginStudying() => Console.WriteLine("Legacy Student starts studying.");
}

class StudentAdapter : IStudentTarget
{
    private LegacyStudent legacyStudent;

    public StudentAdapter(LegacyStudent legacyStudent)
    {
        this.legacyStudent = legacyStudent;
    }

    public void Study()
    {
        legacyStudent.BeginStudying();
    }
}