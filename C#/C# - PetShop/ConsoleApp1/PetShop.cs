namespace AnimalShop
{
    class PetShop
    {
        public List<Animal> Cats { get; set; }
        public List<Animal> Dogs { get; set; }
        public List<Animal> Birds { get; set; }
        public List<Animal> Fishes { get; set; }
    
        public PetShop()
        {
            Cats = new List<Animal>();
            Dogs = new List<Animal>();
            Birds = new List<Animal>();
            Fishes = new List<Animal>();
        }
    
        public void RemoveByNickName(List<Animal> animals, string nickname)
        {
            Animal animalToRemove = animals.Find(a => a.Nickname == nickname);
            if (animalToRemove != null)
            {
                animals.Remove(animalToRemove);
                Console.WriteLine($"{nickname} The animal named was removed from the store.");
            }
            else
            {
                Console.WriteLine($"{nickname} The animal named was not found in the store.");
            }
        }
    
        public double CalculateTotalPrice()
        {
            double totalPrice = 0;
            foreach (Animal cat in Cats)
            {
                totalPrice += cat.Price;
            }
            foreach (Animal dog in Dogs)
            {
                totalPrice += dog.Price;
            }
            foreach (Animal bird in Birds)
            {
                totalPrice += bird.Price;
            }
            foreach (Animal fish in Fishes)
            {
                totalPrice += fish.Price;
            }
            return totalPrice;
        }
    
        public int CalculateTotalMeals()
        {
            int totalMeals = 0;
            foreach (Animal cat in Cats)
            {
                totalMeals += cat.MealQuantity;
            }
            foreach (Animal dog in Dogs)
            {
                totalMeals += dog.MealQuantity;
            }
            foreach (Animal bird in Birds)
            {
                totalMeals += bird.MealQuantity;
            }
            foreach (Animal fish in Fishes)
            {
                totalMeals += fish.MealQuantity;
            }
            return totalMeals;
        }
    }
}