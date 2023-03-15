# Liskov Substitution Principle (LSP)

In this example, on the $\textcolor{red}{\textsf{bad}}$ path side, we have a new class called **Crate** that inherits from **Enemy** since this last class has health that can be damaged and it drops loot when dies. But the problem here is that **Enemy** also can move and attack.
This interfere with the **Crate** class, given that this cant move or attack, so we must have to override these two functions in order to prevent our **Crate** to perform these actions.

To solve this, on the $\textcolor{green}{\textsf{good}}$ path side, we create 4 new interfaces: **IAttacker**, **IDamageable**, **ILooteable** and **IMovable**.
With these new interfaces now we can add the behaviours needed for both our **Enemy** and **Crate** classes, removing the inheritance and preventing our code of having unused overriden functions.
