using System;

class Program
{
    static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.White;
        int totalScore = 0;
        int questionIndex = 0;
        string[] questions = 
        {
            "What is the capital of France?",
            "Which planet is known as the Red Planet?",
            "Who wrote the play \"Romeo and Juliet\"?",
            "What is the largest mammal on Earth?",
            "In which year did Christopher Columbus discover America?",
            "What is the tallest mountain in the world?",
            "Which gas do plants absorb from the atmosphere?",
            "Who painted the Mona Lisa?",
            "What is the chemical symbol for water?",
            "Which continent is known as the \"Land Down Under\"?"
        };
        
        string[][] answers = 
        {
            new string[] { "Paris", "Berlin", "Madrid" },
            new string[] { "Earth", "Mars", "Jupiter" },
            new string[] { "William Shakespeare", "Charles Dickens", "Jane Austen" },
            new string[] { "Elephant", "Giraffe", "Blue Whale" },
            new string[] { "1492", "1776", "1969" },
            new string[] { "Mount Kilimanjaro", "Mount Fuji", "Mount Everest" },
            new string[] { "Oxygen", "Nitrogen", "Carbon Dioxide" },
            new string[] { "Vincent van Gogh", "Leonardo da Vinci", "Pablo Picasso" },
            new string[] { "Wt", "H2O", "CO2" },
            new string[] { "Asia", "Europe", "Australia" }
        };

        Random rand = new Random();
        
        while (questionIndex < questions.Length)
        {
            Console.Clear();
            int[] randomOrder = GetRandomOrder(answers[questionIndex].Length);

            Console.WriteLine(questions[questionIndex]);
            
            for (int i = 0; i < answers[questionIndex].Length; i++)
            {
                Console.WriteLine($"{(char)('a' + i)}) {answers[questionIndex][randomOrder[i]]}");
            }

            char userAnswer = Console.ReadKey().KeyChar;
            int correctAnswerIndex = Array.IndexOf(randomOrder, 0);

            if (userAnswer == (char)('a' + correctAnswerIndex))
            {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.WriteLine("\nRight!\n");
                totalScore += 10;
            }
            else
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("\nWrong!\n");
            }

            Console.ForegroundColor = ConsoleColor.White;
            Console.WriteLine("Enter Key To Continue...");
            Console.ReadKey();

            questionIndex++;
        }

        Console.Clear();
        Console.WriteLine($"Congrats!, {totalScore}");
    }

    static int[] GetRandomOrder(int length)
    {
        Random rand = new Random();
        int[] order = new int[length];
        for (int i = 0; i < length; i++)
        {
            order[i] = i;
        }

        for (int i = 0; i < length; i++)
        {
            int temp = order[i];
            int randomIndex = rand.Next(i, length);
            order[i] = order[randomIndex];
            order[randomIndex] = temp;
        }

        return order;
    }
}