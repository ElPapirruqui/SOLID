# Open/Closed Principle (OCP)

In this example, on the $\textcolor{red}{\textsf{bad}}$  path side, we have the damage of the **Weapon** calculated inside a function called **GetTotalDamage** depending on the weapon type.
This type of function makes for us impossible to add a new **Weapon** without modifiying the function itself.

So to solve this in the $\textcolor{green}{\textsf{good}}$ path, we use the **Weapon** class as an interface and create different classes such as **Blade** and **Blunt** that implements the **Weapon** interface, overriding the **GetTotalDamage** in each class giving us the different damage outputs.
