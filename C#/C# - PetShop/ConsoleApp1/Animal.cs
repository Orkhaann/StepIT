namespace AnimalShop
{
    public class Animal
    {
        public string Nickname { get; set; }
        public int Age { get; set; }
        public string Gender { get; set; }
        public int Energy { get; set; }
        public double Price { get; set; }
        public int MealQuantity { get; set; }

        public void Eat()
        {
            Energy += MealQuantity;
            Console.WriteLine($"{Nickname} ate. Energy increased: {Energy}");
        }

        public void Sleep()
        {
            Energy = 0;
            Console.WriteLine($"{Nickname} sleeping...");
        }

        public void Play()
        {
            if (Energy > 0)
            {
                Energy -= 10;
                Console.WriteLine($"{Nickname} played. Energy has decreased: {Energy}");
            }
            else
            {
                Console.WriteLine($"{Nickname} energy has run out. He needs to rest.");
            }
        }
    }
}