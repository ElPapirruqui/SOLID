# Single Responsibility Principle (SRP)

In this example, as the **bad** path, we have a function called ApplyDamageOnEnemy inside the Player class that is intended to do damage to an Enemy reference given in as a parameter.
Inside the function we can see that it applies the logic to damage the enemy but also another logic to calculate the damage based on the weapon type the Player is currently helding.

To solve this in the **good** path, we move this logic inside a Weapon class so the Player doesnt concern about how the damage is calculated. This responsability now lies on the Weapon class.