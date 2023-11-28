using System;
using AnimalShop;
class Program
{
    static void Main()
    {
        Animal cat1 = new Animal { Nickname = "Tom", Age = 2, Gender = "Male", Energy = 50, Price = 100, MealQuantity = 5 };
        Animal dog1 = new Animal { Nickname = "Max", Age = 3, Gender = "Male", Energy = 70, Price = 150, MealQuantity = 6 };
        Animal bird1 = new Animal { Nickname = "Simba", Age = 1, Gender = "Female", Energy = 30, Price = 50, MealQuantity = 2 };
        Animal fish1 = new Animal { Nickname = "Lucy", Age = 1, Gender = "Female", Energy = 20, Price = 30, MealQuantity = 1 };
        
        PetShop petShop = new PetShop();
        
        petShop.Cats.Add(cat1);
        petShop.Dogs.Add(dog1);
        petShop.Birds.Add(bird1);
        petShop.Fishes.Add(fish1);
        
        cat1.Eat();
        dog1.Play();
        bird1.Sleep();
        fish1.Eat();
        
        petShop.RemoveByNickName(petShop.Cats, "Tom");
        
        int totalMeals = petShop.CalculateTotalMeals();
        double totalPrice = petShop.CalculateTotalPrice();

        Console.WriteLine($"Total amount of food: {totalMeals}");
        Console.WriteLine($"Total price: {totalPrice}");

        Console.ReadLine();
    }
}