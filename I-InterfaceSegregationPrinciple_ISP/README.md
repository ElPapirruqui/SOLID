# Interface Segregation Principle (ISP)

In this example we want our **Enemy** to be able to be a common or a boss type, giving to the last one mentioned the ability to perform a special attack. So for this, on the $\textcolor{red}{\textsf{bad}}$ path side, we have a function called **SpecialAttackOnTarget** that only has a behaviour defined when the enemy type is a boss, leaving the rest of the **Enemy** types with a function they are not going to use in the future.

To solve this, in the $\textcolor{green}{\textsf{good}}$ path side, we now have the **Enemy** class as an interface or parent class which is going to be implemented or inherited for the new **Enemy** type classes, the **BossEnemy** and **CommonEnemy** classes.
With this change done, we also create a new interface called **ISpecialAttacker** in order to give this behaviour only to the classes that needs to have an special attack.
